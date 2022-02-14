
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc {int bfa; TYPE_1__* cbfn; } ;
struct TYPE_2__ {int (* hbfail_cbfn ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioc*,int ) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc *VAR_1)
{



 VAR_1->cbfn->hbfail_cbfn(VAR_1->bfa);
 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1);
}
