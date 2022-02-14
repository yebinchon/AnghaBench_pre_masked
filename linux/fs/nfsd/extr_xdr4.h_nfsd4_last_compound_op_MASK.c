
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd4_compoundargs* rq_argp; struct nfsd4_compoundres* rq_resp; } ;
struct nfsd4_compoundres {scalar_t__ opcnt; } ;
struct nfsd4_compoundargs {scalar_t__ opcnt; } ;



__attribute__((used)) static inline bool FUNC_0(struct svc_rqst *VAR_0)
{
 struct nfsd4_compoundres *VAR_1 = VAR_0->rq_resp;
 struct nfsd4_compoundargs *VAR_2 = VAR_0->rq_argp;

 return VAR_2->opcnt == VAR_1->opcnt;
}
