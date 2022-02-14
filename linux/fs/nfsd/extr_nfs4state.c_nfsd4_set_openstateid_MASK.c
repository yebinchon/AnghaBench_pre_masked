
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op_stateid; } ;
union nfsd4_op_u {TYPE_1__ open; } ;
struct nfsd4_compound_state {int dummy; } ;


 int FUNC_0 (struct nfsd4_compound_state*,int *) ;

void
FUNC_1(struct nfsd4_compound_state *VAR_0,
  union nfsd4_op_u *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->open.op_stateid);
}
