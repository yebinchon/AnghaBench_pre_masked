
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int shutdown; int init; TYPE_1__* otg; } ;
struct usb_phy_generic {TYPE_2__ phy; scalar_t__ gpiod_vbus; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*) ;
 struct usb_phy_generic* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int ,int *,int ,int ,char*,struct usb_phy_generic*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_6 (struct platform_device*,struct usb_phy_generic*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct device*,struct usb_phy_generic*,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct usb_phy_generic *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_9, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_9, VAR_10, FUNC_1(&VAR_8->dev));
 if (VAR_11)
  return VAR_11;
 if (VAR_10->gpiod_vbus) {
  VAR_11 = FUNC_3(&VAR_8->dev,
      FUNC_5(VAR_10->gpiod_vbus),
      ((void*)0), VAR_5,
      VAR_4, "vbus_detect",
      VAR_10);
  if (VAR_11) {
   FUNC_0(&VAR_8->dev, "can't request irq %i, err: %d\n",
    FUNC_5(VAR_10->gpiod_vbus), VAR_11);
   return VAR_11;
  }
  VAR_10->phy.otg->state = FUNC_4(VAR_10->gpiod_vbus) ?
   VAR_3 : VAR_2;
 }

 VAR_10->phy.init = VAR_6;
 VAR_10->phy.shutdown = VAR_7;

 VAR_11 = FUNC_7(&VAR_10->phy);
 if (VAR_11) {
  FUNC_0(&VAR_8->dev, "can't register transceiver, err: %d\n",
   VAR_11);
  return VAR_11;
 }

 FUNC_6(VAR_8, VAR_10);

 return 0;
}
