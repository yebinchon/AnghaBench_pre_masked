
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct lp8788_buck {int lp; } ;
typedef enum lp8788_buck_id { ____Placeholder_lp8788_buck_id } lp8788_buck_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 struct lp8788_buck* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_4(struct regulator_dev *VAR_3)
{
 struct lp8788_buck *VAR_4 = FUNC_2(VAR_3);
 enum lp8788_buck_id VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->lp, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_6 & FUNC_0(VAR_5) ?
    VAR_1 : VAR_2;
}
