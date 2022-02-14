
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct octeon_instr_queue {int* base_addr; int host_write_index; scalar_t__ iqcmd_64B; } ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static inline void FUNC_1(struct octeon_instr_queue *VAR_0,
          u8 *VAR_1)
{
 u8 *VAR_2, VAR_3;

 VAR_3 = ((VAR_0->iqcmd_64B) ? 64 : 32);
 VAR_2 = VAR_0->base_addr + (VAR_3 * VAR_0->host_write_index);

 FUNC_0(VAR_2, VAR_1, VAR_3);
}
