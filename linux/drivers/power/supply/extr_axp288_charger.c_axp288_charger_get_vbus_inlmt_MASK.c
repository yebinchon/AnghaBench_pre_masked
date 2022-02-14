
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
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 >>= VAR_1;
 switch (VAR_3) {
 case 135:
  return 100000;
 case 129:
  return 500000;
 case 128:
  return 900000;
 case 134:
  return 1500000;
 case 133:
  return 2000000;
 case 132:
  return 2500000;
 case 131:
  return 3000000;
 case 130:
  return 3500000;
 default:

  return 4000000;
 }
}
