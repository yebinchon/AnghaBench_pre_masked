
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_slot {int sl_flags; } ;
struct nfsd4_op {int status; } ;
struct TYPE_2__ {struct nfsd4_slot* slot; } ;
struct nfsd4_compoundres {int opcnt; TYPE_1__ cstate; } ;
struct nfsd4_compoundargs {int opcnt; struct nfsd4_op* ops; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct nfsd4_compoundres*,struct nfsd4_op*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_1(struct nfsd4_compoundargs *VAR_3,
     struct nfsd4_compoundres *VAR_4)
{
 struct nfsd4_op *VAR_5;
 struct nfsd4_slot *VAR_6 = VAR_4->cstate.slot;


 VAR_5 = &VAR_3->ops[VAR_4->opcnt - 1];
 FUNC_0(VAR_4, VAR_5);

 if (VAR_6->sl_flags & VAR_0)
  return VAR_5->status;
 if (VAR_3->opcnt == 1) {





  VAR_5->status = VAR_2;
 } else {
  VAR_5 = &VAR_3->ops[VAR_4->opcnt++];
  VAR_5->status = VAR_1;
  FUNC_0(VAR_4, VAR_5);
 }
 return VAR_5->status;
}
