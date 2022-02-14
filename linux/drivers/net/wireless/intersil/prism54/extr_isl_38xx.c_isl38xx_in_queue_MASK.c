
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ s32 ;
struct TYPE_3__ {int * device_curr_frag; int * driver_curr_frag; } ;
typedef TYPE_1__ isl38xx_control_block ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ const VAR_0 ;



 scalar_t__ const VAR_1 ;



 scalar_t__ const VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(isl38xx_control_block *VAR_3, int VAR_4)
{
 const s32 VAR_5 = (FUNC_2(VAR_3->driver_curr_frag[VAR_4]) -
      FUNC_2(VAR_3->device_curr_frag[VAR_4]));




 FUNC_1(VAR_5 < 0);

 switch (VAR_4) {

 case 128:
  FUNC_1(VAR_5 > VAR_0);


 case 129:
 case 130:
  FUNC_1(VAR_5 > VAR_2);
  return VAR_5;


 case 131:
  FUNC_1(VAR_5 > VAR_0);
  return VAR_0 - VAR_5;

 case 132:
 case 133:
  FUNC_1(VAR_5 > VAR_1);
  return VAR_1 - VAR_5;
 }
 FUNC_0();
 return 0;
}
