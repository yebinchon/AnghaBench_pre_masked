
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*,int ,int,int,int,int) ;
 struct regmap* FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct regmap *VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_2("atmel,sama5d2-secumod");
 if (FUNC_0(VAR_3))
  return -VAR_2;

 return FUNC_1(VAR_3, VAR_0, VAR_4,
     VAR_4 & VAR_1,
     10000, 500000);
}
