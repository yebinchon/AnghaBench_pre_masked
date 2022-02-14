
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040 {int regmap; } ;


 int FUNC_0 (int ,unsigned int,unsigned int*) ;

int FUNC_1(struct twl6040 *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_0->regmap, VAR_1, &VAR_3);
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_3;
}
