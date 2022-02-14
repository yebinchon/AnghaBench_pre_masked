
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {struct nfsd3_attrstat* rq_resp; } ;
struct TYPE_4__ {int mtime; } ;
struct TYPE_3__ {int fh_dentry; } ;
struct nfsd3_attrstat {scalar_t__ status; TYPE_2__ stat; TYPE_1__ fh; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (struct svc_rqst*,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct svc_rqst*,int *) ;

int
FUNC_4(struct svc_rqst *VAR_0, __be32 *VAR_1)
{
 struct nfsd3_attrstat *VAR_2 = VAR_0->rq_resp;

 if (VAR_2->status == 0) {
  FUNC_2(FUNC_0(VAR_2->fh.fh_dentry),
    &VAR_2->stat.mtime);
  VAR_1 = FUNC_1(VAR_0, VAR_1, &VAR_2->fh, &VAR_2->stat);
 }
 return FUNC_3(VAR_0, VAR_1);
}
