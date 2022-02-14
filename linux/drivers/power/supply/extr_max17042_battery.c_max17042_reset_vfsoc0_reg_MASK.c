
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct max17042_chip {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,unsigned int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct max17042_chip *VAR_5)
{
 unsigned int VAR_6;
 struct regmap *VAR_7 = VAR_5->regmap;

 FUNC_1(VAR_7, VAR_0, &VAR_6);
 FUNC_2(VAR_7, VAR_2, VAR_4);
 FUNC_0(VAR_7, VAR_1, VAR_6);
 FUNC_2(VAR_7, VAR_2, VAR_3);
}
