
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct regmap {int dummy; } ;
struct aspeed_sig_desc {unsigned int enable; unsigned int disable; unsigned int mask; int reg; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct aspeed_sig_desc const*,int,unsigned int) ;
 int FUNC_2 (struct regmap*,int ,unsigned int*) ;

int FUNC_3(const struct aspeed_sig_desc *VAR_1,
    bool VAR_2, struct regmap *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 u32 VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3, VAR_1->reg, &VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_1, VAR_2, VAR_5);
 VAR_6 = VAR_2 ? VAR_1->enable : VAR_1->disable;

 return ((VAR_5 & VAR_1->mask) >> FUNC_0(VAR_1->mask)) == VAR_6;
}
