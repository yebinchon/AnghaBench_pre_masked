
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd4_compoundargs* rq_argp; struct nfsd4_compoundres* rq_resp; } ;
struct nfsd4_operation {int op_flags; } ;
struct nfsd4_op {scalar_t__ opnum; } ;
struct nfsd4_compoundres {int opcnt; } ;
struct nfsd4_compoundargs {size_t opcnt; struct nfsd4_op* ops; } ;


 struct nfsd4_operation* FUNC_0 (struct nfsd4_op*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct svc_rqst *VAR_3)
{
 struct nfsd4_compoundres *VAR_4 = VAR_3->rq_resp;
 struct nfsd4_compoundargs *VAR_5 = VAR_3->rq_argp;
 struct nfsd4_op *VAR_6 = &VAR_5->ops[VAR_4->opcnt - 1];
 struct nfsd4_op *VAR_7 = &VAR_5->ops[VAR_4->opcnt];
 const struct nfsd4_operation *VAR_8 = FUNC_0(VAR_6);
 const struct nfsd4_operation *VAR_9;





 if (!(VAR_8->op_flags & VAR_2))
  return 0;





 if (VAR_5->opcnt == VAR_4->opcnt)
  return 0;
 if (VAR_7->opnum == VAR_1)
  return 0;
 VAR_9 = FUNC_0(VAR_7);





 return !(VAR_9->op_flags & VAR_0);
}
