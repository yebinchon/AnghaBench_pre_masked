
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct vub300_mmc_host {int total_offload_count; TYPE_1__* fn; } ;
struct offload_registers_access {int dummy; } ;
struct TYPE_2__ {size_t offload_point; size_t offload_count; int * reg; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,struct offload_registers_access*,int) ;

__attribute__((used)) static void FUNC_1(struct vub300_mmc_host *VAR_1,
     struct offload_registers_access
     *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = VAR_1->fn[VAR_3].offload_point + VAR_1->fn[VAR_3].offload_count;
 FUNC_0(&VAR_1->fn[VAR_3].reg[VAR_0 & VAR_4], VAR_2,
        sizeof(struct offload_registers_access));
 VAR_1->fn[VAR_3].offload_count += 1;
 VAR_1->total_offload_count += 1;
}
