
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct octeon_instr_queue {scalar_t__ max_count; scalar_t__ reset_instr_cnt; int inst_cnt_reg; } ;


 scalar_t__ FUNC_0 (int ) ;

u32
FUNC_1(struct octeon_instr_queue *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0->inst_cnt_reg);





 if (VAR_0->reset_instr_cnt < VAR_1)
  VAR_1 -= VAR_0->reset_instr_cnt;
 else
  VAR_1 += (0xffffffff - VAR_0->reset_instr_cnt) + 1;




 VAR_1 %= VAR_0->max_count;

 return VAR_1;
}
