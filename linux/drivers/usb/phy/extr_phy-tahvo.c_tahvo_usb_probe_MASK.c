
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* otg; int set_suspend; int label; TYPE_4__* dev; } ;
struct tahvo_usb {scalar_t__ tahvo_mode; int vbus_state; int ick; TYPE_2__ phy; int irq; int extcon; int serialize; struct platform_device* pt_dev; } ;
struct retu_dev {int dummy; } ;
struct TYPE_12__ {int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_10__ {int set_peripheral; int set_host; TYPE_2__* usb_phy; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 struct retu_dev* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,struct tahvo_usb*) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 void* FUNC_10 (TYPE_4__*,int,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (int ,int *,int ,int ,char*,struct tahvo_usb*) ;
 int FUNC_15 (struct retu_dev*,int ) ;
 int VAR_12 ;
 int FUNC_16 (struct tahvo_usb*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_17)
{
 struct retu_dev *VAR_18 = FUNC_5(VAR_17->dev.parent);
 struct tahvo_usb *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_10(&VAR_17->dev, sizeof(*VAR_19), VAR_4);
 if (!VAR_19)
  return -VAR_1;

 VAR_19->phy.otg = FUNC_10(&VAR_17->dev, sizeof(*VAR_19->phy.otg),
       VAR_4);
 if (!VAR_19->phy.otg)
  return -VAR_1;

 VAR_19->pt_dev = VAR_17;





 VAR_19->tahvo_mode = VAR_8;


 FUNC_12(&VAR_19->serialize);

 VAR_19->ick = FUNC_7(&VAR_17->dev, "usb_l4_ick");
 if (!FUNC_0(VAR_19->ick))
  FUNC_3(VAR_19->ick);




 VAR_19->vbus_state = FUNC_15(VAR_18, VAR_9) & VAR_10;

 VAR_19->extcon = FUNC_8(&VAR_17->dev, VAR_12);
 if (FUNC_0(VAR_19->extcon)) {
  FUNC_4(&VAR_17->dev, "failed to allocate memory for extcon\n");
  VAR_20 = FUNC_1(VAR_19->extcon);
  goto err_disable_clk;
 }

 VAR_20 = FUNC_9(&VAR_17->dev, VAR_19->extcon);
 if (VAR_20) {
  FUNC_4(&VAR_17->dev, "could not register extcon device: %d\n",
   VAR_20);
  goto err_disable_clk;
 }


 FUNC_11(VAR_19->extcon, VAR_3,
          VAR_19->tahvo_mode == VAR_7);
 FUNC_11(VAR_19->extcon, VAR_2, VAR_19->vbus_state);


 FUNC_16(VAR_19);
 VAR_19->phy.dev = &VAR_17->dev;
 VAR_19->phy.otg->state = VAR_6;
 VAR_19->phy.label = VAR_0;
 VAR_19->phy.set_suspend = VAR_15;

 VAR_19->phy.otg->usb_phy = &VAR_19->phy;
 VAR_19->phy.otg->set_host = VAR_13;
 VAR_19->phy.otg->set_peripheral = VAR_14;

 VAR_20 = FUNC_17(&VAR_19->phy, VAR_11);
 if (VAR_20 < 0) {
  FUNC_4(&VAR_17->dev, "cannot register USB transceiver: %d\n",
   VAR_20);
  goto err_disable_clk;
 }

 FUNC_6(&VAR_17->dev, VAR_19);

 VAR_19->irq = FUNC_13(VAR_17, 0);
 VAR_20 = FUNC_14(VAR_19->irq, ((void*)0), VAR_16,
       VAR_5,
       "tahvo-vbus", VAR_19);
 if (VAR_20) {
  FUNC_4(&VAR_17->dev, "could not register tahvo-vbus irq: %d\n",
   VAR_20);
  goto err_remove_phy;
 }

 return 0;

err_remove_phy:
 FUNC_18(&VAR_19->phy);
err_disable_clk:
 if (!FUNC_0(VAR_19->ick))
  FUNC_2(VAR_19->ick);

 return VAR_20;
}
