
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,int) ;

__attribute__((used)) static enum usb_dr_mode FUNC_1(struct device_node *VAR_2)
{
 enum usb_dr_mode VAR_3 = VAR_1;
 int VAR_4;






 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  enum usb_dr_mode VAR_5 = FUNC_0(VAR_2, VAR_4);

  if (VAR_5 != VAR_1) {
   if (VAR_3 == VAR_1)
    VAR_3 = VAR_5;
   else if (VAR_3 != VAR_5)
    return VAR_1;
  }
 }

 return VAR_3;
}
