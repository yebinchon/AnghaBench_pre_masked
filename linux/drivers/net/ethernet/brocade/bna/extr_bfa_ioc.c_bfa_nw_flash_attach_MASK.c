
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc {int notify_q; } ;
struct TYPE_2__ {int qe; } ;
struct bfa_flash {struct bfa_ioc* ioc; TYPE_1__ ioc_notify; scalar_t__ op_busy; int * cbarg; int * cbfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,struct bfa_flash*) ;
 int FUNC_1 (struct bfa_ioc*,int ,int ,struct bfa_flash*) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(struct bfa_flash *VAR_3, struct bfa_ioc *VAR_4, void *VAR_5)
{
 VAR_3->ioc = VAR_4;
 VAR_3->cbfn = ((void*)0);
 VAR_3->cbarg = ((void*)0);
 VAR_3->op_busy = 0;

 FUNC_1(VAR_3->ioc, VAR_0, VAR_1, VAR_3);
 FUNC_0(&VAR_3->ioc_notify, VAR_2, VAR_3);
 FUNC_2(&VAR_3->ioc_notify.qe, &VAR_3->ioc->notify_q);
}
