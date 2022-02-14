
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_trc_mod_s {int dummy; } ;
struct bfa_ioc_s {int notify_q; } ;
struct TYPE_3__ {int qe; } ;
struct bfa_diag_s {struct bfa_ioc_s* ioc; TYPE_1__ ioc_notify; int cbfn_beacon; int * result; int * cbarg; int * cbfn; scalar_t__ block; struct bfa_trc_mod_s* trcmod; void* dev; } ;
typedef int bfa_cb_diag_beacon_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_ioc_s*,int ,int ,struct bfa_diag_s*) ;
 int FUNC_1 (TYPE_1__*,int ,struct bfa_diag_s*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(struct bfa_diag_s *VAR_3, struct bfa_ioc_s *VAR_4, void *VAR_5,
 bfa_cb_diag_beacon_t VAR_6, struct bfa_trc_mod_s *VAR_7)
{
 VAR_3->dev = VAR_5;
 VAR_3->ioc = VAR_4;
 VAR_3->trcmod = VAR_7;

 VAR_3->block = 0;
 VAR_3->cbfn = ((void*)0);
 VAR_3->cbarg = ((void*)0);
 VAR_3->result = ((void*)0);
 VAR_3->cbfn_beacon = VAR_6;

 FUNC_0(VAR_3->ioc, VAR_0, VAR_1, VAR_3);
 FUNC_2(&VAR_3->ioc_notify);
 FUNC_1(&VAR_3->ioc_notify, VAR_2, VAR_3);
 FUNC_3(&VAR_3->ioc_notify.qe, &VAR_3->ioc->notify_q);
}
