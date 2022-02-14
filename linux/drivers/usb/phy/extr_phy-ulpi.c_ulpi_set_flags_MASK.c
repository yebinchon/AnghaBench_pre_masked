
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;


 int FUNC_0 (struct usb_phy*) ;
 int FUNC_1 (struct usb_phy*) ;
 int FUNC_2 (struct usb_phy*) ;

__attribute__((used)) static int FUNC_3(struct usb_phy *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 return FUNC_0(VAR_0);
}
