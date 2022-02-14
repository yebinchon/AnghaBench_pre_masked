
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_info {int id; scalar_t__ regs; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mvs_info *VAR_0)
{
 if (VAR_0->regs) {
  VAR_0->regs -= 0x20000;
  if (VAR_0->id == 1)
   VAR_0->regs -= 0x4000;
  FUNC_0(VAR_0->regs);
 }
}
