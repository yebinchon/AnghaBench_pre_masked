
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct regmap*,int ,unsigned int*) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct regmap *VAR_4)
{
 unsigned long VAR_5 = VAR_3 + VAR_1 / 2;
 unsigned int VAR_6, VAR_7, VAR_8 = 0;

 while (FUNC_4(VAR_3, VAR_5)) {
  FUNC_3(VAR_4, VAR_2, &VAR_6);
  FUNC_3(VAR_4, VAR_2, &VAR_7);
  if (FUNC_2(VAR_6 == VAR_7))
   return (int)VAR_6;
  if (VAR_8 < 10) {
   FUNC_1();
   VAR_8++;
  } else {
   FUNC_5(500, 1000);
  }
 }
 FUNC_0(1, "IND_AB register not stable");
 return -VAR_0;
}
