
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd_diropres* rq_resp; struct nfsd_diropargs* rq_argp; } ;
struct nfsd_diropres {int fh; } ;
struct nfsd_diropargs {int fh; int len; int name; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct svc_rqst*,int *,int ,int ,int *) ;
 int FUNC_5 (int ,struct nfsd_diropres*) ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_1)
{
 struct nfsd_diropargs *VAR_2 = VAR_1->rq_argp;
 struct nfsd_diropres *VAR_3 = VAR_1->rq_resp;
 __be32 VAR_4;

 FUNC_1("nfsd: LOOKUP   %s %.*s\n",
  FUNC_0(&VAR_2->fh), VAR_2->len, VAR_2->name);

 FUNC_2(&VAR_3->fh, VAR_0);
 VAR_4 = FUNC_4(VAR_1, &VAR_2->fh, VAR_2->name, VAR_2->len,
     &VAR_3->fh);

 FUNC_3(&VAR_2->fh);
 return FUNC_5(VAR_4, VAR_3);
}
