
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_op {scalar_t__ status; size_t opnum; } ;
struct nfsd4_compoundargs {scalar_t__ minorversion; int opcnt; struct nfsd4_op* ops; } ;
typedef int __be32 ;
struct TYPE_2__ {int op_flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static __be32 FUNC_0(struct nfsd4_compoundargs *VAR_7)
{
 struct nfsd4_op *VAR_8 = &VAR_7->ops[0];


 if (VAR_7->minorversion == 0)
  return VAR_2;

 if (VAR_7->opcnt == 0)
  return VAR_2;
 if (VAR_8->status == VAR_5)
  return VAR_2;
 if (!(VAR_3[VAR_8->opnum].op_flags & VAR_0))
  return VAR_6;
 if (VAR_8->opnum == VAR_1)
  return VAR_2;





 if (VAR_7->opcnt != 1)
  return VAR_4;
 return VAR_2;
}
