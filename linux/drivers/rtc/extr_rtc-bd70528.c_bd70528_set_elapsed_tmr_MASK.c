
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rohm_regmap_dev {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct rohm_regmap_dev *VAR_3,
       int VAR_4, int *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 VAR_6 = FUNC_0(VAR_3->regmap, VAR_2,
     &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_5) {
  if (VAR_7 & VAR_1)
   *VAR_5 |= VAR_0;
  else
   *VAR_5 &= ~VAR_0;

  if ((!VAR_4) == (!(*VAR_5 & VAR_0)))
   return 0;
 }

 if (VAR_4)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;

 return FUNC_1(VAR_3->regmap, VAR_2,
       VAR_7);
}
