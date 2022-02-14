
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct power_supply_config {struct cpcap_charger_ddata* drv_data; int of_node; } ;
struct TYPE_8__ {int of_node; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {int dummy; } ;
struct TYPE_7__ {int set_vbus; } ;
struct cpcap_charger_ddata {int detect_work; TYPE_2__* dev; TYPE_1__ comparator; int usb; int active; int vbus_work; int irq_list; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int VAR_5 ;
 int FUNC_5 (struct cpcap_charger_ddata*) ;
 int FUNC_6 (struct cpcap_charger_ddata*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct platform_device*,struct cpcap_charger_ddata*) ;
 int FUNC_8 (TYPE_2__*,char*,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 struct cpcap_charger_ddata* FUNC_11 (TYPE_2__*,int,int ) ;
 int FUNC_12 (TYPE_2__*,int *,struct power_supply_config*) ;
 struct of_device_id* FUNC_13 (int ,TYPE_2__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct platform_device*,struct cpcap_charger_ddata*) ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 struct cpcap_charger_ddata *VAR_11;
 const struct of_device_id *VAR_12;
 struct power_supply_config VAR_13 = {};
 int VAR_14;

 VAR_12 = FUNC_13(FUNC_14(VAR_5),
    &VAR_10->dev);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_11(&VAR_10->dev, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->dev = &VAR_10->dev;

 VAR_11->reg = FUNC_9(VAR_11->dev->parent, ((void*)0));
 if (!VAR_11->reg)
  return -VAR_1;

 FUNC_1(&VAR_11->irq_list);
 FUNC_0(&VAR_11->detect_work, VAR_9);
 FUNC_0(&VAR_11->vbus_work, VAR_8);
 FUNC_16(VAR_10, VAR_11);

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14)
  return VAR_14;

 FUNC_4(&VAR_11->active, 1);

 VAR_13.of_node = VAR_10->dev.of_node;
 VAR_13.drv_data = VAR_11;

 VAR_11->usb = FUNC_12(VAR_11->dev,
      &VAR_7,
      &VAR_13);
 if (FUNC_2(VAR_11->usb)) {
  VAR_14 = FUNC_3(VAR_11->usb);
  FUNC_8(VAR_11->dev, "failed to register USB charger: %i\n",
   VAR_14);

  return VAR_14;
 }

 VAR_14 = FUNC_7(VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_11->comparator.set_vbus = VAR_6;
 VAR_14 = FUNC_15(&VAR_11->comparator);
 if (VAR_14 == -VAR_1) {
  FUNC_10(VAR_11->dev, "charger needs phy, deferring probe\n");
  return -VAR_3;
 }

 FUNC_6(VAR_11);

 FUNC_17(&VAR_11->detect_work, 0);

 return 0;
}
