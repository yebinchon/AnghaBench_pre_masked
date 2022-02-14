
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6524x {int dummy; } ;
struct field {int mask; int shift; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct tps6524x*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct tps6524x *VAR_1, const struct field *VAR_2,
         int VAR_3)
{
 if (VAR_3 & ~VAR_2->mask)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2->reg,
        VAR_2->mask << VAR_2->shift,
        VAR_3 << VAR_2->shift);
}
