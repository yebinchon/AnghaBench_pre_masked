
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct octeon_instr_queue {int post_lock; scalar_t__ fill_cnt; } ;
struct octeon_device {struct octeon_instr_queue** instr_queue; } ;


 int FUNC_0 (struct octeon_device*,struct octeon_instr_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct octeon_device *VAR_0, u32 VAR_1)
{
 struct octeon_instr_queue *VAR_2;

 VAR_2 = VAR_0->instr_queue[VAR_1];
 FUNC_1(&VAR_2->post_lock);
 if (VAR_2->fill_cnt)
  FUNC_0(VAR_0, VAR_2);
 FUNC_2(&VAR_2->post_lock);
}
