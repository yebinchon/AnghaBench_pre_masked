
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {TYPE_1__* fcpim; int qe; int io_cbfn; int hcb_qe; int bfa; int itnim; } ;
typedef scalar_t__ bfa_boolean_t ;
struct TYPE_2__ {int ioim_comp_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,struct bfa_ioim_s*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct bfa_ioim_s *VAR_3, bfa_boolean_t VAR_4)
{







 if (VAR_4)
  VAR_3->io_cbfn = VAR_1;
 else {
  VAR_3->io_cbfn = VAR_0;
  FUNC_1(VAR_3->itnim, VAR_2);
 }
 FUNC_0(VAR_3->bfa, &VAR_3->hcb_qe, VAR_3->io_cbfn, VAR_3);





 FUNC_3(&VAR_3->qe);
 FUNC_2(&VAR_3->qe, &VAR_3->fcpim->ioim_comp_q);
}
