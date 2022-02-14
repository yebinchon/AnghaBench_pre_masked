
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9063 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct da9063*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct da9063 *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_3(150, 300);
 VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2->regmap, VAR_0,
      VAR_1, VAR_4);
}
