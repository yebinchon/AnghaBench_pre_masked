
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd_attrstat* rq_resp; } ;
struct nfsd_attrstat {int stat; int fh; } ;
typedef int __be32 ;


 int * FUNC_0 (struct svc_rqst*,int *,int *,int *) ;
 int FUNC_1 (struct svc_rqst*,int *) ;

__attribute__((used)) static int FUNC_2(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd_attrstat *VAR_2 = VAR_0->rq_resp;

 VAR_1 = FUNC_0(VAR_0, VAR_1, &VAR_2->fh, &VAR_2->stat);
 return FUNC_1(VAR_0, VAR_1);
}
