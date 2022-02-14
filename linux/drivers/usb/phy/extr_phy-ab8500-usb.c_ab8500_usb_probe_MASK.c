
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_otg {int set_peripheral; int set_host; TYPE_1__* usb_phy; int state; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {char* label; struct usb_otg* otg; int set_suspend; TYPE_2__* dev; } ;
struct ab8500_usb {int flags; struct ab8500* ab8500; TYPE_1__ phy; int sysclk; TYPE_2__* dev; int phy_dis_work; } ;
struct ab8500 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (struct platform_device*,struct ab8500_usb*) ;
 int VAR_9 ;
 int FUNC_4 (struct ab8500_usb*) ;
 int FUNC_5 (struct ab8500_usb*) ;
 int FUNC_6 (struct ab8500_usb*) ;
 int FUNC_7 (struct ab8500_usb*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct ab8500_usb*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct ab8500_usb*) ;
 int FUNC_11 (TYPE_2__*,char*,...) ;
 struct ab8500* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,char*,int) ;
 int FUNC_14 (TYPE_2__*,char*) ;
 void* FUNC_15 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_16 (struct ab8500*) ;
 scalar_t__ FUNC_17 (struct ab8500*) ;
 scalar_t__ FUNC_18 (struct ab8500*) ;
 scalar_t__ FUNC_19 (struct ab8500*) ;
 int FUNC_20 (struct platform_device*,struct ab8500_usb*) ;
 int FUNC_21 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_13)
{
 struct ab8500_usb *VAR_14;
 struct ab8500 *VAR_15;
 struct usb_otg *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_15 = FUNC_12(VAR_13->dev.parent);
 VAR_18 = FUNC_9(&VAR_13->dev);

 if (FUNC_17(VAR_15)) {
  FUNC_11(&VAR_13->dev, "Unsupported AB8500 chip rev=%d\n", VAR_18);
  return -VAR_4;
 }

 VAR_14 = FUNC_15(&VAR_13->dev, sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  return -VAR_5;

 VAR_16 = FUNC_15(&VAR_13->dev, sizeof(*VAR_16), VAR_6);
 if (!VAR_16)
  return -VAR_5;

 VAR_14->dev = &VAR_13->dev;
 VAR_14->ab8500 = VAR_15;
 VAR_14->phy.dev = VAR_14->dev;
 VAR_14->phy.otg = VAR_16;
 VAR_14->phy.label = "ab8500";
 VAR_14->phy.set_suspend = VAR_12;
 VAR_14->phy.otg->state = VAR_7;

 VAR_16->usb_phy = &VAR_14->phy;
 VAR_16->set_host = VAR_10;
 VAR_16->set_peripheral = VAR_11;

 if (FUNC_16(VAR_14->ab8500)) {
  VAR_14->flags |= VAR_2 |
   VAR_1 |
   VAR_3 |
   VAR_0;
 } else if (FUNC_19(VAR_14->ab8500)) {
  VAR_14->flags |= VAR_2 |
   VAR_1 |
   VAR_3 |
   VAR_0;
 }


 if (FUNC_18(VAR_14->ab8500))
  VAR_14->flags &= ~VAR_0;

 FUNC_20(VAR_13, VAR_14);


 FUNC_0(&VAR_14->phy_dis_work, VAR_9);

 VAR_17 = FUNC_4(VAR_14);
 if (VAR_17)
  return VAR_17;

 VAR_14->sysclk = FUNC_14(VAR_14->dev, "sysclk");
 if (FUNC_1(VAR_14->sysclk)) {
  FUNC_11(VAR_14->dev, "Could not get sysclk.\n");
  return FUNC_2(VAR_14->sysclk);
 }

 VAR_17 = FUNC_3(VAR_13, VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_21(&VAR_14->phy, VAR_8);
 if (VAR_17) {
  FUNC_11(&VAR_13->dev, "Can't register transceiver\n");
  return VAR_17;
 }

 if (FUNC_16(VAR_14->ab8500) && !FUNC_18(VAR_14->ab8500))

  FUNC_6(VAR_14);
 else if (FUNC_19(VAR_14->ab8500))

  FUNC_7(VAR_14);


 FUNC_8(VAR_14);





 FUNC_5(VAR_14);

 FUNC_10(VAR_14);

 FUNC_13(&VAR_13->dev, "revision 0x%2x driver initialized\n", VAR_18);

 return 0;
}
