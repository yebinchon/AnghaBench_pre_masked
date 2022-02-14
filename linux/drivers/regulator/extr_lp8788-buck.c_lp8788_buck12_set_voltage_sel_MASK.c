
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct lp8788_buck {int lp; scalar_t__ dvs; } ;
typedef enum lp8788_buck_id { ____Placeholder_lp8788_buck_id } lp8788_buck_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lp8788_buck*,int) ;
 int FUNC_2 (struct lp8788_buck*,int) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 struct lp8788_buck* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_2,
     unsigned VAR_3)
{
 struct lp8788_buck *VAR_4 = FUNC_4(VAR_2);
 enum lp8788_buck_id VAR_5 = FUNC_5(VAR_2);
 u8 VAR_6;

 if (VAR_4->dvs)
  FUNC_2(VAR_4, VAR_5);

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (!FUNC_0(VAR_6))
  return -VAR_0;

 return FUNC_3(VAR_4->lp, VAR_6, VAR_1, VAR_3);
}
