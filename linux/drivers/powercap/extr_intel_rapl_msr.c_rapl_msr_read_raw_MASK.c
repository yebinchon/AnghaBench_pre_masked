
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reg_action {int mask; int value; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int,int ,int *) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct reg_action *VAR_2)
{
 u32 VAR_3 = (u32)VAR_2->reg;

 if (FUNC_1(VAR_1, VAR_3, &VAR_2->value)) {
  FUNC_0("failed to read msr 0x%x on cpu %d\n", VAR_3, VAR_1);
  return -VAR_0;
 }
 VAR_2->value &= VAR_2->mask;
 return 0;
}
