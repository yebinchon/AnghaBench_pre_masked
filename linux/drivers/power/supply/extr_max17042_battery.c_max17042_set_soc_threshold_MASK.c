
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct regmap {int dummy; } ;
struct max17042_chip {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct max17042_chip *VAR_2, u16 VAR_3)
{
 struct regmap *VAR_4 = VAR_2->regmap;
 u32 VAR_5, VAR_6;




 FUNC_0(VAR_4, VAR_0, &VAR_5);
 VAR_5 >>= 8;
 VAR_6 = (VAR_5 + VAR_3) << 8;
 VAR_6 |= (VAR_5 - VAR_3);
 FUNC_1(VAR_4, VAR_1, VAR_6);
}
