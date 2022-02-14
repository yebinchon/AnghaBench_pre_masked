
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int palette; scalar_t__ vflip; scalar_t__ hflip; } ;
struct stk_camera {TYPE_1__ vsettings; } ;
struct regval {int dummy; } ;


 int VAR_0 ;
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





 int FUNC_0 (int) ;
 struct regval* VAR_16 ;
 struct regval* VAR_17 ;
 struct regval* VAR_18 ;
 struct regval* VAR_19 ;
 struct regval* VAR_20 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct stk_camera*,int ,unsigned int) ;
 int FUNC_3 (struct stk_camera*,int,int,int,int) ;
 int FUNC_4 (struct stk_camera*,struct regval*) ;

int FUNC_5(struct stk_camera *VAR_21)
{
 int VAR_22;




 unsigned VAR_23;
 int VAR_24;
 struct regval *VAR_25;

 switch (VAR_21->vsettings.mode) {
 case 136: VAR_22 = VAR_1;
  VAR_23 = 604;
  break;
 case 135: VAR_22 = VAR_2;
  VAR_23 = 267;
  break;
 case 137: VAR_22 = VAR_0;
  VAR_23 = 412;
  break;
 case 133: VAR_22 = VAR_4;
  VAR_23 = 11;
  break;
 case 134: VAR_22 = VAR_3;
  VAR_23 = 0;
  break;
 default:
  FUNC_1("Unsupported mode %d\n", VAR_21->vsettings.mode);
  return -VAR_8;
 }
 switch (VAR_21->vsettings.palette) {
 case 129:
  VAR_22 |= VAR_7;
  VAR_25 = VAR_19;
  break;
 case 128:
  VAR_22 |= VAR_7;
  VAR_25 = VAR_20;
  break;
 case 132:
  VAR_22 |= VAR_6;
  VAR_25 = VAR_17;
  break;
 case 131:
  VAR_22 |= VAR_6;
  VAR_25 = VAR_18;
  break;
 case 130:
  VAR_22 |= VAR_5;
  VAR_25 = VAR_16;
  break;
 default:
  FUNC_1("Unsupported colorspace\n");
  return -VAR_8;
 }


 FUNC_2(VAR_21, VAR_13, VAR_22);
 FUNC_0(50);
 FUNC_4(VAR_21, VAR_25);
 VAR_24 = (VAR_21->vsettings.vflip?VAR_9:0)
  | (VAR_21->vsettings.hflip?VAR_10:0);
 FUNC_2(VAR_21, VAR_14, VAR_24);
 if (VAR_21->vsettings.palette == 130
   && !VAR_21->vsettings.vflip)
  FUNC_2(VAR_21, VAR_15, 0x08);
 FUNC_2(VAR_21, VAR_11, VAR_23 >> 8);
 FUNC_2(VAR_21, VAR_12, VAR_23 & 0xff);
 FUNC_0(50);
 switch (VAR_21->vsettings.mode) {
 case 133:
  if (FUNC_3(VAR_21, 302, 1582, 6, 486))
   FUNC_1("stk_sensor_set_hw failed (VGA)\n");
  break;
 case 134:
 case 137:
 case 135:
 case 136:




  break;
 }
 FUNC_0(10);
 return 0;
}
