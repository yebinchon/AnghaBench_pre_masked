
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bna_rx_config {int q0_depth; scalar_t__ rxp_type; int q1_depth; int num_paths; } ;
struct TYPE_3__ {int num; int intr_type; } ;
struct bna_mem_info {int len; int num; void* mem_type; } ;
struct TYPE_4__ {TYPE_1__ intr_info; struct bna_mem_info mem_info; } ;
struct bna_res_info {TYPE_2__ res_u; void* res_type; } ;
struct bna_rcb {int dummy; } ;
struct bna_dma_addr {int dummy; } ;
struct bna_ccb {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bna_rx_config*) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void
FUNC_4(struct bna_rx_config *VAR_25, struct bna_res_info *VAR_26)
{
 u32 VAR_27, VAR_28, VAR_29;
 u32 VAR_30, VAR_31, VAR_32;
 struct bna_mem_info *VAR_33;
 u32 VAR_34;
 u32 VAR_35;
 u32 VAR_36;

 VAR_36 = VAR_25->q0_depth;
 VAR_35 = ((VAR_25->rxp_type == VAR_9) ? 0 : VAR_25->q1_depth);
 VAR_34 = FUNC_3(VAR_36 + VAR_35);

 VAR_27 = VAR_34 * VAR_0;
 VAR_27 = FUNC_0(VAR_27, VAR_24);
 VAR_30 = FUNC_2(VAR_27);

 VAR_36 = FUNC_3(VAR_36);
 VAR_29 = VAR_36 * VAR_3;
 VAR_29 = FUNC_0(VAR_29, VAR_24);
 VAR_32 = FUNC_2(VAR_29);

 if (VAR_9 != VAR_25->rxp_type) {
  VAR_35 = FUNC_3(VAR_35);
  VAR_28 = VAR_35 * VAR_3;
  VAR_28 = FUNC_0(VAR_28, VAR_24);
  VAR_31 = FUNC_2(VAR_28);
 } else
  VAR_31 = 0;

 VAR_26[VAR_10].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_10].res_u.mem_info;
 VAR_33->mem_type = VAR_6;
 VAR_33->len = sizeof(struct bna_ccb);
 VAR_33->num = VAR_25->num_paths;

 VAR_26[VAR_21].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_21].res_u.mem_info;
 VAR_33->mem_type = VAR_6;
 VAR_33->len = sizeof(struct bna_rcb);
 VAR_33->num = FUNC_1(VAR_25);

 VAR_26[VAR_11].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_11].res_u.mem_info;
 VAR_33->mem_type = VAR_5;
 VAR_33->len = VAR_30 * sizeof(struct bna_dma_addr);
 VAR_33->num = VAR_25->num_paths;

 VAR_26[VAR_13].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_13].res_u.mem_info;
 VAR_33->mem_type = VAR_6;
 VAR_33->len = VAR_30 * sizeof(void *);
 VAR_33->num = VAR_25->num_paths;

 VAR_26[VAR_12].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_12].res_u.mem_info;
 VAR_33->mem_type = VAR_5;
 VAR_33->len = VAR_24 * VAR_30;
 VAR_33->num = VAR_25->num_paths;

 VAR_26[VAR_15].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_15].res_u.mem_info;
 VAR_33->mem_type = VAR_5;
 VAR_33->len = VAR_32 * sizeof(struct bna_dma_addr);
 VAR_33->num = VAR_25->num_paths;

 VAR_26[VAR_16].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_16].res_u.mem_info;
 VAR_33->mem_type = VAR_6;
 VAR_33->len = VAR_32 * sizeof(void *);
 VAR_33->num = VAR_25->num_paths;

 VAR_26[VAR_14].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_14].res_u.mem_info;
 VAR_33->mem_type = VAR_5;
 VAR_33->len = VAR_24 * VAR_32;
 VAR_33->num = VAR_25->num_paths;

 VAR_26[VAR_18].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_18].res_u.mem_info;
 VAR_33->mem_type = VAR_5;
 VAR_33->len = VAR_31 * sizeof(struct bna_dma_addr);
 VAR_33->num = (VAR_31 ? VAR_25->num_paths : 0);

 VAR_26[VAR_19].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_19].res_u.mem_info;
 VAR_33->mem_type = VAR_6;
 VAR_33->len = VAR_31 * sizeof(void *);
 VAR_33->num = (VAR_31 ? VAR_25->num_paths : 0);

 VAR_26[VAR_17].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_17].res_u.mem_info;
 VAR_33->mem_type = VAR_5;
 VAR_33->len = VAR_24 * VAR_31;
 VAR_33->num = (VAR_31 ? VAR_25->num_paths : 0);

 VAR_26[VAR_20].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_20].res_u.mem_info;
 VAR_33->mem_type = VAR_5;
 VAR_33->len = VAR_2;
 VAR_33->num = VAR_25->num_paths;

 VAR_26[VAR_22].res_type = VAR_8;
 VAR_33 = &VAR_26[VAR_22].res_u.mem_info;
 VAR_33->mem_type = VAR_6;
 VAR_33->len = VAR_1;
 VAR_33->num = 1;

 VAR_26[VAR_23].res_type = VAR_7;
 VAR_26[VAR_23].res_u.intr_info.intr_type = VAR_4;
 VAR_26[VAR_23].res_u.intr_info.num = VAR_25->num_paths;
}
