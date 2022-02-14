
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pbc_pwwn; int pbc_nwwn; } ;
struct bfa_iocfc_fwcfg_s {void* num_rports; void* num_uf_bufs; void* num_fcxp_reqs; void* num_tskim_reqs; void* num_fwtio_reqs; void* num_ioim_reqs; int num_cqs; } ;
struct bfi_iocfc_cfgrsp_s {TYPE_3__ pbc_cfg; int qreg; struct bfa_iocfc_fwcfg_s fwcfg; } ;
struct bfa_iocfc_s {struct bfi_iocfc_cfgrsp_s* cfgrsp; } ;
struct TYPE_5__ {TYPE_1__* attr; } ;
struct bfa_s {struct bfa_iocfc_s iocfc; TYPE_2__ ioc; } ;
struct TYPE_4__ {scalar_t__ pwwn; int nwwn; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (struct bfa_iocfc_s*,int ) ;
 int FUNC_2 (struct bfa_s*,int *) ;
 int FUNC_3 (struct bfa_s*,struct bfa_iocfc_fwcfg_s*) ;
 int FUNC_4 (struct bfa_s*) ;

__attribute__((used)) static void
FUNC_5(struct bfa_s *VAR_1)
{
 struct bfa_iocfc_s *VAR_2 = &VAR_1->iocfc;
 struct bfi_iocfc_cfgrsp_s *VAR_3 = VAR_2->cfgrsp;
 struct bfa_iocfc_fwcfg_s *VAR_4 = &VAR_3->fwcfg;

 VAR_4->num_cqs = VAR_4->num_cqs;
 VAR_4->num_ioim_reqs = FUNC_0(VAR_4->num_ioim_reqs);
 VAR_4->num_fwtio_reqs = FUNC_0(VAR_4->num_fwtio_reqs);
 VAR_4->num_tskim_reqs = FUNC_0(VAR_4->num_tskim_reqs);
 VAR_4->num_fcxp_reqs = FUNC_0(VAR_4->num_fcxp_reqs);
 VAR_4->num_uf_bufs = FUNC_0(VAR_4->num_uf_bufs);
 VAR_4->num_rports = FUNC_0(VAR_4->num_rports);




 FUNC_2(VAR_1, &VAR_3->qreg);




 FUNC_3(VAR_1, VAR_4);




 FUNC_4(VAR_1);

 if (VAR_1->iocfc.cfgrsp->pbc_cfg.pbc_pwwn != 0) {
  VAR_1->ioc.attr->pwwn = VAR_1->iocfc.cfgrsp->pbc_cfg.pbc_pwwn;
  VAR_1->ioc.attr->nwwn = VAR_1->iocfc.cfgrsp->pbc_cfg.pbc_nwwn;
  FUNC_1(VAR_2, VAR_0);
 }
}
