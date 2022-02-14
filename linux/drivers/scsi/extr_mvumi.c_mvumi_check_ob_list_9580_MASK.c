
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hw_regs {unsigned int cl_slot_num_mask; int outb_copy_pointer; int outb_read_pointer; } ;
struct mvumi_hba {unsigned int ob_cur_slot; scalar_t__ list_num_io; struct mvumi_hw_regs* regs; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mvumi_hba *VAR_0,
   unsigned int *VAR_1, unsigned int *VAR_2)
{
 unsigned int VAR_3;
 struct mvumi_hw_regs *VAR_4 = VAR_0->regs;

 VAR_3 = FUNC_0(VAR_4->outb_read_pointer);
 VAR_3 = FUNC_0(VAR_4->outb_copy_pointer);
 *VAR_1 = VAR_0->ob_cur_slot & VAR_0->regs->cl_slot_num_mask;
 *VAR_2 = VAR_3 & VAR_0->regs->cl_slot_num_mask;
 if (*VAR_2 < *VAR_1)
  *VAR_2 += VAR_0->list_num_io;
 else if (*VAR_2 == *VAR_1)
  return -1;
 return 0;
}
