
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {scalar_t__ io_priv; int dev; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct usb_phy *VAR_3,
  enum usb_device_speed VAR_4)
{
 FUNC_0(VAR_3->dev, "%s device has connected\n",
  (VAR_4 == VAR_2) ? "HS" : "FS/LS");

 if (VAR_4 == VAR_2)
  FUNC_1(VAR_0,
         VAR_3->io_priv + VAR_1);

 return 0;
}
