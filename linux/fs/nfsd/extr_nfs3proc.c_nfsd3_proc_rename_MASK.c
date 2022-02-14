
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_renameres* rq_resp; struct nfsd3_renameargs* rq_argp; } ;
struct nfsd3_renameres {int tfh; int ffh; } ;
struct nfsd3_renameargs {int tlen; int tname; int flen; int fname; int tfh; int ffh; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *,int ,int ,int *,int ,int ) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_0)
{
 struct nfsd3_renameargs *VAR_1 = VAR_0->rq_argp;
 struct nfsd3_renameres *VAR_2 = VAR_0->rq_resp;
 __be32 VAR_3;

 FUNC_2("nfsd: RENAME(3)   %s %.*s ->\n",
    FUNC_1(&VAR_1->ffh),
    VAR_1->flen,
    VAR_1->fname);
 FUNC_2("nfsd: -> %s %.*s\n",
    FUNC_1(&VAR_1->tfh),
    VAR_1->tlen,
    VAR_1->tname);

 FUNC_3(&VAR_2->ffh, &VAR_1->ffh);
 FUNC_3(&VAR_2->tfh, &VAR_1->tfh);
 VAR_3 = FUNC_4(VAR_0, &VAR_2->ffh, VAR_1->fname, VAR_1->flen,
        &VAR_2->tfh, VAR_1->tname, VAR_1->tlen);
 FUNC_0(VAR_3);
}
