
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct act8945a_charger {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_1(struct act8945a_charger *VAR_7,
          unsigned int *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_7->regmap, VAR_1, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_7->regmap, VAR_0, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_9 & VAR_3) {
  if (VAR_10 & VAR_2)
   *VAR_8 = VAR_5;
  else
   *VAR_8 = VAR_6;
 } else {
  *VAR_8 = VAR_4;
 }

 return 0;
}
