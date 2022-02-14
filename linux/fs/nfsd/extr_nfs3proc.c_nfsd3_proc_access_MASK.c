
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_accessres* rq_resp; struct nfsd3_accessargs* rq_argp; } ;
struct nfsd3_accessres {int access; int fh; } ;
struct nfsd3_accessargs {int access; int fh; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *,int *,int *) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_0)
{
 struct nfsd3_accessargs *VAR_1 = VAR_0->rq_argp;
 struct nfsd3_accessres *VAR_2 = VAR_0->rq_resp;
 __be32 VAR_3;

 FUNC_2("nfsd: ACCESS(3)   %s 0x%x\n",
    FUNC_1(&VAR_1->fh),
    VAR_1->access);

 FUNC_3(&VAR_2->fh, &VAR_1->fh);
 VAR_2->access = VAR_1->access;
 VAR_3 = FUNC_4(VAR_0, &VAR_2->fh, &VAR_2->access, ((void*)0));
 FUNC_0(VAR_3);
}
