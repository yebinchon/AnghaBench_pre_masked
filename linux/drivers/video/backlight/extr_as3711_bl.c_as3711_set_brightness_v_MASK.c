
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3711 {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct as3711 *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3)
{
 if (VAR_2 > 31)
  return -VAR_0;

 return FUNC_0(VAR_1->regmap, VAR_3, 0xf0,
      VAR_2 << 4);
}
