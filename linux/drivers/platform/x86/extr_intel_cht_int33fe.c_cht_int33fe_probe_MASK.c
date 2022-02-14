
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct i2c_board_info {char* dev_name; int irq; int type; struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct cht_int33fe_data {struct regulator* max17047; struct regulator* fusb302; struct regulator* pi3usb30532; } ;
typedef int board_info ;
typedef int acpi_status ;


 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_3 (struct regulator*) ;
 int FUNC_4 (struct regulator*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ,char*,int *,unsigned long long*) ;
 int FUNC_8 (struct cht_int33fe_data*) ;
 int FUNC_9 (struct device*,struct cht_int33fe_data*) ;
 int FUNC_10 (struct cht_int33fe_data*) ;
 int FUNC_11 (struct device*,char*,...) ;
 struct cht_int33fe_data* FUNC_12 (struct device*,int,int ) ;
 void* FUNC_13 (struct device*,int,struct i2c_board_info*) ;
 int FUNC_14 (struct regulator*) ;
 int FUNC_15 (struct i2c_board_info*,int ,int) ;
 int * VAR_8 ;
 int FUNC_16 (struct platform_device*,struct cht_int33fe_data*) ;
 struct regulator* FUNC_17 (struct device*,char*) ;
 int FUNC_18 (struct regulator*) ;
 struct fwnode_handle* FUNC_19 (int *) ;
 int FUNC_20 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct i2c_board_info VAR_11;
 struct cht_int33fe_data *VAR_12;
 struct fwnode_handle *VAR_13;
 struct regulator *VAR_14;
 unsigned long long VAR_15;
 acpi_status VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_7(FUNC_2(VAR_10), "PTYP", ((void*)0), &VAR_15);
 if (FUNC_1(VAR_16)) {
  FUNC_11(VAR_10, "Error getting PTYPE\n");
  return -VAR_0;
 }





 if (VAR_15 != VAR_3)
  return -VAR_0;


 if (!FUNC_6("INT34D3", "1", 3)) {
  FUNC_11(VAR_10, "Error PTYPE == %d, but no INT34D3 device\n",
   VAR_3);
  return -VAR_0;
 }
 VAR_14 = FUNC_17(VAR_10, "cht_wc_usb_typec_vbus");
 if (FUNC_3(VAR_14)) {
  VAR_18 = FUNC_4(VAR_14);
  return (VAR_18 == -VAR_0) ? -VAR_2 : VAR_18;
 }
 FUNC_18(VAR_14);


 VAR_17 = FUNC_5(FUNC_0(VAR_10), 1);
 if (VAR_17 < 0) {
  if (VAR_17 != -VAR_2)
   FUNC_11(VAR_10, "Error getting FUSB302 irq\n");
  return VAR_17;
 }

 VAR_12 = FUNC_12(VAR_10, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_1;

 VAR_18 = FUNC_8(VAR_12);
 if (VAR_18)
  return VAR_18;


 VAR_18 = FUNC_9(VAR_10, VAR_12);
 if (VAR_18)
  goto out_remove_nodes;

 VAR_13 = FUNC_19(&VAR_8[VAR_6]);
 if (!VAR_13) {
  VAR_18 = -VAR_0;
  goto out_unregister_max17047;
 }

 FUNC_15(&VAR_11, 0, sizeof(VAR_11));
 FUNC_20(VAR_11.type, "typec_fusb302", VAR_5);
 VAR_11.dev_name = "fusb302";
 VAR_11.fwnode = VAR_13;
 VAR_11.irq = VAR_17;

 VAR_12->fusb302 = FUNC_13(VAR_10, 2, &VAR_11);
 if (FUNC_3(VAR_12->fusb302)) {
  VAR_18 = FUNC_4(VAR_12->fusb302);
  goto out_unregister_max17047;
 }

 VAR_13 = FUNC_19(&VAR_8[VAR_7]);
 if (!VAR_13) {
  VAR_18 = -VAR_0;
  goto out_unregister_fusb302;
 }

 FUNC_15(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.dev_name = "pi3usb30532";
 VAR_11.fwnode = VAR_13;
 FUNC_20(VAR_11.type, "pi3usb30532", VAR_5);

 VAR_12->pi3usb30532 = FUNC_13(VAR_10, 3, &VAR_11);
 if (FUNC_3(VAR_12->pi3usb30532)) {
  VAR_18 = FUNC_4(VAR_12->pi3usb30532);
  goto out_unregister_fusb302;
 }

 FUNC_16(VAR_9, VAR_12);

 return 0;

out_unregister_fusb302:
 FUNC_14(VAR_12->fusb302);

out_unregister_max17047:
 FUNC_14(VAR_12->max17047);

out_remove_nodes:
 FUNC_10(VAR_12);

 return VAR_18;
}
