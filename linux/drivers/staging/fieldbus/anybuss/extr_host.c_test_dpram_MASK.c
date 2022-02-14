
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regmap*,int,unsigned int*) ;
 int FUNC_1 (struct regmap*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_2, VAR_3, (u8)VAR_3);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_2, VAR_3, &VAR_4);
  if ((u8)VAR_4 != (u8)VAR_3)
   return -VAR_1;
 }
 return 0;
}
