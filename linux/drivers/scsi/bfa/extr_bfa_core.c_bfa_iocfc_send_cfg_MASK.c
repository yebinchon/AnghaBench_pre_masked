
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int coalesce; } ;
struct bfi_iocfc_cfg_s {int single_msix_vec; int num_cqs; TYPE_9__ intr_attr; void** rsp_cq_elems; int * rsp_shadow_pi; int * rsp_cq_ba; void** req_cq_elems; int * req_shadow_ci; int * req_cq_ba; int cfgrsp_addr; void* num_fwtio_reqs; void* num_ioim_reqs; int endian_sig; } ;
struct bfi_iocfc_cfg_req_s {int ioc_cfg_dma_addr; int mh; } ;
struct TYPE_12__ {int nvecs; } ;
struct TYPE_11__ {int pa; } ;
struct TYPE_13__ {int pa; } ;
struct TYPE_19__ {int num_rspq_elems; int num_reqq_elems; } ;
struct TYPE_14__ {int num_cqs; int num_fwtio_reqs; int num_ioim_reqs; } ;
struct bfa_iocfc_cfg_s {TYPE_8__ drvcfg; TYPE_3__ fwcfg; } ;
struct bfa_iocfc_s {TYPE_10__ cfg_info; TYPE_7__* rsp_cq_shadow_pi; TYPE_6__* rsp_cq_ba; TYPE_5__* req_cq_shadow_ci; TYPE_4__* req_cq_ba; TYPE_2__ cfgrsp_dma; struct bfa_iocfc_cfg_s cfg; struct bfi_iocfc_cfg_s* cfginfo; } ;
struct bfa_s {int ioc; TYPE_1__ msix; struct bfa_iocfc_s iocfc; } ;
struct TYPE_18__ {int pa; } ;
struct TYPE_17__ {int pa; } ;
struct TYPE_16__ {int pa; } ;
struct TYPE_15__ {int pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bfa_s*,int ) ;
 int FUNC_3 (struct bfa_s*) ;
 scalar_t__ FUNC_4 (struct bfa_iocfc_s*,int ) ;
 int FUNC_5 (int *,struct bfi_iocfc_cfg_req_s*,int) ;
 int FUNC_6 (struct bfa_s*) ;
 int VAR_5 ;
 int FUNC_7 (struct bfa_s*,int) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_6)
{
 struct bfa_s *VAR_7 = VAR_6;
 struct bfa_iocfc_s *VAR_8 = &VAR_7->iocfc;
 struct bfi_iocfc_cfg_req_s VAR_9;
 struct bfi_iocfc_cfg_s *VAR_10 = VAR_8->cfginfo;
 struct bfa_iocfc_cfg_s *VAR_11 = &VAR_8->cfg;
 int VAR_12;

 FUNC_0(VAR_11->fwcfg.num_cqs > VAR_3);
 FUNC_7(VAR_7, VAR_11->fwcfg.num_cqs);

 FUNC_6(VAR_7);




 VAR_10->single_msix_vec = 0;
 if (VAR_7->msix.nvecs == 1)
  VAR_10->single_msix_vec = 1;
 VAR_10->endian_sig = VAR_2;
 VAR_10->num_cqs = VAR_11->fwcfg.num_cqs;
 VAR_10->num_ioim_reqs = FUNC_9(FUNC_2(VAR_7,
            VAR_11->fwcfg.num_ioim_reqs));
 VAR_10->num_fwtio_reqs = FUNC_9(VAR_11->fwcfg.num_fwtio_reqs);

 FUNC_1(VAR_10->cfgrsp_addr, VAR_8->cfgrsp_dma.pa);



 for (VAR_12 = 0; VAR_12 < VAR_11->fwcfg.num_cqs; VAR_12++) {
  FUNC_1(VAR_10->req_cq_ba[VAR_12],
        VAR_8->req_cq_ba[VAR_12].pa);
  FUNC_1(VAR_10->req_shadow_ci[VAR_12],
        VAR_8->req_cq_shadow_ci[VAR_12].pa);
  VAR_10->req_cq_elems[VAR_12] =
   FUNC_9(VAR_11->drvcfg.num_reqq_elems);

  FUNC_1(VAR_10->rsp_cq_ba[VAR_12],
        VAR_8->rsp_cq_ba[VAR_12].pa);
  FUNC_1(VAR_10->rsp_shadow_pi[VAR_12],
        VAR_8->rsp_cq_shadow_pi[VAR_12].pa);
  VAR_10->rsp_cq_elems[VAR_12] =
   FUNC_9(VAR_11->drvcfg.num_rspq_elems);
 }





 if (FUNC_4(VAR_8, VAR_5))
  VAR_10->intr_attr.coalesce = VAR_0;




 FUNC_8(VAR_9.mh, VAR_4, VAR_1,
      FUNC_3(VAR_7));
 FUNC_1(VAR_9.ioc_cfg_dma_addr, VAR_8->cfg_info.pa);

 FUNC_5(&VAR_7->ioc, &VAR_9,
     sizeof(struct bfi_iocfc_cfg_req_s));
}
