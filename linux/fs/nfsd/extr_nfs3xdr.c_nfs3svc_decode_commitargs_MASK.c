
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_commitargs* rq_argp; } ;
struct nfsd3_commitargs {int count; int offset; int fh; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct svc_rqst*,int *) ;
 int * FUNC_3 (int *,int *) ;

int
FUNC_4(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd3_commitargs *VAR_2 = VAR_0->rq_argp;
 VAR_1 = FUNC_0(VAR_1, &VAR_2->fh);
 if (!VAR_1)
  return 0;
 VAR_1 = FUNC_3(VAR_1, &VAR_2->offset);
 VAR_2->count = FUNC_1(*VAR_1++);

 return FUNC_2(VAR_0, VAR_1);
}
