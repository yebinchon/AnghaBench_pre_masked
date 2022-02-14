
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply_config {struct max14656_chip* drv_data; } ;
struct TYPE_2__ {int get_property; int num_properties; int properties; int type; int name; } ;
struct max14656_chip {int irq; int irq_work; int detect_psy; TYPE_1__ psy_desc; scalar_t__ online; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,int ,struct max14656_chip*) ;
 struct max14656_chip* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,TYPE_1__*,struct power_supply_config*) ;
 int FUNC_7 (struct device*,int,int ,int ,int ,struct max14656_chip*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct i2c_adapter*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct max14656_chip*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_13,
     const struct i2c_device_id *VAR_14)
{
 struct i2c_adapter *VAR_15 = VAR_13->adapter;
 struct device *VAR_16 = &VAR_13->dev;
 struct power_supply_config VAR_17 = {};
 struct max14656_chip *VAR_18;
 int VAR_19 = VAR_13->irq;
 int VAR_20 = 0;

 if (VAR_19 <= 0) {
  FUNC_3(VAR_16, "invalid irq number: %d\n", VAR_19);
  return -VAR_1;
 }

 if (!FUNC_9(VAR_15, VAR_4)) {
  FUNC_3(VAR_16, "No support for SMBUS_BYTE_DATA\n");
  return -VAR_1;
 }

 VAR_18 = FUNC_5(VAR_16, sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_17.drv_data = VAR_18;
 VAR_18->client = VAR_13;
 VAR_18->online = 0;
 VAR_18->psy_desc.name = VAR_6;
 VAR_18->psy_desc.type = VAR_7;
 VAR_18->psy_desc.properties = VAR_8;
 VAR_18->psy_desc.num_properties = FUNC_0(VAR_8);
 VAR_18->psy_desc.get_property = VAR_9;
 VAR_18->irq = VAR_19;

 VAR_20 = FUNC_10(VAR_18);
 if (VAR_20)
  return -VAR_1;

 VAR_18->detect_psy = FUNC_6(VAR_16,
         &VAR_18->psy_desc, &VAR_17);
 if (FUNC_2(VAR_18->detect_psy)) {
  FUNC_3(VAR_16, "power_supply_register failed\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_18->irq_work, VAR_11);
 VAR_20 = FUNC_4(VAR_16, VAR_12, VAR_18);
 if (VAR_20) {
  FUNC_3(VAR_16, "devm_add_action %d failed\n", VAR_20);
  return VAR_20;
 }

 VAR_20 = FUNC_7(VAR_16, VAR_18->irq, VAR_10,
          VAR_5,
          VAR_6, VAR_18);
 if (VAR_20) {
  FUNC_3(VAR_16, "request_irq %d failed\n", VAR_18->irq);
  return -VAR_0;
 }
 FUNC_8(VAR_18->irq);

 FUNC_12(&VAR_18->irq_work, FUNC_11(2000));

 return 0;
}
