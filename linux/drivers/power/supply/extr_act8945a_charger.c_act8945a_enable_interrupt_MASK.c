
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct act8945a_charger {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 int FUNC_0 (struct regmap*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct act8945a_charger *VAR_14)
{
 struct regmap *VAR_15 = VAR_14->regmap;
 unsigned char VAR_16;
 int VAR_17;

 VAR_16 = VAR_3 | VAR_2 |
        VAR_5 | VAR_4 |
        VAR_7 | VAR_6 |
        VAR_8 | VAR_9;
 VAR_17 = FUNC_0(VAR_15, VAR_0, VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_16 = VAR_10 | VAR_11 |
        VAR_12 | VAR_13;
 VAR_17 = FUNC_0(VAR_15, VAR_1, VAR_16);
 if (VAR_17)
  return VAR_17;

 return 0;
}
