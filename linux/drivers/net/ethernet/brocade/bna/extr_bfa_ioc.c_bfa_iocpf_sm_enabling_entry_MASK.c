
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_iocpf {TYPE_2__* ioc; } ;
struct TYPE_4__ {int bfa; TYPE_1__* cbfn; int iocpf_timer; } ;
struct TYPE_3__ {int (* reset_cbfn ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_iocpf *VAR_2)
{
 FUNC_1(&(VAR_2->ioc)->iocpf_timer, VAR_1 +
  FUNC_2(VAR_0));



 VAR_2->ioc->cbfn->reset_cbfn(VAR_2->ioc->bfa);
 FUNC_0(VAR_2->ioc);
}
