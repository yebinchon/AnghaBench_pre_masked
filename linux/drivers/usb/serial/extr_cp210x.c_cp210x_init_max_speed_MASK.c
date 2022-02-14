
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct cp210x_serial_private {int partnum; int use_actual_rate; void* max_speed; void* min_speed; } ;
typedef void* speed_t ;
 int FUNC_0 (struct usb_serial*) ;
 struct cp210x_serial_private* FUNC_1 (struct usb_serial*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial *VAR_0)
{
 struct cp210x_serial_private *VAR_1 = FUNC_1(VAR_0);
 bool VAR_2 = 0;
 speed_t VAR_3 = 300;
 speed_t VAR_4;

 switch (VAR_1->partnum) {
 case 136:
  VAR_4 = 921600;
  break;
 case 135:
 case 131:
  VAR_4 = 1000000;
  break;
 case 130:
  VAR_2 = 1;
  VAR_4 = 2000000;
  break;
 case 128:
  VAR_4 = 2000000;
  break;
 case 129:
  if (FUNC_0(VAR_0) == 0) {
   VAR_2 = 1;
   VAR_4 = 2000000;
  } else {
   VAR_3 = 2400;
   VAR_4 = 921600;
  }
  break;
 case 132:
 case 133:
 case 134:
  VAR_2 = 1;
  VAR_4 = 3000000;
  break;
 default:
  VAR_4 = 2000000;
  break;
 }

 VAR_1->min_speed = VAR_3;
 VAR_1->max_speed = VAR_4;
 VAR_1->use_actual_rate = VAR_2;
}
