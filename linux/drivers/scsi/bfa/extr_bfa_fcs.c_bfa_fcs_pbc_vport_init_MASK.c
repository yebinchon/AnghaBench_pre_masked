
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_pbc_vport_s {int dummy; } ;
struct bfa_fcs_s {TYPE_1__* bfa; int min_cfg; } ;
struct TYPE_2__ {int bfad; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfi_pbc_vport_s) ;
 int FUNC_1 (TYPE_1__*,struct bfi_pbc_vport_s*) ;

void
FUNC_2(struct bfa_fcs_s *VAR_1)
{
 int VAR_2, VAR_3;
 struct bfi_pbc_vport_s VAR_4[VAR_0];


 if (!VAR_1->min_cfg) {
  VAR_3 =
   FUNC_1(VAR_1->bfa, VAR_4);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
   FUNC_0(VAR_1->bfa->bfad, VAR_4[VAR_2]);
 }
}
