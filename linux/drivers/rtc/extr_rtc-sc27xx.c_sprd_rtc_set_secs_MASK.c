
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int time64_t ;
struct sprd_rtc {int base; int regmap; int dev; } ;
typedef enum sprd_rtc_reg_types { ____Placeholder_sprd_rtc_reg_types } sprd_rtc_reg_types ;


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
 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,int,int,int ,int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct sprd_rtc *VAR_19, enum sprd_rtc_reg_types VAR_20,
        time64_t VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 u32 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32, VAR_33;


 VAR_30 = FUNC_1(VAR_21, 86400, &VAR_33);
 VAR_29 = VAR_33 / 3600;
 VAR_33 -= VAR_29 * 3600;
 VAR_28 = VAR_33 / 60;
 VAR_27 = VAR_33 - VAR_28 * 60;

 switch (VAR_20) {
 case 128:
  VAR_22 = VAR_17;
  VAR_23 = VAR_12;
  VAR_24 = VAR_7;
  VAR_25 = VAR_4;
  VAR_26 = VAR_18;
  break;
 case 130:
  VAR_22 = VAR_15;
  VAR_23 = VAR_10;
  VAR_24 = VAR_5;
  VAR_25 = VAR_2;
  VAR_26 = VAR_1;
  break;
 case 129:
  VAR_22 = VAR_16;
  VAR_23 = VAR_11;
  VAR_24 = VAR_6;
  VAR_25 = VAR_3;
  VAR_26 = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_32 = FUNC_3(VAR_19->regmap, VAR_19->base + VAR_22, VAR_27);
 if (VAR_32)
  return VAR_32;

 VAR_32 = FUNC_3(VAR_19->regmap, VAR_19->base + VAR_23, VAR_28);
 if (VAR_32)
  return VAR_32;

 VAR_32 = FUNC_3(VAR_19->regmap, VAR_19->base + VAR_24, VAR_29);
 if (VAR_32)
  return VAR_32;

 VAR_32 = FUNC_3(VAR_19->regmap, VAR_19->base + VAR_25, VAR_30);
 if (VAR_32)
  return VAR_32;

 if (VAR_20 == 129)
  return 0;







 VAR_32 = FUNC_2(VAR_19->regmap,
           VAR_19->base + VAR_9, VAR_31,
           ((VAR_31 & VAR_26) == VAR_26),
           VAR_13,
           VAR_14);
 if (VAR_32 < 0) {
  FUNC_0(VAR_19->dev, "set time/alarm values timeout\n");
  return VAR_32;
 }

 return FUNC_3(VAR_19->regmap, VAR_19->base + VAR_8,
       VAR_26);
}
