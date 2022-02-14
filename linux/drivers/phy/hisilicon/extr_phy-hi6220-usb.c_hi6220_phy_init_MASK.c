
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct hi6220_priv {struct regmap* reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct regmap*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct hi6220_priv *VAR_6)
{
 struct regmap *VAR_7 = VAR_6->reg;
 u32 VAR_8, VAR_9;

 VAR_8 = VAR_3 | VAR_0 |
       VAR_1 | VAR_2;
 VAR_9 = VAR_8;
 FUNC_0(VAR_7, VAR_5, VAR_9, VAR_8);
 FUNC_0(VAR_7, VAR_4, VAR_9, VAR_8);
}
