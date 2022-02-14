
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void FUNC_2(struct hl_device *VAR_17, u32 VAR_18, u32 VAR_19)
{
 u32 VAR_20, VAR_21;

 switch (VAR_18) {
 case 141:
  VAR_20 = VAR_2;
  break;

 case 140:
  VAR_20 = VAR_3;
  break;

 case 139:
  VAR_20 = VAR_4;
  break;

 case 138:
  VAR_20 = VAR_5;
  break;

 case 137:
  VAR_20 = VAR_6;
  break;

 case 142:
  VAR_20 = VAR_1;
  break;

 case 136:
  VAR_20 = VAR_8;
  break;

 case 135:
  VAR_20 = VAR_9;
  break;

 case 134:
  VAR_20 = VAR_10;
  break;

 case 133:
  VAR_20 = VAR_11;
  break;

 case 132:
  VAR_20 = VAR_12;
  break;

 case 131:
  VAR_20 = VAR_13;
  break;

 case 130:
  VAR_20 = VAR_14;
  break;

 case 129:
  VAR_20 = VAR_15;
  break;

 case 128:
  VAR_20 = VAR_16;
  break;

 default:

  FUNC_1(VAR_17->dev, "H/W queue %d is invalid. Can't set pi\n",
   VAR_18);
  return;
 }

 VAR_21 = VAR_19;


 FUNC_0(VAR_20, VAR_21);

 if (VAR_18 == 142)
  FUNC_0(VAR_7,
    VAR_0);
}
