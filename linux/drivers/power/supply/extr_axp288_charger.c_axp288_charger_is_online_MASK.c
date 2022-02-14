
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_chrg_info {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct axp288_chrg_info *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_2->regmap, VAR_0, &VAR_5);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_5 & VAR_1)
  VAR_4 = 1;
 return VAR_4;
}
