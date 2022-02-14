
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6524x {int dummy; } ;
struct field {int shift; int mask; int reg; } ;


 int FUNC_0 (struct tps6524x*,int ) ;

__attribute__((used)) static int FUNC_1(struct tps6524x *VAR_0, const struct field *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->reg);
 if (VAR_2 < 0)
  return VAR_2;

 return (VAR_2 >> VAR_1->shift) & VAR_1->mask;
}
