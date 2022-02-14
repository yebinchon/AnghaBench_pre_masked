
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct reg_action {scalar_t__ err; int value; int mask; int reg; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct reg_action *VAR_1 = VAR_0;
 u32 VAR_2 = (u32)VAR_1->reg;
 u64 VAR_3;

 VAR_1->err = FUNC_0(VAR_2, &VAR_3);
 if (VAR_1->err)
  return;

 VAR_3 &= ~VAR_1->mask;
 VAR_3 |= VAR_1->value;

 VAR_1->err = FUNC_1(VAR_2, VAR_3);
}
