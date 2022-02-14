
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fan_ctrl_status_undef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int *,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_12;

 if (!VAR_6)
  return -VAR_2;

 if (FUNC_2(&VAR_8))
  return -VAR_3;

 VAR_12 = 0;
 switch (VAR_5) {
 case 130:
 case 128:
  if (!FUNC_0(VAR_9, 0x00))
   VAR_12 = -VAR_0;
  else {
   VAR_7 = 0;
   VAR_11.fan_ctrl_status_undef = 0;
  }
  break;

 case 129:
  if (!FUNC_1(VAR_10, ((void*)0), ((void*)0), "vd", 0x00))
   VAR_12 = -VAR_0;
  else
   VAR_7 = 0;
  break;

 default:
  VAR_12 = -VAR_1;
 }

 if (!VAR_12)
  FUNC_4(VAR_4,
   "fan control: set fan control register to 0\n");

 FUNC_3(&VAR_8);
 return VAR_12;
}
