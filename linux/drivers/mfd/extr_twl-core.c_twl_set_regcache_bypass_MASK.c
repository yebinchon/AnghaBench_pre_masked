
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,int) ;
 struct regmap* FUNC_1 (int ) ;

int FUNC_2(u8 VAR_1, bool VAR_2)
{
 struct regmap *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_2);

 return 0;
}
