
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_attrstat* rq_resp; struct nfsd_fhandle* rq_argp; } ;
struct nfsd_fhandle {int fh; } ;
struct nfsd3_attrstat {int stat; int fh; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,int *,int ,int) ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_2)
{
 struct nfsd_fhandle *VAR_3 = VAR_2->rq_argp;
 struct nfsd3_attrstat *VAR_4 = VAR_2->rq_resp;
 __be32 VAR_5;

 FUNC_2("nfsd: GETATTR(3)  %s\n",
  FUNC_1(&VAR_3->fh));

 FUNC_3(&VAR_4->fh, &VAR_3->fh);
 VAR_5 = FUNC_5(VAR_2, &VAR_4->fh, 0,
   VAR_1 | VAR_0);
 if (VAR_5)
  FUNC_0(VAR_5);

 VAR_5 = FUNC_4(&VAR_4->fh, &VAR_4->stat);

 FUNC_0(VAR_5);
}
