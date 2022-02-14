
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {scalar_t__ io_priv; int dev; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct usb_phy *VAR_4,
  enum usb_device_speed VAR_5)
{
 FUNC_0(VAR_4->dev, "%s device has disconnected\n",
  (VAR_5 == VAR_3) ? "HS" : "FS/LS");


 if (FUNC_1(VAR_4->io_priv + VAR_1) &
   VAR_0)
  FUNC_2(VAR_0,
         VAR_4->io_priv + VAR_2);

 return 0;
}
