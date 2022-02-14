
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tuner_reset; } ;
struct tm6000_core {scalar_t__ tuner_type; TYPE_1__ gpio; int model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct tm6000_core*,int) ;
 int FUNC_2 (struct tm6000_core*,int) ;
 int FUNC_3 (struct tm6000_core*,int ,int,int) ;

int FUNC_4(void *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 struct tm6000_core *VAR_10 = VAR_5;

 if (VAR_10->tuner_type != VAR_4)
  return 0;

 switch (VAR_7) {
 case 129:
  FUNC_2(VAR_10, 0);

  FUNC_3(VAR_10, VAR_1,
     0x02, VAR_8);
  FUNC_0(10);
  VAR_9 = FUNC_1(VAR_10, 10);
  break;
 case 128:

  switch (VAR_8) {
  case 0:

   switch (VAR_10->model) {
   case 134:
    FUNC_3(VAR_10, VAR_0,
            VAR_10->gpio.tuner_reset, 0x01);
    FUNC_3(VAR_10, VAR_0,
            0x300, 0x01);
    FUNC_0(10);
    FUNC_3(VAR_10, VAR_0,
            VAR_10->gpio.tuner_reset, 0x00);
    FUNC_3(VAR_10, VAR_0,
            0x300, 0x00);
    FUNC_0(10);
    FUNC_3(VAR_10, VAR_0,
            VAR_10->gpio.tuner_reset, 0x01);
    FUNC_3(VAR_10, VAR_0,
            0x300, 0x01);
    break;
   case 133:
   case 132:
   case 131:
    FUNC_3(VAR_10, VAR_0,
            VAR_10->gpio.tuner_reset, 0x01);
    FUNC_0(60);
    FUNC_3(VAR_10, VAR_0,
            VAR_10->gpio.tuner_reset, 0x00);
    FUNC_0(75);
    FUNC_3(VAR_10, VAR_0,
            VAR_10->gpio.tuner_reset, 0x01);
    FUNC_0(60);
    break;
   default:
    FUNC_3(VAR_10, VAR_0,
            VAR_10->gpio.tuner_reset, 0x00);
    FUNC_0(130);
    FUNC_3(VAR_10, VAR_0,
            VAR_10->gpio.tuner_reset, 0x01);
    FUNC_0(130);
    break;
   }

   FUNC_2(VAR_10, 1);
   break;
  case 1:
   FUNC_3(VAR_10, VAR_1,
      0x02, 0x01);
   FUNC_0(10);
   break;
  case 2:
   VAR_9 = FUNC_1(VAR_10, 100);
   break;
  }
  break;
 case 130:
  FUNC_3(VAR_10, VAR_2, 0, 0);
  FUNC_3(VAR_10, VAR_3, 0, 0);
  break;
 }
 return VAR_9;
}
