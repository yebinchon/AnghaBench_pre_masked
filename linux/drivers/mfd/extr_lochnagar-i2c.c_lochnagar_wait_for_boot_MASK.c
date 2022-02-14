
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_4, unsigned int *VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  FUNC_0(VAR_1);


  VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_5);
  if (!VAR_7)
   return VAR_7;
 }

 return -VAR_0;
}
