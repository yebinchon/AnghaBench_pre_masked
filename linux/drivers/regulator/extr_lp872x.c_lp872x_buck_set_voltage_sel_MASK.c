
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct lp872x_dvs {int gpio; int vsel; } ;
struct lp872x {TYPE_1__* pdata; } ;
typedef enum lp872x_regulator_id { ____Placeholder_lp872x_regulator_id } lp872x_regulator_id ;
struct TYPE_2__ {struct lp872x_dvs* dvs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lp872x*,int) ;
 int FUNC_3 (struct lp872x*,int ,int ) ;
 int FUNC_4 (struct lp872x*,int ,int ,unsigned int) ;
 struct lp872x* FUNC_5 (struct regulator_dev*) ;
 int FUNC_6 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_7(struct regulator_dev *VAR_2,
     unsigned VAR_3)
{
 struct lp872x *VAR_4 = FUNC_5(VAR_2);
 enum lp872x_regulator_id VAR_5 = FUNC_6(VAR_2);
 u8 VAR_6, VAR_7 = VAR_1;
 struct lp872x_dvs *VAR_8 = VAR_4->pdata ? VAR_4->pdata->dvs : ((void*)0);

 if (VAR_8 && FUNC_0(VAR_8->gpio))
  FUNC_3(VAR_4, VAR_8->vsel, VAR_8->gpio);

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (!FUNC_1(VAR_6))
  return -VAR_0;

 return FUNC_4(VAR_4, VAR_6, VAR_7, VAR_3);
}
