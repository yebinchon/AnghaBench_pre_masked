
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tuner_reset; } ;
struct tm6000_core {scalar_t__ tuner_type; TYPE_1__ gpio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct tm6000_core*,int ,int ,int) ;

int FUNC_2(void *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct tm6000_core *VAR_7 = VAR_2;

 if (VAR_7->tuner_type != VAR_1)
  return 0;

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_7, VAR_0,
          VAR_7->gpio.tuner_reset, 0x01);
  FUNC_0(15);
  FUNC_1(VAR_7, VAR_0,
          VAR_7->gpio.tuner_reset, 0x00);
  FUNC_0(15);
  FUNC_1(VAR_7, VAR_0,
          VAR_7->gpio.tuner_reset, 0x01);
  break;
 }
 return VAR_6;
}
