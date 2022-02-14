
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct lp872x {int dummy; } ;
typedef enum lp872x_regulator_id { ____Placeholder_lp872x_regulator_id } lp872x_regulator_id ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct lp872x*,int,int*) ;
 struct lp872x* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_8)
{
 struct lp872x *VAR_9 = FUNC_1(VAR_8);
 enum lp872x_regulator_id VAR_10 = FUNC_2(VAR_8);
 u8 VAR_11, VAR_12, VAR_13;
 int VAR_14;

 switch (VAR_10) {
 case 130:
  VAR_11 = VAR_2;
  VAR_12 = VAR_1;
  break;
 case 129:
  VAR_11 = VAR_5;
  VAR_12 = VAR_3;
  break;
 case 128:
  VAR_11 = VAR_5;
  VAR_12 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = FUNC_0(VAR_9, VAR_11, &VAR_13);
 if (VAR_14)
  return VAR_14;

 return VAR_13 & VAR_12 ? VAR_6 : VAR_7;
}
