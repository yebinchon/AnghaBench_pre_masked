
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_instr_queue {int pkt_in_done; int max_count; int octeon_read_index; int inst_cnt_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct octeon_instr_queue *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4 = FUNC_0(VAR_1->inst_cnt_reg);

 VAR_3 = VAR_4 - VAR_1->pkt_in_done;
 VAR_1->pkt_in_done = VAR_4;





 VAR_2 = (VAR_1->octeon_read_index +
     (u32)(VAR_3 & VAR_0)) %
    VAR_1->max_count;

 return VAR_2;
}
