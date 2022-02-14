
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_reg {int mfd; } ;
struct regulator_dev {int dummy; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_22)
{
 struct tps65910_reg *VAR_23 = FUNC_0(VAR_22);
 int VAR_24, VAR_25 = FUNC_1(VAR_22);
 int VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;

 switch (VAR_25) {
 case 130:
  VAR_24 = FUNC_2(VAR_23->mfd, VAR_2, &VAR_26);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_24 = FUNC_2(VAR_23->mfd, VAR_1, &VAR_29);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_29 = (VAR_29 & VAR_12) >> VAR_13;
  VAR_24 = FUNC_2(VAR_23->mfd, VAR_3, &VAR_27);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_30 = VAR_26 & VAR_9;
  VAR_26 &= VAR_10;
  VAR_27 &= VAR_11;
  VAR_28 = 75;
  break;
 case 129:
  VAR_24 = FUNC_2(VAR_23->mfd, VAR_5, &VAR_26);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_24 = FUNC_2(VAR_23->mfd, VAR_4, &VAR_29);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_29 = (VAR_29 & VAR_17) >> VAR_18;
  VAR_24 = FUNC_2(VAR_23->mfd, VAR_6, &VAR_27);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_30 = VAR_26 & VAR_14;
  VAR_26 &= VAR_15;
  VAR_27 &= VAR_16;
  VAR_28 = 75;
  break;
 case 128:
  VAR_24 = FUNC_2(VAR_23->mfd, VAR_7,
     &VAR_26);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_24 = FUNC_2(VAR_23->mfd, VAR_8,
     &VAR_27);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_30 = VAR_26 & VAR_19;
  VAR_26 &= VAR_20;
  VAR_27 &= VAR_21;
  VAR_28 = 64;
  break;
 }


 if (!VAR_29)
  VAR_29 = 1;

 if (VAR_30) {

  if (VAR_27 < 3)
   VAR_27 = 3;
  if (VAR_27 > VAR_28)
   VAR_27 = VAR_28;
  return VAR_27 - 3;
 } else {


  if (VAR_26 < 3)
   VAR_26 = 3;
  if (VAR_26 > VAR_28)
   VAR_26 = VAR_28;
  return VAR_26 - 3;
 }
 return -VAR_0;
}
