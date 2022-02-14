
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_5__ {int qe; } ;
struct TYPE_4__ {int qe; } ;
struct bfa_meminfo_s {TYPE_2__ kva_info; TYPE_1__ dma_info; } ;
struct bfa_mem_dma_s {int dummy; } ;
struct TYPE_6__ {int min_cfg; } ;
struct bfa_iocfc_cfg_s {TYPE_3__ drvcfg; } ;


 struct bfa_mem_dma_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_1 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_2 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_3 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_4 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_5 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_6 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_7 (struct bfa_s*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_15 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_16 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_20 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_21 (struct bfa_meminfo_s*,struct bfa_mem_dma_s*,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 () ;
 int FUNC_24 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_25 () ;
 int FUNC_26 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_27 (struct bfa_iocfc_cfg_s*,struct bfa_meminfo_s*,struct bfa_s*) ;
 int FUNC_28 (void*,int ,int) ;

void
FUNC_29(struct bfa_iocfc_cfg_s *VAR_0, struct bfa_meminfo_s *VAR_1,
  struct bfa_s *VAR_2)
{
 struct bfa_mem_dma_s *VAR_3 = FUNC_6(VAR_2);
 struct bfa_mem_dma_s *VAR_4 = FUNC_0(VAR_2);
 struct bfa_mem_dma_s *VAR_5 = FUNC_1(VAR_2);
 struct bfa_mem_dma_s *VAR_6 = FUNC_7(VAR_2);
 struct bfa_mem_dma_s *VAR_7 = FUNC_3(VAR_2);
 struct bfa_mem_dma_s *VAR_8 = FUNC_2(VAR_2);
 struct bfa_mem_dma_s *VAR_9 = FUNC_5(VAR_2);
 struct bfa_mem_dma_s *VAR_10 = FUNC_4(VAR_2);

 FUNC_9((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)));

 FUNC_28((void *)VAR_1, 0, sizeof(struct bfa_meminfo_s));


 FUNC_8(&VAR_1->dma_info.qe);
 FUNC_8(&VAR_1->kva_info.qe);

 FUNC_19(VAR_0, VAR_1, VAR_2);
 FUNC_26(VAR_0, VAR_1, VAR_2);
 FUNC_15(VAR_0, VAR_1, VAR_2);
 FUNC_16(VAR_0, VAR_1, VAR_2);
 FUNC_20(VAR_0, VAR_1, VAR_2);
 FUNC_27(VAR_0, VAR_1, VAR_2);
 FUNC_24(VAR_0, VAR_1, VAR_2);
 FUNC_14(VAR_0, VAR_1, VAR_2);
 FUNC_12(VAR_0, VAR_1, VAR_2);


 FUNC_21(VAR_1, VAR_3, FUNC_23());
 FUNC_21(VAR_1, VAR_4, FUNC_10());
 FUNC_21(VAR_1, VAR_5, FUNC_11());
 FUNC_21(VAR_1, VAR_6, FUNC_25());
 FUNC_21(VAR_1, VAR_7,
     FUNC_17(VAR_0->drvcfg.min_cfg));
 FUNC_21(VAR_1, VAR_8, FUNC_13());
 FUNC_21(VAR_1, VAR_9,
     FUNC_22(VAR_0->drvcfg.min_cfg));
 FUNC_21(VAR_1, VAR_10,
     FUNC_18(VAR_0->drvcfg.min_cfg));
}
