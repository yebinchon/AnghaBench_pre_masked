
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct bfa_pcidev_s {int dummy; } ;
struct TYPE_4__ {int delay_comp; int path_tov; } ;
struct TYPE_3__ {int num_tskim_reqs; int num_rports; int num_ioim_reqs; } ;
struct bfa_iocfc_cfg_s {TYPE_2__ drvcfg; TYPE_1__ fwcfg; } ;
struct bfa_fcpim_s {int * profile_start; int * profile_comp; int delay_comp; int path_tov; int num_tskim_reqs; int num_itnims; struct bfa_s* bfa; struct bfa_fcp_mod_s* fcp; } ;
struct bfa_fcp_mod_s {struct bfa_s* bfa; struct bfa_fcpim_s fcpim; } ;


 int FUNC_0 (struct bfa_fcpim_s*) ;
 int FUNC_1 (struct bfa_fcpim_s*) ;
 int FUNC_2 (struct bfa_s*,int ) ;
 int FUNC_3 (struct bfa_fcpim_s*) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcp_mod_s *VAR_0, void *VAR_1,
  struct bfa_iocfc_cfg_s *VAR_2, struct bfa_pcidev_s *VAR_3)
{
 struct bfa_fcpim_s *VAR_4 = &VAR_0->fcpim;
 struct bfa_s *VAR_5 = VAR_0->bfa;

 FUNC_2(VAR_5, VAR_2->drvcfg.path_tov);
 FUNC_2(VAR_5, VAR_2->fwcfg.num_rports);
 FUNC_2(VAR_5, VAR_2->fwcfg.num_ioim_reqs);
 FUNC_2(VAR_5, VAR_2->fwcfg.num_tskim_reqs);

 VAR_4->fcp = VAR_0;
 VAR_4->bfa = VAR_5;
 VAR_4->num_itnims = VAR_2->fwcfg.num_rports;
 VAR_4->num_tskim_reqs = VAR_2->fwcfg.num_tskim_reqs;
 VAR_4->path_tov = VAR_2->drvcfg.path_tov;
 VAR_4->delay_comp = VAR_2->drvcfg.delay_comp;
 VAR_4->profile_comp = ((void*)0);
 VAR_4->profile_start = ((void*)0);

 FUNC_1(VAR_4);
 FUNC_3(VAR_4);
 FUNC_0(VAR_4);
}
