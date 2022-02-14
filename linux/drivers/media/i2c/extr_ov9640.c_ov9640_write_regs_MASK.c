
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ov9640_reg_alt {int com15; int com13; int com12; int com7; } ;
struct ov9640_reg {int reg; int val; } ;
struct i2c_client {int dev; } ;


 unsigned int FUNC_0 (struct ov9640_reg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int,int ) ;
 struct ov9640_reg* VAR_2 ;
 struct ov9640_reg* VAR_3 ;
 struct ov9640_reg* VAR_4 ;
 struct ov9640_reg* VAR_5 ;
 struct ov9640_reg* VAR_6 ;
 struct ov9640_reg* VAR_7 ;
 struct ov9640_reg* VAR_8 ;
 struct ov9640_reg* VAR_9 ;
 struct ov9640_reg* VAR_10 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_11, u32 VAR_12,
  u32 VAR_13, struct ov9640_reg_alt *VAR_14)
{
 const struct ov9640_reg *VAR_15, *VAR_16;
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19;
 int VAR_20;
 u8 VAR_21;


 switch (VAR_12) {
 case 132:
  VAR_15 = VAR_4;
  VAR_17 = FUNC_0(VAR_4);
  break;
 case 131:
  VAR_15 = VAR_5;
  VAR_17 = FUNC_0(VAR_5);
  break;
 case 133:
  VAR_15 = VAR_3;
  VAR_17 = FUNC_0(VAR_3);
  break;
 case 130:
  VAR_15 = VAR_6;
  VAR_17 = FUNC_0(VAR_6);
  break;
 case 134:
  VAR_15 = VAR_2;
  VAR_17 = FUNC_0(VAR_2);
  break;
 case 128:
  VAR_15 = VAR_9;
  VAR_17 = FUNC_0(VAR_9);
  break;
 case 129:
  VAR_15 = VAR_8;
  VAR_17 = FUNC_0(VAR_8);
  break;
 default:
  FUNC_1(&VAR_11->dev, "Failed to select resolution!\n");
  return -VAR_0;
 }


 if (VAR_13 == VAR_1) {
  VAR_16 = VAR_10;
  VAR_18 = FUNC_0(VAR_10);
 } else {
  VAR_16 = VAR_7;
  VAR_18 = FUNC_0(VAR_7);
 }


 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  VAR_21 = VAR_15[VAR_19].val;

  switch (VAR_15[VAR_19].reg) {
  case 135:
   VAR_21 |= VAR_14->com7;
   break;
  case 138:
   VAR_21 |= VAR_14->com12;
   break;
  case 137:
   VAR_21 |= VAR_14->com13;
   break;
  case 136:
   VAR_21 |= VAR_14->com15;
   break;
  }

  VAR_20 = FUNC_2(VAR_11, VAR_15[VAR_19].reg, VAR_21);
  if (VAR_20)
   return VAR_20;
 }


 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_20 = FUNC_2(VAR_11, VAR_16[VAR_19].reg,
           VAR_16[VAR_19].val);
  if (VAR_20)
   return VAR_20;
 }

 return 0;
}
