
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_hba {int ib_cur_slot; TYPE_1__* regs; int ib_shadow; } ;
struct TYPE_2__ {int inb_write_pointer; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct mvumi_hba *VAR_0)
{
 FUNC_0(0xffff, VAR_0->ib_shadow);
 FUNC_0(VAR_0->ib_cur_slot, VAR_0->regs->inb_write_pointer);
}
