
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_phy {TYPE_2__* dev; } ;
struct phy_devm {struct notifier_block* nb; struct usb_phy* phy; } ;
struct notifier_block {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_phy* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct usb_phy*) ;
 struct usb_phy* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device*,char*) ;
 int VAR_3 ;
 int FUNC_4 (struct device*,struct phy_devm*) ;
 struct phy_devm* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct phy_devm*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct usb_phy*,struct notifier_block*) ;

struct usb_phy *FUNC_12(struct device *VAR_5,
       struct device_node *VAR_6,
       struct notifier_block *VAR_7)
{
 struct usb_phy *VAR_8 = FUNC_0(-VAR_1);
 struct phy_devm *VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_5(VAR_3, sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  FUNC_3(VAR_5, "failed to allocate memory for devres\n");
  goto err0;
 }

 FUNC_8(&VAR_4, VAR_10);

 VAR_8 = FUNC_2(VAR_6);
 if (FUNC_1(VAR_8)) {
  FUNC_6(VAR_9);
  goto err1;
 }

 if (!FUNC_10(VAR_8->dev->driver->owner)) {
  VAR_8 = FUNC_0(-VAR_0);
  FUNC_6(VAR_9);
  goto err1;
 }
 if (VAR_7)
  FUNC_11(VAR_8, VAR_7);
 VAR_9->phy = VAR_8;
 VAR_9->nb = VAR_7;
 FUNC_4(VAR_5, VAR_9);

 FUNC_7(VAR_8->dev);

err1:
 FUNC_9(&VAR_4, VAR_10);

err0:

 return VAR_8;
}
