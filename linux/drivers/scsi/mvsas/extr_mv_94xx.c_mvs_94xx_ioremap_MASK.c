
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_info {int id; scalar_t__ regs; scalar_t__ regs_ex; } ;


 int FUNC_0 (struct mvs_info*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mvs_info *VAR_0)
{
 if (!FUNC_0(VAR_0, 2, -1)) {
  VAR_0->regs_ex = VAR_0->regs + 0x10200;
  VAR_0->regs += 0x20000;
  if (VAR_0->id == 1)
   VAR_0->regs += 0x4000;
  return 0;
 }
 return -1;
}
