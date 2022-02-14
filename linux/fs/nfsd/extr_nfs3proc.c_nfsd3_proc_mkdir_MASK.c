
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {struct nfsd3_diropres* rq_resp; struct nfsd3_createargs* rq_argp; } ;
struct nfsd3_diropres {int dirfh; int fh; } ;
struct TYPE_2__ {int ia_valid; } ;
struct nfsd3_createargs {TYPE_1__ attrs; int len; int name; int fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct svc_rqst*,int *,int ,int ,TYPE_1__*,int ,int ,int *) ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_3)
{
 struct nfsd3_createargs *VAR_4 = VAR_3->rq_argp;
 struct nfsd3_diropres *VAR_5 = VAR_3->rq_resp;
 __be32 VAR_6;

 FUNC_2("nfsd: MKDIR(3)    %s %.*s\n",
    FUNC_1(&VAR_4->fh),
    VAR_4->len,
    VAR_4->name);

 VAR_4->attrs.ia_valid &= ~VAR_0;
 FUNC_3(&VAR_5->dirfh, &VAR_4->fh);
 FUNC_4(&VAR_5->fh, VAR_1);
 VAR_6 = FUNC_6(VAR_3, &VAR_5->dirfh, VAR_4->name, VAR_4->len,
        &VAR_4->attrs, VAR_2, 0, &VAR_5->fh);
 FUNC_5(&VAR_5->dirfh);
 FUNC_0(VAR_6);
}
