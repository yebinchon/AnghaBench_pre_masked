
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fza_private {TYPE_1__* regs; int name; } ;
struct TYPE_2__ {int control_b; int control_a; int int_mask; int status; int int_event; int reset; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct fza_private *VAR_0)
{
 FUNC_0("%s: iomem registers:\n", VAR_0->name);
 FUNC_0(" reset:           0x%04x\n", FUNC_1(&VAR_0->regs->reset));
 FUNC_0(" interrupt event: 0x%04x\n", FUNC_2(&VAR_0->regs->int_event));
 FUNC_0(" status:          0x%04x\n", FUNC_2(&VAR_0->regs->status));
 FUNC_0(" interrupt mask:  0x%04x\n", FUNC_2(&VAR_0->regs->int_mask));
 FUNC_0(" control A:       0x%04x\n", FUNC_2(&VAR_0->regs->control_a));
 FUNC_0(" control B:       0x%04x\n", FUNC_2(&VAR_0->regs->control_b));
}
