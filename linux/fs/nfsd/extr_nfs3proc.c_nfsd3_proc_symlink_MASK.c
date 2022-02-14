
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pages; } ;
struct svc_rqst {TYPE_1__ rq_arg; struct nfsd3_diropres* rq_resp; struct nfsd3_symlinkargs* rq_argp; } ;
struct nfsd3_symlinkargs {scalar_t__ tlen; int tname; int flen; int fname; int ffh; int first; } ;
struct nfsd3_diropres {int fh; int dirfh; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct svc_rqst*,int *,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct svc_rqst*,int *,int ,scalar_t__) ;

__attribute__((used)) static __be32
FUNC_12(struct svc_rqst *VAR_4)
{
 struct nfsd3_symlinkargs *VAR_5 = VAR_4->rq_argp;
 struct nfsd3_diropres *VAR_6 = VAR_4->rq_resp;
 __be32 VAR_7;

 if (VAR_5->tlen == 0)
  FUNC_2(VAR_2);
 if (VAR_5->tlen > VAR_1)
  FUNC_2(VAR_3);

 VAR_5->tname = FUNC_11(VAR_4, &VAR_5->first,
      FUNC_10(VAR_4->rq_arg.pages[0]),
      VAR_5->tlen);
 if (FUNC_0(VAR_5->tname))
  FUNC_2(FUNC_9(FUNC_1(VAR_5->tname)));

 FUNC_4("nfsd: SYMLINK(3)  %s %.*s -> %.*s\n",
    FUNC_3(&VAR_5->ffh),
    VAR_5->flen, VAR_5->fname,
    VAR_5->tlen, VAR_5->tname);

 FUNC_5(&VAR_6->dirfh, &VAR_5->ffh);
 FUNC_6(&VAR_6->fh, VAR_0);
 VAR_7 = FUNC_8(VAR_4, &VAR_6->dirfh, VAR_5->fname, VAR_5->flen,
         VAR_5->tname, &VAR_6->fh);
 FUNC_7(VAR_5->tname);
 FUNC_2(VAR_7);
}
