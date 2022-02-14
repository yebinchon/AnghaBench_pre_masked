
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_cbfn {int dummy; } ;
struct TYPE_2__ {struct bfa_ioc* ioc; } ;
struct bfa_ioc {int fcmode; int pllinit; int dbg_fwsave_once; int notify_q; TYPE_1__ iocpf; struct bfa_ioc_cbfn* cbfn; void* bfa; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct bfa_ioc*,int ) ;
 int FUNC_2 (struct bfa_ioc*,int ) ;
 int FUNC_3 (struct bfa_ioc*) ;
 int VAR_1 ;

void
FUNC_4(struct bfa_ioc *VAR_2, void *VAR_3, struct bfa_ioc_cbfn *VAR_4)
{
 VAR_2->bfa = VAR_3;
 VAR_2->cbfn = VAR_4;
 VAR_2->fcmode = 0;
 VAR_2->pllinit = 0;
 VAR_2->dbg_fwsave_once = 1;
 VAR_2->iocpf.ioc = VAR_2;

 FUNC_3(VAR_2);
 FUNC_0(&VAR_2->notify_q);

 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);
}
