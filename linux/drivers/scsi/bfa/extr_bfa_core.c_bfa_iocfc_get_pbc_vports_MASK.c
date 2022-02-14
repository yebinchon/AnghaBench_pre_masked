
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_pbc_vport_s {int dummy; } ;
struct TYPE_2__ {int nvports; int vport; } ;
struct bfi_iocfc_cfgrsp_s {TYPE_1__ pbc_cfg; } ;
struct bfa_iocfc_s {struct bfi_iocfc_cfgrsp_s* cfgrsp; } ;
struct bfa_s {struct bfa_iocfc_s iocfc; } ;


 int FUNC_0 (struct bfi_pbc_vport_s*,int ,int) ;

int
FUNC_1(struct bfa_s *VAR_0, struct bfi_pbc_vport_s *VAR_1)
{
 struct bfa_iocfc_s *VAR_2 = &VAR_0->iocfc;
 struct bfi_iocfc_cfgrsp_s *VAR_3 = VAR_2->cfgrsp;

 FUNC_0(VAR_1, VAR_3->pbc_cfg.vport, sizeof(VAR_3->pbc_cfg.vport));
 return VAR_3->pbc_cfg.nvports;
}
