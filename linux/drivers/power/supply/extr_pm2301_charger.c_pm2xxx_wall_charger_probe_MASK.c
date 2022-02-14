
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_20__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;


typedef scalar_t__ u8 ;
struct power_supply_config {int num_supplicants; int supplied_to; } ;
struct pm2xxx_platform_data {scalar_t__ battery; TYPE_4__* wall_charger; } ;
struct TYPE_31__ {int * update_curr; int * kick_wd; int * enable; } ;
struct TYPE_32__ {int enabled; int external; TYPE_7__* psy; int wdt_refresh; void* max_out_curr; void* max_out_volt; TYPE_5__ ops; } ;
struct TYPE_26__ {int charger_connected; } ;
struct TYPE_25__ {void** properties; int num_properties; int get_property; int type; int name; } ;
struct TYPE_29__ {struct i2c_device_id* pm2xxx_id; struct i2c_client* pm2xxx_i2c; } ;
struct pm2xxx_charger {int ac_conn; int * charger_wq; TYPE_7__* regu; TYPE_6__ ac_chg; TYPE_4__* pdata; int lpn_pin; TYPE_1__ ac; TYPE_9__* dev; int lock; TYPE_13__ ac_chg_desc; int check_hw_failure_work; int check_main_thermal_prot_work; int ac_work; TYPE_3__ config; scalar_t__ bat; int * pm2_int; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_34__ {struct pm2xxx_platform_data* platform_data; } ;
struct i2c_client {int adapter; TYPE_9__ dev; } ;
struct TYPE_28__ {int kobj; } ;
struct TYPE_33__ {TYPE_2__ dev; } ;
struct TYPE_30__ {int gpio_irq_number; int lpn_gpio; int irq_type; int num_supplicants; int supplied_to; int label; } ;
struct TYPE_27__ {int name; int isr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_7__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_9__*,char*,...) ;
 int FUNC_9 (TYPE_9__*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct pm2xxx_charger*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (struct i2c_client*,struct pm2xxx_charger*) ;
 int FUNC_20 (struct pm2xxx_charger*) ;
 struct pm2xxx_charger* FUNC_21 (int,int ) ;
 int FUNC_22 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 void** VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void** VAR_19 ;
 int FUNC_23 (struct pm2xxx_charger*,scalar_t__*) ;
 TYPE_20__* VAR_20 ;
 int VAR_21 ;
 void** VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int FUNC_24 (struct pm2xxx_charger*,int ,scalar_t__*) ;
 int FUNC_25 (TYPE_9__*) ;
 int FUNC_26 (TYPE_9__*) ;
 int FUNC_27 (TYPE_9__*) ;
 int FUNC_28 (TYPE_9__*,int ) ;
 int FUNC_29 (TYPE_9__*) ;
 int FUNC_30 (TYPE_7__*) ;
 TYPE_7__* FUNC_31 (TYPE_9__*,TYPE_13__*,struct power_supply_config*) ;
 int FUNC_32 (TYPE_7__*) ;
 TYPE_7__* FUNC_33 (TYPE_9__*,char*) ;
 int FUNC_34 (TYPE_7__*) ;
 int FUNC_35 (int ,int *,int ,int ,int ,struct pm2xxx_charger*) ;
 int FUNC_36 (struct pm2xxx_charger*) ;
 int FUNC_37 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_38(struct i2c_client *VAR_26,
  const struct i2c_device_id *VAR_27)
{
 struct pm2xxx_platform_data *VAR_28 = VAR_26->dev.platform_data;
 struct power_supply_config VAR_29 = {};
 struct pm2xxx_charger *VAR_30;
 int VAR_31 = 0;
 u8 VAR_32;
 int VAR_33;

 if (!VAR_28) {
  FUNC_8(&VAR_26->dev, "No platform data supplied\n");
  return -VAR_2;
 }

 VAR_30 = FUNC_21(sizeof(struct pm2xxx_charger), VAR_5);
 if (!VAR_30) {
  FUNC_8(&VAR_26->dev, "pm2xxx_charger allocation failed\n");
  return -VAR_4;
 }


 VAR_30->dev = &VAR_26->dev;

 VAR_30->pm2_int = &VAR_24;


 if (!VAR_28->wall_charger) {
  FUNC_8(VAR_30->dev, "no charger platform data supplied\n");
  VAR_31 = -VAR_2;
  goto free_device_info;
 }

 VAR_30->pdata = VAR_28->wall_charger;


 if (!VAR_28->battery) {
  FUNC_8(VAR_30->dev, "no battery platform data supplied\n");
  VAR_31 = -VAR_2;
  goto free_device_info;
 }

 VAR_30->bat = VAR_28->battery;

 if (!FUNC_18(VAR_26->adapter,
   VAR_6 |
   VAR_7)) {
  VAR_31 = -VAR_3;
  FUNC_9(VAR_30->dev, "pm2301 i2c_check_functionality failed\n");
  goto free_device_info;
 }

 VAR_30->config.pm2xxx_i2c = VAR_26;
 VAR_30->config.pm2xxx_id = (struct i2c_device_id *) VAR_27;
 FUNC_19(VAR_26, VAR_30);



 VAR_30->ac_chg_desc.name = VAR_30->pdata->label;
 VAR_30->ac_chg_desc.type = VAR_10;
 VAR_30->ac_chg_desc.properties = VAR_15;
 VAR_30->ac_chg_desc.num_properties = FUNC_0(VAR_15);
 VAR_30->ac_chg_desc.get_property = VAR_14;

 VAR_29.supplied_to = VAR_30->pdata->supplied_to;
 VAR_29.num_supplicants = VAR_30->pdata->num_supplicants;

 VAR_30->ac_chg.ops.enable = &VAR_13;
 VAR_30->ac_chg.ops.kick_wd = &VAR_23;
 VAR_30->ac_chg.ops.update_curr = &VAR_21;
 VAR_30->ac_chg.max_out_volt = VAR_22[
  FUNC_0(VAR_22) - 1];
 VAR_30->ac_chg.max_out_curr = VAR_19[
  FUNC_0(VAR_19) - 1];
 VAR_30->ac_chg.wdt_refresh = VAR_11;
 VAR_30->ac_chg.enabled = 1;
 VAR_30->ac_chg.external = 1;


 VAR_30->charger_wq = FUNC_6("pm2xxx_charger_wq",
        VAR_12);
 if (VAR_30->charger_wq == ((void*)0)) {
  VAR_31 = -VAR_4;
  FUNC_8(VAR_30->dev, "failed to create work queue\n");
  goto free_device_info;
 }


 FUNC_2(&VAR_30->ac_work, VAR_16);


 FUNC_2(&VAR_30->check_main_thermal_prot_work,
  VAR_18);


 FUNC_1(&VAR_30->check_hw_failure_work,
  VAR_17);






 VAR_30->regu = FUNC_33(VAR_30->dev, "vddadc");
 if (FUNC_3(VAR_30->regu)) {
  VAR_31 = FUNC_4(VAR_30->regu);
  FUNC_8(VAR_30->dev, "failed to get vddadc regulator\n");
  goto free_charger_wq;
 }


 VAR_30->ac_chg.psy = FUNC_31(VAR_30->dev, &VAR_30->ac_chg_desc,
      &VAR_29);
 if (FUNC_3(VAR_30->ac_chg.psy)) {
  FUNC_8(VAR_30->dev, "failed to register AC charger\n");
  VAR_31 = FUNC_4(VAR_30->ac_chg.psy);
  goto free_regulator;
 }


 VAR_31 = FUNC_35(FUNC_17(VAR_30->pdata->gpio_irq_number),
    ((void*)0),
    VAR_20[0].isr,
    VAR_30->pdata->irq_type,
    VAR_20[0].name, VAR_30);

 if (VAR_31 != 0) {
  FUNC_8(VAR_30->dev, "failed to request %s IRQ %d: %d\n",
  VAR_20[0].name,
   FUNC_17(VAR_30->pdata->gpio_irq_number), VAR_31);
  goto unregister_pm2xxx_charger;
 }

 VAR_31 = FUNC_27(VAR_30->dev);
 if (VAR_31)
  FUNC_8(VAR_30->dev, "set active Error\n");

 FUNC_25(VAR_30->dev);
 FUNC_28(VAR_30->dev, VAR_8);
 FUNC_29(VAR_30->dev);
 FUNC_26(VAR_30->dev);


 VAR_31 = FUNC_11(FUNC_17(VAR_30->pdata->gpio_irq_number));
 if (VAR_31) {
  FUNC_8(VAR_30->dev, "failed to set irq wake\n");
  goto unregister_pm2xxx_interrupt;
 }

 FUNC_22(&VAR_30->lock);

 if (FUNC_15(VAR_30->pdata->lpn_gpio)) {

  VAR_30->lpn_pin = VAR_30->pdata->lpn_gpio;






  VAR_31 = FUNC_16(VAR_30->lpn_pin, "pm2301_lpm_gpio");

  if (VAR_31 < 0) {
   FUNC_8(VAR_30->dev, "pm2301_lpm_gpio request failed\n");
   goto disable_pm2_irq_wake;
  }
  VAR_31 = FUNC_13(VAR_30->lpn_pin, 0);
  if (VAR_31 < 0) {
   FUNC_8(VAR_30->dev, "pm2301_lpm_gpio direction failed\n");
   goto free_gpio;
  }
  FUNC_36(VAR_30);
 }


 for (VAR_33 = 0; VAR_33 < VAR_9; VAR_33++)
  FUNC_24(VAR_30,
   VAR_25[VAR_33],
   &VAR_32);

 VAR_31 = FUNC_23(VAR_30, &VAR_32);

 if ((VAR_31 == 0) && VAR_32) {
  VAR_30->ac.charger_connected = 1;
  FUNC_5(~VAR_1,
          VAR_0);
  VAR_30->ac_conn = 1;
  FUNC_30(VAR_30->ac_chg.psy);
  FUNC_37(&VAR_30->ac_chg.psy->dev.kobj, ((void*)0), "present");
 }

 return 0;

free_gpio:
 if (FUNC_15(VAR_30->lpn_pin))
  FUNC_14(VAR_30->lpn_pin);
disable_pm2_irq_wake:
 FUNC_10(FUNC_17(VAR_30->pdata->gpio_irq_number));
unregister_pm2xxx_interrupt:

 FUNC_12(FUNC_17(VAR_30->pdata->gpio_irq_number), VAR_30);
unregister_pm2xxx_charger:

 FUNC_32(VAR_30->ac_chg.psy);
free_regulator:

 FUNC_34(VAR_30->regu);
free_charger_wq:
 FUNC_7(VAR_30->charger_wq);
free_device_info:
 FUNC_20(VAR_30);

 return VAR_31;
}
