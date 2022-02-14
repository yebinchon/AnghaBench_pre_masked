
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_commitres* rq_resp; } ;
struct nfsd_net {int dummy; } ;
struct nfsd3_commitres {scalar_t__ status; int fh; } ;
typedef void* __be32 ;


 int FUNC_0 (struct svc_rqst*) ;
 void** FUNC_1 (struct svc_rqst*,void**,int *) ;
 struct nfsd_net* FUNC_2 (int ,int ) ;
 int FUNC_3 (void**,struct nfsd_net*) ;
 int VAR_0 ;
 int FUNC_4 (struct svc_rqst*,void**) ;

int
FUNC_5(struct svc_rqst *VAR_1, __be32 *VAR_2)
{
 struct nfsd3_commitres *VAR_3 = VAR_1->rq_resp;
 struct nfsd_net *VAR_4 = FUNC_2(FUNC_0(VAR_1), VAR_0);
 __be32 VAR_5[2];

 VAR_2 = FUNC_1(VAR_1, VAR_2, &VAR_3->fh);

 if (VAR_3->status == 0) {

  FUNC_3(VAR_5, VAR_4);
  *VAR_2++ = VAR_5[0];
  *VAR_2++ = VAR_5[1];
 }
 return FUNC_4(VAR_1, VAR_2);
}
