
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_op {scalar_t__ opnum; } ;
struct TYPE_2__ {int op_flags; } ;


 TYPE_1__* FUNC_0 (struct nfsd4_op*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_1(struct nfsd4_op *VAR_2)
{
 if (VAR_2->opnum == VAR_1)
  return 0;
 return FUNC_0(VAR_2)->op_flags & VAR_0;
}
