
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_commitres* rq_resp; struct nfsd3_commitargs* rq_argp; } ;
struct nfsd3_commitres {int fh; } ;
struct nfsd3_commitargs {scalar_t__ offset; int count; int fh; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,unsigned long long) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *,scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_2)
{
 struct nfsd3_commitargs *VAR_3 = VAR_2->rq_argp;
 struct nfsd3_commitres *VAR_4 = VAR_2->rq_resp;
 __be32 VAR_5;

 FUNC_2("nfsd: COMMIT(3)   %s %u@%Lu\n",
    FUNC_1(&VAR_3->fh),
    VAR_3->count,
    (unsigned long long) VAR_3->offset);

 if (VAR_3->offset > VAR_0)
  FUNC_0(VAR_1);

 FUNC_3(&VAR_4->fh, &VAR_3->fh);
 VAR_5 = FUNC_4(VAR_2, &VAR_4->fh, VAR_3->offset, VAR_3->count);

 FUNC_0(VAR_5);
}
