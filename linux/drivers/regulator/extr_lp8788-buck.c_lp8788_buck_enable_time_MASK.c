
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int*) ;
 struct lp8788_buck* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_5)
{
 struct lp8788_buck *VAR_6 = FUNC_1(VAR_5);
 enum lp8788_buck_id VAR_7 = FUNC_2(VAR_5);
 u8 VAR_8, VAR_9 = VAR_2 + VAR_7;

 if (FUNC_0(VAR_6->lp, VAR_9, &VAR_8))
  return -VAR_0;

 VAR_8 = (VAR_8 & VAR_3) >> VAR_4;

 return VAR_1 * VAR_8;
}
