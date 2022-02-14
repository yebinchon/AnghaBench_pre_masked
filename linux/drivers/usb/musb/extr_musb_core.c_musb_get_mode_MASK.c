
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;
typedef enum musb_mode { ____Placeholder_musb_mode } musb_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct device*) ;

enum musb_mode FUNC_1(struct device *VAR_3)
{
 enum usb_dr_mode VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 switch (VAR_4) {
 case 131:
  return VAR_0;
 case 129:
  return VAR_2;
 case 130:
 case 128:
 default:
  return VAR_1;
 }
}
