
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd_attrstat* rq_resp; struct nfsd_fhandle* rq_argp; } ;
struct nfsd_fhandle {int fh; } ;
struct nfsd_attrstat {int stat; int fh; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,int *,int ,int ) ;

__attribute__((used)) static __be32 FUNC_5(struct svc_rqst *VAR_1)
{
 struct nfsd_fhandle *VAR_2 = VAR_1->rq_argp;
 struct nfsd_attrstat *VAR_3 = VAR_1->rq_resp;
 __be32 VAR_4;
 FUNC_1("nfsd: GETATTR  %s\n", FUNC_0(&VAR_2->fh));

 FUNC_2(&VAR_3->fh, &VAR_2->fh);
 VAR_4 = FUNC_4(VAR_1, &VAR_3->fh, 0, VAR_0);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_3(&VAR_3->fh, &VAR_3->stat);
 return VAR_4;
}
