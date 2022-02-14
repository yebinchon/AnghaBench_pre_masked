
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 struct regmap* FUNC_1 (char*) ;

__attribute__((used)) static struct regmap *FUNC_2(void)
{
 struct regmap *VAR_0;

 VAR_0 = FUNC_1("atmel,sama5d2-sfr");
 if (FUNC_0(VAR_0)) {
  VAR_0 = FUNC_1("microchip,sam9x60-sfr");
  if (FUNC_0(VAR_0))
   VAR_0 = ((void*)0);
 }

 return VAR_0;
}
