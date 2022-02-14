
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_diropres* rq_resp; } ;
struct nfsd3_diropres {scalar_t__ status; int dirfh; int fh; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (struct svc_rqst*,int *,int *) ;
 int * FUNC_2 (struct svc_rqst*,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct svc_rqst*,int *) ;

int
FUNC_4(struct svc_rqst *VAR_1, __be32 *VAR_2)
{
 struct nfsd3_diropres *VAR_3 = VAR_1->rq_resp;

 if (VAR_3->status == 0) {
  *VAR_2++ = VAR_0;
  VAR_2 = FUNC_0(VAR_2, &VAR_3->fh);
  VAR_2 = FUNC_1(VAR_1, VAR_2, &VAR_3->fh);
 }
 VAR_2 = FUNC_2(VAR_1, VAR_2, &VAR_3->dirfh);
 return FUNC_3(VAR_1, VAR_2);
}
