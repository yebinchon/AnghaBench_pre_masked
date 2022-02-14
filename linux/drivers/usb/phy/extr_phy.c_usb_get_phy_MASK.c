
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_phy {TYPE_2__* dev; } ;
typedef enum usb_phy_type { ____Placeholder_usb_phy_type } usb_phy_type ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 struct usb_phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct usb_phy*) ;
 struct usb_phy* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

struct usb_phy *FUNC_9(enum usb_phy_type VAR_3)
{
 struct usb_phy *VAR_4 = ((void*)0);
 unsigned long VAR_5;

 FUNC_5(&VAR_2, VAR_5);

 VAR_4 = FUNC_2(&VAR_1, VAR_3);
 if (FUNC_1(VAR_4) || !FUNC_7(VAR_4->dev->driver->owner)) {
  FUNC_4("PHY: unable to find transceiver of type %s\n",
   FUNC_8(VAR_3));
  if (!FUNC_1(VAR_4))
   VAR_4 = FUNC_0(-VAR_0);

  goto err0;
 }

 FUNC_3(VAR_4->dev);

err0:
 FUNC_6(&VAR_2, VAR_5);

 return VAR_4;
}
