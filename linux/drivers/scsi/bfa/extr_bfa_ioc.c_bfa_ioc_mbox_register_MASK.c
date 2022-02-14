
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_mbox_mod_s {TYPE_1__* mbhdlr; } ;
struct bfa_ioc_s {struct bfa_ioc_mbox_mod_s mbox_mod; } ;
typedef int bfa_ioc_mbox_mcfunc_t ;
struct TYPE_2__ {int cbfn; } ;


 int VAR_0 ;

void
FUNC_0(struct bfa_ioc_s *VAR_1, bfa_ioc_mbox_mcfunc_t *VAR_2)
{
 struct bfa_ioc_mbox_mod_s *VAR_3 = &VAR_1->mbox_mod;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->mbhdlr[VAR_4].cbfn = VAR_2[VAR_4];
}
