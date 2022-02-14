
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {struct eeprom_93xx46_platform_data* platform_data; struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct of_device_id {struct eeprom_93xx46_devtype_data* data; } ;
struct eeprom_93xx46_platform_data {int quirks; int select; int finish; int prepare; int flags; } ;
struct eeprom_93xx46_devtype_data {int quirks; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 struct eeprom_93xx46_platform_data* FUNC_4 (TYPE_1__*,int,int ) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;
 struct of_device_id* FUNC_6 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct device_node*,char*,int*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_10)
{
 const struct of_device_id *VAR_11 =
  FUNC_6(VAR_7, &VAR_10->dev);
 struct device_node *VAR_12 = VAR_10->dev.of_node;
 struct eeprom_93xx46_platform_data *VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_13 = FUNC_4(&VAR_10->dev, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_15 = FUNC_8(VAR_12, "data-size", &VAR_14);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_10->dev, "data-size property not found\n");
  return VAR_15;
 }

 if (VAR_14 == 8) {
  VAR_13->flags |= VAR_1;
 } else if (VAR_14 == 16) {
  VAR_13->flags |= VAR_0;
 } else {
  FUNC_2(&VAR_10->dev, "invalid data-size (%d)\n", VAR_14);
  return -VAR_3;
 }

 if (FUNC_7(VAR_12, "read-only"))
  VAR_13->flags |= VAR_2;

 VAR_13->select = FUNC_3(&VAR_10->dev, "select",
          VAR_6);
 if (FUNC_0(VAR_13->select))
  return FUNC_1(VAR_13->select);

 VAR_13->prepare = VAR_8;
 VAR_13->finish = VAR_9;
 FUNC_5(VAR_13->select, 0);

 if (VAR_11->data) {
  const struct eeprom_93xx46_devtype_data *VAR_16 = VAR_11->data;

  VAR_13->quirks = VAR_16->quirks;
 }

 VAR_10->dev.platform_data = VAR_13;

 return 0;
}
