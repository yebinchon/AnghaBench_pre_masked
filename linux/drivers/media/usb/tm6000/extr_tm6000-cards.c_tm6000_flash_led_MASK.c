
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int power_led; } ;
struct tm6000_core {int model; TYPE_1__ gpio; } ;


 int VAR_0 ;







 int FUNC_0 (struct tm6000_core*,int ,int ,int) ;

void FUNC_1(struct tm6000_core *VAR_1, u8 VAR_2)
{

 if (!VAR_1->gpio.power_led)
  return;


 if (VAR_2) {
  switch (VAR_1->model) {
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_1, VAR_0,
    VAR_1->gpio.power_led, 0x00);
   break;
  case 132:
  case 134:
  case 131:
  case 133:
   FUNC_0(VAR_1, VAR_0,
    VAR_1->gpio.power_led, 0x01);
   break;
  }
 }

 else {
  switch (VAR_1->model) {
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_1, VAR_0,
    VAR_1->gpio.power_led, 0x01);
   break;
  case 132:
  case 134:
  case 131:
  case 133:
   FUNC_0(VAR_1, VAR_0,
    VAR_1->gpio.power_led, 0x00);
   break;
  }
 }
}
