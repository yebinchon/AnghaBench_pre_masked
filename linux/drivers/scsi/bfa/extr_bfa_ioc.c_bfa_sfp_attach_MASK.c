
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_trc_mod_s {int dummy; } ;
struct TYPE_3__ {int qe; } ;
struct bfa_sfp_s {struct bfa_ioc_s* ioc; TYPE_1__ ioc_notify; int is_elb; int portspeed; int * media; int * state_query_cbarg; int * state_query_cbfn; scalar_t__ state_query_lock; int state; scalar_t__ data_valid; scalar_t__ lock; int * sfpmem; int * cbarg; int * cbfn; struct bfa_trc_mod_s* trcmod; void* dev; } ;
struct bfa_ioc_s {int notify_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_ioc_s*,int ,int ,struct bfa_sfp_s*) ;
 int FUNC_1 (TYPE_1__*,int ,struct bfa_sfp_s*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(struct bfa_sfp_s *VAR_6, struct bfa_ioc_s *VAR_7, void *VAR_8,
  struct bfa_trc_mod_s *VAR_9)
{
 VAR_6->dev = VAR_8;
 VAR_6->ioc = VAR_7;
 VAR_6->trcmod = VAR_9;

 VAR_6->cbfn = ((void*)0);
 VAR_6->cbarg = ((void*)0);
 VAR_6->sfpmem = ((void*)0);
 VAR_6->lock = 0;
 VAR_6->data_valid = 0;
 VAR_6->state = VAR_2;
 VAR_6->state_query_lock = 0;
 VAR_6->state_query_cbfn = ((void*)0);
 VAR_6->state_query_cbarg = ((void*)0);
 VAR_6->media = ((void*)0);
 VAR_6->portspeed = VAR_1;
 VAR_6->is_elb = VAR_0;

 FUNC_0(VAR_6->ioc, VAR_3, VAR_4, VAR_6);
 FUNC_2(&VAR_6->ioc_notify);
 FUNC_1(&VAR_6->ioc_notify, VAR_5, VAR_6);
 FUNC_3(&VAR_6->ioc_notify.qe, &VAR_6->ioc->notify_q);
}
