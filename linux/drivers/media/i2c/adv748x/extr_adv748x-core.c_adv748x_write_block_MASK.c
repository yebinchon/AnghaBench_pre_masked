
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct adv748x_state {struct regmap** regmap; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct regmap*,unsigned int,void const*,size_t) ;

int FUNC_1(struct adv748x_state *VAR_1, int VAR_2,
   unsigned int VAR_3, const void *VAR_4,
   size_t VAR_5)
{
 struct regmap *VAR_6 = VAR_1->regmap[VAR_2];

 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 return FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
}
