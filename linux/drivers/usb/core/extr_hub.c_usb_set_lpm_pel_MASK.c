
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb3_lpm_parameters {unsigned int pel; } ;



__attribute__((used)) static void FUNC_0(struct usb_device *VAR_0,
  struct usb3_lpm_parameters *VAR_1,
  unsigned int VAR_2,
  struct usb_hub *VAR_3,
  struct usb3_lpm_parameters *VAR_4,
  unsigned int VAR_5,
  unsigned int VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;






 if (VAR_2 > VAR_5)
  VAR_7 = VAR_2 * 1000;
 else
  VAR_7 = VAR_5 * 1000;







 VAR_8 = VAR_6 * 1000 + VAR_4->pel;





 if (VAR_7 > VAR_8)
  VAR_1->pel = VAR_7;
 else
  VAR_1->pel = VAR_8;
}
