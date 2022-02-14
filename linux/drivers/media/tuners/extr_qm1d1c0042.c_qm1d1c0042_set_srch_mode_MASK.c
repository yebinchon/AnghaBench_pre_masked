
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm1d1c0042_state {int* regs; } ;


 int FUNC_0 (struct qm1d1c0042_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct qm1d1c0042_state *VAR_0, bool VAR_1)
{
 if (VAR_1)
  VAR_0->regs[0x03] |= 0x01;
 else
  VAR_0->regs[0x03] &= ~0x01 & 0xff;

 return FUNC_0(VAR_0, 0x03, VAR_0->regs[0x03]);
}
