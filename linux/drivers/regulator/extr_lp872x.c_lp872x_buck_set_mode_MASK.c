
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct lp872x {int dummy; } ;
typedef enum lp872x_regulator_id { ____Placeholder_lp872x_regulator_id } lp872x_regulator_id ;


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
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (struct lp872x*,int,int,int) ;
 struct lp872x* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_13, unsigned int VAR_14)
{
 struct lp872x *VAR_15 = FUNC_1(VAR_13);
 enum lp872x_regulator_id VAR_16 = FUNC_2(VAR_13);
 u8 VAR_17, VAR_18, VAR_19, VAR_20;

 switch (VAR_16) {
 case 130:
  VAR_17 = VAR_3;
  VAR_18 = VAR_1;
  VAR_19 = VAR_2;
  break;
 case 129:
  VAR_17 = VAR_8;
  VAR_18 = VAR_4;
  VAR_19 = VAR_5;
  break;
 case 128:
  VAR_17 = VAR_8;
  VAR_18 = VAR_6;
  VAR_19 = VAR_7;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_14 == VAR_11)
  VAR_20 = VAR_10 << VAR_19;
 else if (VAR_14 == VAR_12)
  VAR_20 = VAR_9 << VAR_19;
 else
  return -VAR_0;

 return FUNC_0(VAR_15, VAR_17, VAR_18, VAR_20);
}
