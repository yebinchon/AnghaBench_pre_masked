
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct max17042_chip {struct regmap* regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,int ,int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct max17042_chip *VAR_1, int *VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 struct regmap *VAR_5 = VAR_1->regmap;

 VAR_3 = FUNC_0(VAR_5, VAR_0, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = FUNC_1(VAR_4, 15);


 *VAR_2 = *VAR_2 * 10 / 256;
 return 0;
}
