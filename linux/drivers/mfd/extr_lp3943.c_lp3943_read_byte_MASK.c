
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lp3943 {int regmap; } ;


 int FUNC_0 (int ,scalar_t__,unsigned int*) ;

int FUNC_1(struct lp3943 *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_0->regmap, VAR_1, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = (u8)VAR_4;
 return 0;
}
