
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct power_supply_config {int num_supplicants; int supplied_to; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct max8925_power_pdata {int no_insert_detect; int no_temp_support; int set_charger; int fast_charge; int topoff_threshold; int batt_detect; int num_supplicants; int supplied_to; } ;
struct max8925_power_info {TYPE_2__* ac; TYPE_2__* usb; int no_insert_detect; int no_temp_support; int set_charger; int fast_charge; int topoff_threshold; int batt_detect; TYPE_2__* battery; int adc; int gpm; struct max8925_chip* chip; } ;
struct max8925_chip {int adc; int i2c; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct max8925_chip* FUNC_3 (int ) ;
 struct max8925_power_info* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (struct max8925_chip*,struct max8925_power_info*) ;
 struct max8925_power_pdata* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,struct max8925_power_info*) ;
 void* FUNC_8 (TYPE_3__*,int *,struct power_supply_config*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct max8925_chip *VAR_7 = FUNC_3(VAR_6->dev.parent);
 struct power_supply_config VAR_8 = {};
 struct max8925_power_pdata *VAR_9 = ((void*)0);
 struct max8925_power_info *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(VAR_6);
 if (!VAR_9) {
  FUNC_2(&VAR_6->dev, "platform data isn't assigned to "
   "power supply\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(&VAR_6->dev, sizeof(struct max8925_power_info),
    VAR_2);
 if (!VAR_10)
  return -VAR_1;
 VAR_10->chip = VAR_7;
 VAR_10->gpm = VAR_7->i2c;
 VAR_10->adc = VAR_7->adc;
 FUNC_7(VAR_6, VAR_10);

 VAR_8.supplied_to = VAR_9->supplied_to;
 VAR_8.num_supplicants = VAR_9->num_supplicants;

 VAR_10->ac = FUNC_8(&VAR_6->dev, &VAR_3, &VAR_8);
 if (FUNC_0(VAR_10->ac)) {
  VAR_11 = FUNC_1(VAR_10->ac);
  goto out;
 }
 VAR_10->ac->dev.parent = &VAR_6->dev;

 VAR_10->usb = FUNC_8(&VAR_6->dev, &VAR_5, &VAR_8);
 if (FUNC_0(VAR_10->usb)) {
  VAR_11 = FUNC_1(VAR_10->usb);
  goto out_unregister_ac;
 }
 VAR_10->usb->dev.parent = &VAR_6->dev;

 VAR_10->battery = FUNC_8(&VAR_6->dev, &VAR_4, ((void*)0));
 if (FUNC_0(VAR_10->battery)) {
  VAR_11 = FUNC_1(VAR_10->battery);
  goto out_unregister_usb;
 }
 VAR_10->battery->dev.parent = &VAR_6->dev;

 VAR_10->batt_detect = VAR_9->batt_detect;
 VAR_10->topoff_threshold = VAR_9->topoff_threshold;
 VAR_10->fast_charge = VAR_9->fast_charge;
 VAR_10->set_charger = VAR_9->set_charger;
 VAR_10->no_temp_support = VAR_9->no_temp_support;
 VAR_10->no_insert_detect = VAR_9->no_insert_detect;

 FUNC_5(VAR_7, VAR_10);
 return 0;
out_unregister_usb:
 FUNC_9(VAR_10->usb);
out_unregister_ac:
 FUNC_9(VAR_10->ac);
out:
 return VAR_11;
}
