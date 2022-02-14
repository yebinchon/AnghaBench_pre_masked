
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int power_bits; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_device*,int,int ) ;
 int FUNC_3 (struct usb_device*,int,int ) ;

int FUNC_4(struct usb_device *VAR_1, struct usb_hub *VAR_2,
      int VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4)
  VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_0);
 else
  VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_0);

 if (VAR_5)
  return VAR_5;

 if (VAR_4)
  FUNC_1(VAR_3, VAR_2->power_bits);
 else
  FUNC_0(VAR_3, VAR_2->power_bits);
 return 0;
}
