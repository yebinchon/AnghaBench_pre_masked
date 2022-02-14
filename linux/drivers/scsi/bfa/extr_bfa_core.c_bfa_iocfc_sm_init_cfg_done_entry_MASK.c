
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_iocfc_s {TYPE_2__* bfa; } ;
struct TYPE_4__ {int init_hcb_qe; int op_status; } ;
struct TYPE_5__ {TYPE_1__ iocfc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int ,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct bfa_iocfc_s *VAR_2)
{
 VAR_2->bfa->iocfc.op_status = VAR_0;
 FUNC_0(VAR_2->bfa, &VAR_2->bfa->iocfc.init_hcb_qe,
       VAR_1, VAR_2->bfa);
}
