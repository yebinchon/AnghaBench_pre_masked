
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_diropres* rq_resp; struct nfsd3_diropargs* rq_argp; } ;
struct nfsd3_diropres {int fh; int dirfh; } ;
struct nfsd3_diropargs {int len; int name; int fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct svc_rqst*,int *,int ,int ,int *) ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_1)
{
 struct nfsd3_diropargs *VAR_2 = VAR_1->rq_argp;
 struct nfsd3_diropres *VAR_3 = VAR_1->rq_resp;
 __be32 VAR_4;

 FUNC_2("nfsd: LOOKUP(3)   %s %.*s\n",
    FUNC_1(&VAR_2->fh),
    VAR_2->len,
    VAR_2->name);

 FUNC_3(&VAR_3->dirfh, &VAR_2->fh);
 FUNC_4(&VAR_3->fh, VAR_0);

 VAR_4 = FUNC_5(VAR_1, &VAR_3->dirfh,
        VAR_2->name,
        VAR_2->len,
        &VAR_3->fh);
 FUNC_0(VAR_4);
}
