
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_compound_state {scalar_t__ status; scalar_t__ clp; int session; TYPE_1__* slot; } ;
struct nfsd4_compoundres {struct nfsd4_compound_state cstate; } ;
struct TYPE_2__ {int sl_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfsd4_compound_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfsd4_compoundres*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(struct nfsd4_compoundres *VAR_2)
{
 struct nfsd4_compound_state *VAR_3 = &VAR_2->cstate;

 if (FUNC_0(VAR_3)) {
  if (VAR_3->status != VAR_1) {
   FUNC_2(VAR_2);
   VAR_3->slot->sl_flags &= ~VAR_0;
  }

  FUNC_1(VAR_3->session);
 } else if (VAR_3->clp)
  FUNC_3(VAR_3->clp);
}
