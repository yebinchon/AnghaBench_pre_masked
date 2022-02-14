
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pages; } ;
struct svc_rqst {TYPE_1__ rq_arg; struct nfsd_symlinkargs* rq_argp; } ;
struct svc_fh {int dummy; } ;
struct nfsd_symlinkargs {scalar_t__ tlen; struct svc_fh ffh; int tname; int flen; int fname; int first; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct svc_fh*) ;
 int FUNC_3 (char*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (struct svc_fh*,int ) ;
 int FUNC_5 (struct svc_fh*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct svc_rqst*,struct svc_fh*,int ,int ,int ,struct svc_fh*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct svc_rqst*,int *,int ,scalar_t__) ;

__attribute__((used)) static __be32
FUNC_11(struct svc_rqst *VAR_3)
{
 struct nfsd_symlinkargs *VAR_4 = VAR_3->rq_argp;
 struct svc_fh VAR_5;
 __be32 VAR_6;

 if (VAR_4->tlen > VAR_1)
  return VAR_2;

 VAR_4->tname = FUNC_10(VAR_3, &VAR_4->first,
      FUNC_9(VAR_3->rq_arg.pages[0]),
      VAR_4->tlen);
 if (FUNC_0(VAR_4->tname))
  return FUNC_8(FUNC_1(VAR_4->tname));

 FUNC_3("nfsd: SYMLINK  %s %.*s -> %.*s\n",
  FUNC_2(&VAR_4->ffh), VAR_4->flen, VAR_4->fname,
  VAR_4->tlen, VAR_4->tname);

 FUNC_4(&VAR_5, VAR_0);
 VAR_6 = FUNC_7(VAR_3, &VAR_4->ffh, VAR_4->fname, VAR_4->flen,
       VAR_4->tname, &VAR_5);

 FUNC_6(VAR_4->tname);
 FUNC_5(&VAR_4->ffh);
 FUNC_5(&VAR_5);
 return VAR_6;
}
