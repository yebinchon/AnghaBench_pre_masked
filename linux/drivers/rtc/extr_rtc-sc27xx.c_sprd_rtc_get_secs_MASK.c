
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int time64_t ;
struct sprd_rtc {int base; int regmap; } ;
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

 int FUNC_0 (int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct sprd_rtc *VAR_17, enum sprd_rtc_reg_types VAR_18,
        time64_t *VAR_19)
{
 u32 VAR_20, VAR_21, VAR_22, VAR_23;
 u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29;

 switch (VAR_18) {
 case 128:
  VAR_20 = VAR_15;
  VAR_21 = VAR_11;
  VAR_22 = VAR_7;
  VAR_23 = VAR_3;
  break;
 case 130:
  VAR_20 = VAR_13;
  VAR_21 = VAR_9;
  VAR_22 = VAR_5;
  VAR_23 = VAR_1;
  break;
 case 129:
  VAR_20 = VAR_14;
  VAR_21 = VAR_10;
  VAR_22 = VAR_6;
  VAR_23 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_29 = FUNC_0(VAR_17->regmap, VAR_17->base + VAR_20, &VAR_24);
 if (VAR_29)
  return VAR_29;

 VAR_25 = VAR_24 & VAR_16;

 VAR_29 = FUNC_0(VAR_17->regmap, VAR_17->base + VAR_21, &VAR_24);
 if (VAR_29)
  return VAR_29;

 VAR_26 = VAR_24 & VAR_12;

 VAR_29 = FUNC_0(VAR_17->regmap, VAR_17->base + VAR_22, &VAR_24);
 if (VAR_29)
  return VAR_29;

 VAR_27 = VAR_24 & VAR_8;

 VAR_29 = FUNC_0(VAR_17->regmap, VAR_17->base + VAR_23, &VAR_24);
 if (VAR_29)
  return VAR_29;

 VAR_28 = VAR_24 & VAR_4;
 *VAR_19 = (((time64_t)(VAR_28 * 24) + VAR_27) * 60 + VAR_26) * 60 + VAR_25;
 return 0;
}
