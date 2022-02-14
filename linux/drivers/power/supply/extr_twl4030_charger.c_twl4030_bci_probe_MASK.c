
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u32 ;
struct twl4030_bci_platform_data {int bb_uamp; int bb_uvolt; } ;
struct TYPE_18__ {int (* notifier_call ) (TYPE_2__*,int ,int *) ;} ;
struct twl4030_bci {int ichg_eoc; int ichg_lo; int ichg_hi; int ac_cur; int usb_cur_target; TYPE_4__* transceiver; TYPE_2__ usb_nb; TYPE_4__* ac; TYPE_4__* usb; void* irq_bci; void* irq_chg; TYPE_3__* dev; TYPE_4__* channel_vac; int current_worker; int work; void* ac_mode; void* usb_mode; } ;
struct TYPE_19__ {TYPE_1__* of_node; struct twl4030_bci_platform_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct device_node {int dummy; } ;
struct TYPE_20__ {int last_event; int dev; } ;
struct TYPE_17__ {int parent; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (TYPE_3__*,char*,int,...) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 TYPE_4__* FUNC_8 (TYPE_3__*,char*) ;
 struct twl4030_bci* FUNC_9 (TYPE_3__*,int,int ) ;
 void* FUNC_10 (TYPE_3__*,int *,int *) ;
 int FUNC_11 (TYPE_3__*,void*,int *,int ,int ,int ,struct twl4030_bci*) ;
 TYPE_4__* FUNC_12 (TYPE_3__*,struct device_node*,TYPE_2__*) ;
 struct device_node* FUNC_13 (int ,char*) ;
 int FUNC_14 (struct device_node*) ;
 void* FUNC_15 (struct platform_device*,int) ;
 int FUNC_16 (struct platform_device*,struct twl4030_bci*) ;
 int VAR_18 ;
 int VAR_19 ;
 struct twl4030_bci_platform_data* FUNC_17 (TYPE_3__*) ;
 int VAR_20 ;
 int FUNC_18 (TYPE_2__*,int ,int *) ;
 int VAR_21 ;
 int FUNC_19 (struct twl4030_bci*,int) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (struct twl4030_bci*,int) ;
 int VAR_22 ;
 int FUNC_22 (struct twl4030_bci*) ;
 int VAR_23 ;
 int FUNC_23 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_24)
{
 struct twl4030_bci *VAR_25;
 const struct twl4030_bci_platform_data *VAR_26 = VAR_24->dev.platform_data;
 int VAR_27;
 u32 VAR_28;

 VAR_25 = FUNC_9(&VAR_24->dev, sizeof(*VAR_25), VAR_3);
 if (VAR_25 == ((void*)0))
  return -VAR_1;

 if (!VAR_26)
  VAR_26 = FUNC_17(&VAR_24->dev);

 VAR_25->ichg_eoc = 80100;
 VAR_25->ichg_lo = 241000;
 VAR_25->ichg_hi = 500000;
 VAR_25->ac_cur = 500000;
 if (VAR_16)
  VAR_25->usb_cur_target = 500000;
 else
  VAR_25->usb_cur_target = 100000;
 VAR_25->usb_mode = VAR_0;
 VAR_25->ac_mode = VAR_0;

 VAR_25->dev = &VAR_24->dev;
 VAR_25->irq_chg = FUNC_15(VAR_24, 0);
 VAR_25->irq_bci = FUNC_15(VAR_24, 1);

 FUNC_16(VAR_24, VAR_25);

 FUNC_1(&VAR_25->work, VAR_21);
 FUNC_0(&VAR_25->current_worker, VAR_23);

 VAR_25->channel_vac = FUNC_8(&VAR_24->dev, "vac");
 if (FUNC_2(VAR_25->channel_vac)) {
  VAR_27 = FUNC_4(VAR_25->channel_vac);
  if (VAR_27 == -VAR_2)
   return VAR_27;
  FUNC_6(&VAR_24->dev, "could not request vac iio channel (%d)",
   VAR_27);
  VAR_25->channel_vac = ((void*)0);
 }

 if (VAR_25->dev->of_node) {
  struct device_node *VAR_29;

  VAR_29 = FUNC_13(VAR_25->dev->of_node->parent,
        "ti,twl4030-usb");
  if (VAR_29) {
   VAR_25->usb_nb.notifier_call = FUNC_18;
   VAR_25->transceiver = FUNC_12(
    VAR_25->dev, VAR_29, &VAR_25->usb_nb);
   FUNC_14(VAR_29);
   if (FUNC_2(VAR_25->transceiver)) {
    VAR_27 = FUNC_4(VAR_25->transceiver);
    if (VAR_27 == -VAR_2)
     return VAR_27;
    FUNC_6(&VAR_24->dev, "could not request transceiver (%d)",
     VAR_27);
    VAR_25->transceiver = ((void*)0);
   }
  }
 }

 VAR_25->ac = FUNC_10(&VAR_24->dev, &VAR_18,
          ((void*)0));
 if (FUNC_2(VAR_25->ac)) {
  VAR_27 = FUNC_4(VAR_25->ac);
  FUNC_5(&VAR_24->dev, "failed to register ac: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_25->usb = FUNC_10(&VAR_24->dev, &VAR_20,
           ((void*)0));
 if (FUNC_2(VAR_25->usb)) {
  VAR_27 = FUNC_4(VAR_25->usb);
  FUNC_5(&VAR_24->dev, "failed to register usb: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_27 = FUNC_11(&VAR_24->dev, VAR_25->irq_chg, ((void*)0),
   VAR_22, VAR_4, VAR_24->name,
   VAR_25);
 if (VAR_27 < 0) {
  FUNC_5(&VAR_24->dev, "could not request irq %d, status %d\n",
   VAR_25->irq_chg, VAR_27);
  return VAR_27;
 }

 VAR_27 = FUNC_11(&VAR_24->dev, VAR_25->irq_bci, ((void*)0),
   VAR_19, VAR_4, VAR_24->name, VAR_25);
 if (VAR_27 < 0) {
  FUNC_5(&VAR_24->dev, "could not request irq %d, status %d\n",
   VAR_25->irq_bci, VAR_27);
  return VAR_27;
 }


 VAR_28 = ~(u32)(VAR_8 | VAR_7 | VAR_13 |
  VAR_12 | VAR_6);
 VAR_27 = FUNC_23(VAR_11, VAR_28,
          VAR_9);
 if (VAR_27 < 0) {
  FUNC_5(&VAR_24->dev, "failed to unmask interrupts: %d\n", VAR_27);
  return VAR_27;
 }

 VAR_28 = ~(u32)(VAR_14 | VAR_15 | VAR_5);
 VAR_27 = FUNC_23(VAR_11, VAR_28,
          VAR_10);
 if (VAR_27 < 0)
  FUNC_6(&VAR_24->dev, "failed to unmask interrupts: %d\n", VAR_27);

 FUNC_22(VAR_25);
 if (FUNC_7(&VAR_25->usb->dev, &VAR_17))
  FUNC_6(&VAR_24->dev, "could not create sysfs file\n");
 if (FUNC_7(&VAR_25->ac->dev, &VAR_17))
  FUNC_6(&VAR_24->dev, "could not create sysfs file\n");

 FUNC_19(VAR_25, 1);
 if (!FUNC_3(VAR_25->transceiver))
  FUNC_18(&VAR_25->usb_nb,
        VAR_25->transceiver->last_event,
        ((void*)0));
 else
  FUNC_21(VAR_25, 0);
 if (VAR_26)
  FUNC_20(VAR_26->bb_uvolt,
           VAR_26->bb_uamp);
 else
  FUNC_20(0, 0);

 return 0;
}
