
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int fan_ctrl_status_undef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int *,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 u8 VAR_12;
 int VAR_13;

 if (!VAR_7)
  return -VAR_2;

 if (FUNC_3(&VAR_8))
  return -VAR_3;

 switch (VAR_6) {
 case 130:
 case 128:
  VAR_13 = FUNC_2(&VAR_12);
  if (VAR_13 < 0)
   break;


  if (VAR_12 != 7) {
   VAR_12 &= 0x07;
   VAR_12 |= VAR_5 | 4;
  }

  if (!FUNC_0(VAR_9, VAR_12))
   VAR_13 = -VAR_0;
  else {
   VAR_11.fan_ctrl_status_undef = 0;
   VAR_13 = 0;
  }
  break;

 case 129:
  VAR_13 = FUNC_2(&VAR_12);
  if (VAR_13 < 0)
   break;

  VAR_12 &= 0x07;


  VAR_12 |= 4;

  if (!FUNC_1(VAR_10, ((void*)0), ((void*)0), "vd", VAR_12))
   VAR_13 = -VAR_0;
  else
   VAR_13 = 0;
  break;

 default:
  VAR_13 = -VAR_1;
 }

 FUNC_4(&VAR_8);

 if (!VAR_13)
  FUNC_5(VAR_4,
   "fan control: set fan control register to 0x%02x\n",
   VAR_12);
 return VAR_13;
}
