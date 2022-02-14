
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_hba {unsigned int ib_cur_slot; unsigned int list_num_io; int hba_capability; unsigned int ib_max_size; int fw_outstanding; void* ib_list; TYPE_1__* regs; } ;
struct mvumi_dyn_list_entry {int dummy; } ;
struct TYPE_2__ {unsigned int cl_slot_num_mask; unsigned int cl_pointer_toggle; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mvumi_hba *VAR_1, void **VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_1->ib_cur_slot & VAR_1->regs->cl_slot_num_mask;
 VAR_3++;
 if (VAR_3 >= VAR_1->list_num_io) {
  VAR_3 -= VAR_1->list_num_io;
  VAR_1->ib_cur_slot ^= VAR_1->regs->cl_pointer_toggle;
 }
 VAR_1->ib_cur_slot &= ~VAR_1->regs->cl_slot_num_mask;
 VAR_1->ib_cur_slot |= (VAR_3 & VAR_1->regs->cl_slot_num_mask);
 if (VAR_1->hba_capability & VAR_0) {
  *VAR_2 = VAR_1->ib_list + VAR_3 *
    sizeof(struct mvumi_dyn_list_entry);
 } else {
  *VAR_2 = VAR_1->ib_list + VAR_3 * VAR_1->ib_max_size;
 }
 FUNC_0(&VAR_1->fw_outstanding);
}
