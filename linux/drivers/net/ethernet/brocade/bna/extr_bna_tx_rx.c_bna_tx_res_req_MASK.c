
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bna_tcb {int dummy; } ;
struct TYPE_3__ {int num; int intr_type; } ;
struct bna_mem_info {int len; int num; void* mem_type; } ;
struct TYPE_4__ {TYPE_1__ intr_info; struct bna_mem_info mem_info; } ;
struct bna_res_info {TYPE_2__ res_u; void* res_type; } ;
struct bna_dma_addr {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_1(int VAR_15, int VAR_16, struct bna_res_info *VAR_17)
{
 u32 VAR_18;
 u32 VAR_19;
 struct bna_mem_info *VAR_20;

 VAR_17[VAR_12].res_type = VAR_6;
 VAR_20 = &VAR_17[VAR_12].res_u.mem_info;
 VAR_20->mem_type = VAR_4;
 VAR_20->len = sizeof(struct bna_tcb);
 VAR_20->num = VAR_15;

 VAR_18 = VAR_16 * VAR_1;
 VAR_18 = FUNC_0(VAR_18, VAR_14);
 VAR_19 = VAR_18 >> VAR_13;

 VAR_17[VAR_10].res_type = VAR_6;
 VAR_20 = &VAR_17[VAR_10].res_u.mem_info;
 VAR_20->mem_type = VAR_3;
 VAR_20->len = VAR_19 * sizeof(struct bna_dma_addr);
 VAR_20->num = VAR_15;

 VAR_17[VAR_11].res_type = VAR_6;
 VAR_20 = &VAR_17[VAR_11].res_u.mem_info;
 VAR_20->mem_type = VAR_4;
 VAR_20->len = VAR_19 * sizeof(void *);
 VAR_20->num = VAR_15;

 VAR_17[VAR_9].res_type = VAR_6;
 VAR_20 = &VAR_17[VAR_9].res_u.mem_info;
 VAR_20->mem_type = VAR_3;
 VAR_20->len = VAR_14 * VAR_19;
 VAR_20->num = VAR_15;

 VAR_17[VAR_8].res_type = VAR_6;
 VAR_20 = &VAR_17[VAR_8].res_u.mem_info;
 VAR_20->mem_type = VAR_3;
 VAR_20->len = VAR_0;
 VAR_20->num = VAR_15;

 VAR_17[VAR_7].res_type = VAR_5;
 VAR_17[VAR_7].res_u.intr_info.intr_type =
   VAR_2;
 VAR_17[VAR_7].res_u.intr_info.num = VAR_15;
}
