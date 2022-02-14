
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_iocfc_cfg_s {int num_ioim_reqs; } ;
struct bfa_iocfc_s {struct bfi_iocfc_cfg_s* cfginfo; } ;
struct bfa_s {struct bfa_iocfc_s iocfc; } ;
struct bfa_iocfc_fwcfg_s {int num_tskim_reqs; int num_ioim_reqs; int num_rports; int num_uf_bufs; int num_fcxp_reqs; } ;


 int FUNC_0 (struct bfa_s*,int ,int ) ;
 int FUNC_1 (struct bfa_s*,int ) ;
 int FUNC_2 (struct bfa_s*,int ) ;
 int FUNC_3 (struct bfa_s*,int ) ;
 int FUNC_4 (struct bfa_s*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_s *VAR_0, struct bfa_iocfc_fwcfg_s *VAR_1)
{
 struct bfa_iocfc_s *VAR_2 = &VAR_0->iocfc;
 struct bfi_iocfc_cfg_s *VAR_3 = VAR_2->cfginfo;

 FUNC_1(VAR_0, VAR_1->num_fcxp_reqs);
 FUNC_4(VAR_0, VAR_1->num_uf_bufs);
 FUNC_2(VAR_0, VAR_1->num_rports);
 FUNC_0(VAR_0, FUNC_5(VAR_3->num_ioim_reqs),
     VAR_1->num_ioim_reqs);
 FUNC_3(VAR_0, VAR_1->num_tskim_reqs);
}
