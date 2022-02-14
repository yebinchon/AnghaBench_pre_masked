
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct i2c_multi_inst_data {int num_clients; int * clients; } ;
struct i2c_inst_data {char* type; int flags; int irq_idx; } ;
struct i2c_board_info {char* dev_name; int irq; int type; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct acpi_device {int dummy; } ;
typedef int name ;
typedef int board_info ;
struct TYPE_2__ {int acpi_match_table; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_device*,int ) ;
 struct acpi_device_id* FUNC_4 (int ,struct device*) ;
 int VAR_6 ;
 int FUNC_5 (struct device*,char*,int ,int) ;
 int FUNC_6 (struct device*,char*,...) ;
 char* FUNC_7 (struct device*) ;
 struct i2c_multi_inst_data* FUNC_8 (struct device*,int ,int ) ;
 int FUNC_9 (struct device*,int,struct i2c_board_info*) ;
 int FUNC_10 (struct acpi_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct i2c_board_info*,int ,int) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct i2c_multi_inst_data*) ;
 int FUNC_15 (char*,int,char*,char*,char*,int) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (struct i2c_multi_inst_data*,int ,int) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 struct i2c_multi_inst_data *VAR_8;
 const struct acpi_device_id *VAR_9;
 const struct i2c_inst_data *VAR_10;
 struct i2c_board_info VAR_11 = {};
 struct device *VAR_12 = &VAR_7->dev;
 struct acpi_device *VAR_13;
 char VAR_14[32];
 int VAR_15, VAR_16;

 VAR_9 = FUNC_4(VAR_12->driver->acpi_match_table, VAR_12);
 if (!VAR_9) {
  FUNC_6(VAR_12, "Error ACPI match data is missing\n");
  return -VAR_0;
 }
 VAR_10 = (const struct i2c_inst_data *)VAR_9->driver_data;

 VAR_13 = FUNC_0(VAR_12);


 VAR_16 = FUNC_10(VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_8 = FUNC_8(VAR_12, FUNC_17(VAR_8, VAR_6, VAR_16), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->num_clients = VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_8->num_clients && VAR_10[VAR_15].type; VAR_15++) {
  FUNC_12(&VAR_11, 0, sizeof(VAR_11));
  FUNC_16(VAR_11.type, VAR_10[VAR_15].type, VAR_4);
  FUNC_15(VAR_14, sizeof(VAR_14), "%s-%s.%d", FUNC_7(VAR_12),
    VAR_10[VAR_15].type, VAR_15);
  VAR_11.dev_name = VAR_14;
  switch (VAR_10[VAR_15].flags & VAR_5) {
  case 128:
   VAR_16 = FUNC_3(VAR_13, VAR_10[VAR_15].irq_idx);
   if (VAR_16 < 0) {
    FUNC_6(VAR_12, "Error requesting irq at index %d: %d\n",
     VAR_10[VAR_15].irq_idx, VAR_16);
    goto error;
   }
   VAR_11.irq = VAR_16;
   break;
  case 129:
   VAR_16 = FUNC_13(VAR_7, VAR_10[VAR_15].irq_idx);
   if (VAR_16 < 0) {
    FUNC_5(VAR_12, "Error requesting irq at index %d: %d\n",
     VAR_10[VAR_15].irq_idx, VAR_16);
    goto error;
   }
   VAR_11.irq = VAR_16;
   break;
  default:
   VAR_11.irq = 0;
   break;
  }
  VAR_8->clients[VAR_15] = FUNC_9(VAR_12, VAR_15, &VAR_11);
  if (FUNC_1(VAR_8->clients[VAR_15])) {
   VAR_16 = FUNC_2(VAR_8->clients[VAR_15]);
   if (VAR_16 != -VAR_2)
    FUNC_6(VAR_12, "Error creating i2c-client, idx %d\n", VAR_15);
   goto error;
  }
 }
 if (VAR_15 < VAR_8->num_clients) {
  FUNC_6(VAR_12, "Error finding driver, idx %d\n", VAR_15);
  VAR_16 = -VAR_0;
  goto error;
 }

 FUNC_14(VAR_7, VAR_8);
 return 0;

error:
 while (--VAR_15 >= 0)
  FUNC_11(VAR_8->clients[VAR_15]);

 return VAR_16;
}
