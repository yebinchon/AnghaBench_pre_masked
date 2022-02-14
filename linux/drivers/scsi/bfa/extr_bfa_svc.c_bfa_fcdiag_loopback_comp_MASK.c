
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int badfrmnum; int badfrminf; int numrcvfrm; int numosffrm; int numtxmfrm; } ;
struct bfi_diag_lb_rsp_s {TYPE_1__ res; } ;
struct TYPE_4__ {scalar_t__ lock; int status; int cbarg; int (* cbfn ) (int ,int ) ;struct bfa_diag_loopback_result_s* result; } ;
struct bfa_fcdiag_s {TYPE_2__ lb; } ;
struct bfa_diag_loopback_result_s {int status; void* badfrmnum; void* badfrminf; void* numrcvfrm; void* numosffrm; void* numtxmfrm; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_fcdiag_s*) ;
 int FUNC_2 (struct bfa_fcdiag_s*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcdiag_s *VAR_0,
   struct bfi_diag_lb_rsp_s *VAR_1)
{
 struct bfa_diag_loopback_result_s *VAR_2 = VAR_0->lb.result;

 VAR_2->numtxmfrm = FUNC_0(VAR_1->res.numtxmfrm);
 VAR_2->numosffrm = FUNC_0(VAR_1->res.numosffrm);
 VAR_2->numrcvfrm = FUNC_0(VAR_1->res.numrcvfrm);
 VAR_2->badfrminf = FUNC_0(VAR_1->res.badfrminf);
 VAR_2->badfrmnum = FUNC_0(VAR_1->res.badfrmnum);
 VAR_2->status = VAR_1->res.status;
 VAR_0->lb.status = VAR_1->res.status;
 FUNC_2(VAR_0, VAR_0->lb.status);
 VAR_0->lb.cbfn(VAR_0->lb.cbarg, VAR_0->lb.status);
 VAR_0->lb.lock = 0;
 FUNC_1(VAR_0);
}
