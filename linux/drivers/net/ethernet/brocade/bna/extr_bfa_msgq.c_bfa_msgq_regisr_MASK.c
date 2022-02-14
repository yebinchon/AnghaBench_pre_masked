
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rsphdlr; } ;
struct bfa_msgq {TYPE_2__ rspq; } ;
typedef enum bfi_mclass { ____Placeholder_bfi_mclass } bfi_mclass ;
typedef int bfa_msgq_mcfunc_t ;
struct TYPE_3__ {void* cbarg; int cbfn; } ;



void
FUNC_0(struct bfa_msgq *VAR_0, enum bfi_mclass VAR_1,
  bfa_msgq_mcfunc_t VAR_2, void *VAR_3)
{
 VAR_0->rspq.rsphdlr[VAR_1].cbfn = VAR_2;
 VAR_0->rspq.rsphdlr[VAR_1].cbarg = VAR_3;
}
