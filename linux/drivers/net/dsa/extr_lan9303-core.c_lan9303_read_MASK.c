
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_2, unsigned int VAR_3, u32 *VAR_4)
{
 int VAR_5, VAR_6;






 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
  if (!VAR_5)
   return 0;
  if (VAR_5 != -VAR_0)
   break;
  FUNC_0(500);
 }

 return -VAR_1;
}
