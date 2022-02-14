
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_mbox_mod {TYPE_1__* mbhdlr; } ;
struct bfa_ioc {struct bfa_ioc_mbox_mod mbox_mod; } ;
typedef enum bfi_mclass { ____Placeholder_bfi_mclass } bfi_mclass ;
typedef int bfa_ioc_mbox_mcfunc_t ;
struct TYPE_2__ {void* cbarg; int cbfn; } ;



void
FUNC_0(struct bfa_ioc *VAR_0, enum bfi_mclass VAR_1,
      bfa_ioc_mbox_mcfunc_t VAR_2, void *VAR_3)
{
 struct bfa_ioc_mbox_mod *VAR_4 = &VAR_0->mbox_mod;

 VAR_4->mbhdlr[VAR_1].cbfn = VAR_2;
 VAR_4->mbhdlr[VAR_1].cbarg = VAR_3;
}
