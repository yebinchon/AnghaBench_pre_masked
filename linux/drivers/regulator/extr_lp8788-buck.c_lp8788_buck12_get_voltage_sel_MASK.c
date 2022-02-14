
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct lp8788_buck {int lp; } ;
typedef enum lp8788_buck_id { ____Placeholder_lp8788_buck_id } lp8788_buck_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (struct lp8788_buck*,int) ;
 struct lp8788_buck* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_2)
{
 struct lp8788_buck *VAR_3 = FUNC_3(VAR_2);
 enum lp8788_buck_id VAR_4 = FUNC_4(VAR_2);
 int VAR_5;
 u8 VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (!FUNC_0(VAR_7))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3->lp, VAR_7, &VAR_6);
 if (VAR_5)
  return VAR_5;

 return VAR_6 & VAR_1;
}
