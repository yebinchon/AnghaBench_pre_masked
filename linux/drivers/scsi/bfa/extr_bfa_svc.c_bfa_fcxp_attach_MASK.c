
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct bfa_pcidev_s {int dummy; } ;
struct TYPE_3__ {int min_cfg; } ;
struct TYPE_4__ {int num_fcxp_reqs; } ;
struct bfa_iocfc_cfg_s {TYPE_1__ drvcfg; TYPE_2__ fwcfg; } ;
struct bfa_fcxp_mod_s {int rsp_wait_q; int req_wait_q; int rsp_pld_sz; int req_pld_sz; int num_fcxps; struct bfa_s* bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bfa_fcxp_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfa_fcxp_mod_s*) ;

void
FUNC_3(struct bfa_s *VAR_2, void *VAR_3, struct bfa_iocfc_cfg_s *VAR_4,
  struct bfa_pcidev_s *VAR_5)
{
 struct bfa_fcxp_mod_s *VAR_6 = FUNC_0(VAR_2);

 VAR_6->bfa = VAR_2;
 VAR_6->num_fcxps = VAR_4->fwcfg.num_fcxp_reqs;




 VAR_6->req_pld_sz = VAR_6->rsp_pld_sz = VAR_0;
 if (!VAR_4->drvcfg.min_cfg)
  VAR_6->rsp_pld_sz = VAR_1;

 FUNC_1(&VAR_6->req_wait_q);
 FUNC_1(&VAR_6->rsp_wait_q);

 FUNC_2(VAR_6);
}
