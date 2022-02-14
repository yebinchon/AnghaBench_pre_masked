
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_trc_mod_s {int dummy; } ;
struct bfa_ioc_s {int notify_q; } ;
struct TYPE_3__ {int qe; } ;
struct bfa_fru_s {scalar_t__ dbuf_pa; int * dbuf_kva; struct bfa_ioc_s* ioc; TYPE_1__ ioc_notify; scalar_t__ op_busy; int * cbarg; int * cbfn; struct bfa_trc_mod_s* trcmod; } ;
typedef scalar_t__ bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_ioc_s*,int ,int ,struct bfa_fru_s*) ;
 int FUNC_1 (TYPE_1__*,int ,struct bfa_fru_s*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(struct bfa_fru_s *VAR_3, struct bfa_ioc_s *VAR_4, void *VAR_5,
 struct bfa_trc_mod_s *VAR_6, bfa_boolean_t VAR_7)
{
 VAR_3->ioc = VAR_4;
 VAR_3->trcmod = VAR_6;
 VAR_3->cbfn = ((void*)0);
 VAR_3->cbarg = ((void*)0);
 VAR_3->op_busy = 0;

 FUNC_0(VAR_3->ioc, VAR_0, VAR_1, VAR_3);
 FUNC_2(&VAR_3->ioc_notify);
 FUNC_1(&VAR_3->ioc_notify, VAR_2, VAR_3);
 FUNC_3(&VAR_3->ioc_notify.qe, &VAR_3->ioc->notify_q);


 if (VAR_7) {
  VAR_3->dbuf_kva = ((void*)0);
  VAR_3->dbuf_pa = 0;
 }
}
