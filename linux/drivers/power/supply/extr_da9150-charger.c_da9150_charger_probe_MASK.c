
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {int notifier_call; } ;
struct da9150_charger {int * ibus_chan; int * vbus_chan; int * tjunc_chan; int * vbat_chan; int * usb; TYPE_1__ otg_nb; int usb_phy; int otg_work; int * supply_online; int * battery; struct device* dev; struct da9150* da9150; } ;
struct da9150 {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct platform_device*,int ,char*) ;
 int VAR_9 ;
 int FUNC_5 (struct platform_device*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct da9150*,int ) ;
 struct da9150* FUNC_7 (int ) ;
 int FUNC_8 (struct device*,char*,int) ;
 struct da9150_charger* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int ) ;
 void* FUNC_11 (struct device*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,struct da9150_charger*) ;
 void* FUNC_14 (struct device*,int *,int *) ;
 int FUNC_15 (int *) ;
 int VAR_12 ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct da9150 *VAR_15 = FUNC_7(VAR_14->parent);
 struct da9150_charger *VAR_16;
 u8 VAR_17;
 int VAR_18;

 VAR_16 = FUNC_9(VAR_14, sizeof(struct da9150_charger), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 FUNC_13(VAR_13, VAR_16);
 VAR_16->da9150 = VAR_15;
 VAR_16->dev = VAR_14;


 VAR_16->ibus_chan = FUNC_11(VAR_14, "CHAN_IBUS");
 if (FUNC_1(VAR_16->ibus_chan)) {
  VAR_18 = FUNC_3(VAR_16->ibus_chan);
  goto ibus_chan_fail;
 }

 VAR_16->vbus_chan = FUNC_11(VAR_14, "CHAN_VBUS");
 if (FUNC_1(VAR_16->vbus_chan)) {
  VAR_18 = FUNC_3(VAR_16->vbus_chan);
  goto vbus_chan_fail;
 }

 VAR_16->tjunc_chan = FUNC_11(VAR_14, "CHAN_TJUNC");
 if (FUNC_1(VAR_16->tjunc_chan)) {
  VAR_18 = FUNC_3(VAR_16->tjunc_chan);
  goto tjunc_chan_fail;
 }

 VAR_16->vbat_chan = FUNC_11(VAR_14, "CHAN_VBAT");
 if (FUNC_1(VAR_16->vbat_chan)) {
  VAR_18 = FUNC_3(VAR_16->vbat_chan);
  goto vbat_chan_fail;
 }


 VAR_16->usb = FUNC_14(VAR_14, &VAR_12, ((void*)0));
 if (FUNC_1(VAR_16->usb)) {
  VAR_18 = FUNC_3(VAR_16->usb);
  goto usb_fail;
 }

 VAR_16->battery = FUNC_14(VAR_14, &VAR_5, ((void*)0));
 if (FUNC_1(VAR_16->battery)) {
  VAR_18 = FUNC_3(VAR_16->battery);
  goto battery_fail;
 }


 VAR_17 = FUNC_6(VAR_15, VAR_0);

 switch (VAR_17 & VAR_1) {
 case 129:
 case 128:
  VAR_16->supply_online = VAR_16->battery;
  break;
 case 130:
  VAR_16->supply_online = VAR_16->usb;
  break;
 default:
  FUNC_8(VAR_14, "Unknown VBUS state - reg = 0x%x\n", VAR_17);
  VAR_16->supply_online = ((void*)0);
  break;
 }


 VAR_16->usb_phy = FUNC_10(VAR_14, VAR_4);
 if (!FUNC_2(VAR_16->usb_phy)) {
  FUNC_0(&VAR_16->otg_work, VAR_8);
  VAR_16->otg_nb.notifier_call = VAR_7;
  FUNC_16(VAR_16->usb_phy, &VAR_16->otg_nb);
 }


 VAR_18 = FUNC_4(VAR_13, VAR_6,
       "CHG_STATUS");
 if (VAR_18 < 0)
  goto chg_irq_fail;

 VAR_18 = FUNC_4(VAR_13, VAR_9,
       "CHG_TJUNC");
 if (VAR_18 < 0)
  goto tjunc_irq_fail;

 VAR_18 = FUNC_4(VAR_13, VAR_11,
       "CHG_VFAULT");
 if (VAR_18 < 0)
  goto vfault_irq_fail;

 VAR_18 = FUNC_4(VAR_13, VAR_10,
       "CHG_VBUS");
 if (VAR_18 < 0)
  goto vbus_irq_fail;

 return 0;


vbus_irq_fail:
 FUNC_5(VAR_13, "CHG_VFAULT");
vfault_irq_fail:
 FUNC_5(VAR_13, "CHG_TJUNC");
tjunc_irq_fail:
 FUNC_5(VAR_13, "CHG_STATUS");
chg_irq_fail:
 if (!FUNC_2(VAR_16->usb_phy))
  FUNC_17(VAR_16->usb_phy, &VAR_16->otg_nb);
battery_fail:
 FUNC_15(VAR_16->usb);

usb_fail:
 FUNC_12(VAR_16->vbat_chan);

vbat_chan_fail:
 FUNC_12(VAR_16->tjunc_chan);

tjunc_chan_fail:
 FUNC_12(VAR_16->vbus_chan);

vbus_chan_fail:
 FUNC_12(VAR_16->ibus_chan);

ibus_chan_fail:
 return VAR_18;
}
