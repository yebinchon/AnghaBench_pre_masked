
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int dummy; } ;


 int FUNC_0 (struct usb_ftdi*,int) ;
 int FUNC_1 (struct usb_ftdi*,int) ;
 int FUNC_2 (struct usb_ftdi*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_ftdi *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;
 VAR_3 = FUNC_0(VAR_0, VAR_2);
 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;
 return VAR_3;
}
