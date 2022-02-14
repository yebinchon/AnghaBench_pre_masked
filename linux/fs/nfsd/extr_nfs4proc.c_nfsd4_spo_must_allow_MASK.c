
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {struct nfsd4_compoundargs* rq_argp; struct nfsd4_compoundres* rq_resp; } ;
struct nfsd4_op {int opnum; } ;
struct nfsd4_compound_state {int spo_must_allowed; TYPE_2__* clp; int minorversion; } ;
struct nfsd4_compoundres {int opcnt; struct nfsd4_compound_state cstate; } ;
struct nfsd4_compoundargs {int opcnt; struct nfsd4_op* ops; } ;
struct TYPE_3__ {int longs; } ;
struct nfs4_op_map {TYPE_1__ u; } ;
struct TYPE_4__ {scalar_t__ cl_mach_cred; struct nfs4_op_map cl_spo_must_allow; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,struct svc_rqst*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool FUNC_2(struct svc_rqst *VAR_0)
{
 struct nfsd4_compoundres *VAR_1 = VAR_0->rq_resp;
 struct nfsd4_compoundargs *VAR_2 = VAR_0->rq_argp;
 struct nfsd4_op *VAR_3 = &VAR_2->ops[VAR_1->opcnt - 1];
 struct nfsd4_compound_state *VAR_4 = &VAR_1->cstate;
 struct nfs4_op_map *VAR_5 = &VAR_4->clp->cl_spo_must_allow;
 u32 VAR_6;

 if (!VAR_4->minorversion)
  return 0;

 if (VAR_4->spo_must_allowed == 1)
  return 1;

 VAR_6 = VAR_1->opcnt;
 while (VAR_6 < VAR_2->opcnt) {
  VAR_3 = &VAR_2->ops[VAR_6++];
  if (FUNC_1(VAR_3->opnum, VAR_5->u.longs) &&
   VAR_4->clp->cl_mach_cred &&
   FUNC_0(VAR_4->clp, VAR_0)) {
   VAR_4->spo_must_allowed = 1;
   return 1;
  }
 }
 VAR_4->spo_must_allowed = 0;
 return 0;
}
