
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct lp872x*,int,int*) ;
 int FUNC_2 (struct lp872x*,int) ;
 struct lp872x* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_2)
{
 struct lp872x *VAR_3 = FUNC_3(VAR_2);
 enum lp872x_regulator_id VAR_4 = FUNC_4(VAR_2);
 u8 VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (!FUNC_0(VAR_5))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3, VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_6 & VAR_1;
}
