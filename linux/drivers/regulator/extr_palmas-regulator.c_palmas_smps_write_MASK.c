
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas {int * regmap; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct palmas *VAR_2, unsigned int VAR_3,
  unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_3);

 return FUNC_1(VAR_2->regmap[VAR_1], VAR_5, VAR_4);
}
