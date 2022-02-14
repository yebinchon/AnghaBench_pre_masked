
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int usb_type_max; int set_max; } ;
struct TYPE_3__ {int usb_current; } ;
struct ab8500_charger {TYPE_2__ max_usb_in_curr; TYPE_1__ usb_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct ab8500_charger *VAR_7)
{
 int VAR_8 = 0;
 switch (VAR_7->usb_state.usb_current) {
 case 100:
  VAR_7->max_usb_in_curr.usb_type_max = VAR_2;
  break;
 case 200:
  VAR_7->max_usb_in_curr.usb_type_max = VAR_3;
  break;
 case 300:
  VAR_7->max_usb_in_curr.usb_type_max = VAR_4;
  break;
 case 400:
  VAR_7->max_usb_in_curr.usb_type_max = VAR_5;
  break;
 case 500:
  VAR_7->max_usb_in_curr.usb_type_max = VAR_6;
  break;
 default:
  VAR_7->max_usb_in_curr.usb_type_max = VAR_1;
  VAR_8 = -VAR_0;
  break;
 };
 VAR_7->max_usb_in_curr.set_max = VAR_7->max_usb_in_curr.usb_type_max;
 return VAR_8;
}
