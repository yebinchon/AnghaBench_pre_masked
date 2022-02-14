
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_hw_regs {unsigned int cl_slot_num_mask; unsigned int cl_pointer_toggle; int inb_read_pointer; } ;
struct mvumi_hba {unsigned int ib_cur_slot; scalar_t__ max_io; int fw_outstanding; TYPE_1__* pdev; struct mvumi_hw_regs* regs; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(struct mvumi_hba *VAR_0)
{
 unsigned int VAR_1;
 struct mvumi_hw_regs *VAR_2 = VAR_0->regs;

 VAR_1 = FUNC_2(VAR_0->regs->inb_read_pointer);

 if (FUNC_3(((VAR_1 & VAR_2->cl_slot_num_mask) ==
   (VAR_0->ib_cur_slot & VAR_2->cl_slot_num_mask)) &&
   ((VAR_1 & VAR_2->cl_pointer_toggle)
    != (VAR_0->ib_cur_slot & VAR_2->cl_pointer_toggle)))) {
  FUNC_1(&VAR_0->pdev->dev, "no free slot to use.\n");
  return 0;
 }
 if (FUNC_0(&VAR_0->fw_outstanding) >= VAR_0->max_io) {
  FUNC_1(&VAR_0->pdev->dev, "firmware io overflow.\n");
  return 0;
 } else {
  return VAR_0->max_io - FUNC_0(&VAR_0->fw_outstanding);
 }
}
