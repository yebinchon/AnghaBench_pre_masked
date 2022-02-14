
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct power_supply_config {struct isp1704_charger* drv_data; } ;
struct TYPE_22__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_21__ {int notifier_call; } ;
struct TYPE_23__ {char* name; int get_property; int num_properties; int properties; int type; } ;
struct isp1704_charger {TYPE_2__* psy; int work; TYPE_2__* phy; int model; TYPE_6__* dev; TYPE_3__ nb; TYPE_7__ psy_desc; TYPE_2__* enable_gpio; } ;
struct TYPE_20__ {scalar_t__ last_event; TYPE_1__* otg; } ;
struct TYPE_19__ {int default_a; scalar_t__ gadget; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_6__*,char*,...) ;
 int FUNC_5 (TYPE_6__*,char*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_6__*,char*,int ) ;
 struct isp1704_charger* FUNC_7 (TYPE_6__*,int,int ) ;
 TYPE_2__* FUNC_8 (TYPE_6__*,int ) ;
 TYPE_2__* FUNC_9 (TYPE_6__*,char*,int ) ;
 int VAR_8 ;
 int FUNC_10 (struct isp1704_charger*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (struct isp1704_charger*) ;
 int FUNC_12 (struct platform_device*,struct isp1704_charger*) ;
 int VAR_11 ;
 TYPE_2__* FUNC_13 (TYPE_6__*,TYPE_7__*,struct power_supply_config*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_12)
{
 struct isp1704_charger *VAR_13;
 int VAR_14 = -VAR_0;
 struct power_supply_config VAR_15 = {};

 VAR_13 = FUNC_7(&VAR_12->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->enable_gpio = FUNC_6(&VAR_12->dev, "nxp,enable",
       VAR_3);
 if (FUNC_2(VAR_13->enable_gpio)) {
  VAR_14 = FUNC_3(VAR_13->enable_gpio);
  FUNC_4(&VAR_12->dev, "Could not get reset gpio: %d\n", VAR_14);
  return VAR_14;
 }

 if (VAR_12->dev.of_node)
  VAR_13->phy = FUNC_9(&VAR_12->dev, "usb-phy", 0);
 else
  VAR_13->phy = FUNC_8(&VAR_12->dev, VAR_7);

 if (FUNC_2(VAR_13->phy)) {
  VAR_14 = FUNC_3(VAR_13->phy);
  FUNC_4(&VAR_12->dev, "usb_get_phy failed\n");
  goto fail0;
 }

 VAR_13->dev = &VAR_12->dev;
 FUNC_12(VAR_12, VAR_13);

 FUNC_10(VAR_13, 1);

 VAR_14 = FUNC_11(VAR_13);
 if (VAR_14 < 0) {
  FUNC_4(&VAR_12->dev, "isp1704_test_ulpi failed\n");
  goto fail1;
 }

 VAR_13->psy_desc.name = "isp1704";
 VAR_13->psy_desc.type = VAR_4;
 VAR_13->psy_desc.properties = VAR_11;
 VAR_13->psy_desc.num_properties = FUNC_0(VAR_11);
 VAR_13->psy_desc.get_property = VAR_8;

 VAR_15.drv_data = VAR_13;

 VAR_13->psy = FUNC_13(VAR_13->dev, &VAR_13->psy_desc, &VAR_15);
 if (FUNC_2(VAR_13->psy)) {
  VAR_14 = FUNC_3(VAR_13->psy);
  FUNC_4(&VAR_12->dev, "power_supply_register failed\n");
  goto fail1;
 }





 FUNC_1(&VAR_13->work, VAR_9);

 VAR_13->nb.notifier_call = VAR_10;

 VAR_14 = FUNC_17(VAR_13->phy, &VAR_13->nb);
 if (VAR_14) {
  FUNC_4(&VAR_12->dev, "usb_register_notifier failed\n");
  goto fail2;
 }

 FUNC_5(VAR_13->dev, "registered with product id %s\n", VAR_13->model);
 if (VAR_13->phy->otg->gadget)
  FUNC_16(VAR_13->phy->otg->gadget);

 if (VAR_13->phy->last_event == VAR_5)
  FUNC_10(VAR_13, 0);


 if (VAR_13->phy->last_event == VAR_6 &&
   !VAR_13->phy->otg->default_a)
  FUNC_15(&VAR_13->work);

 return 0;
fail2:
 FUNC_14(VAR_13->psy);
fail1:
 FUNC_10(VAR_13, 0);
fail0:
 FUNC_4(&VAR_12->dev, "failed to register isp1704 with error %d\n", VAR_14);

 return VAR_14;
}
