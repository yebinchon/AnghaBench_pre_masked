
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {scalar_t__ fh_dentry; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*) ;
 int FUNC_1 (struct svc_fh*,int ) ;
 int FUNC_2 (struct svc_fh*) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct svc_fh*,char*,int,struct svc_fh*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32 FUNC_4(struct svc_rqst *VAR_2, struct svc_fh *VAR_3)
{
 struct svc_fh VAR_4;
 __be32 VAR_5;

 FUNC_1(&VAR_4, VAR_0);
 VAR_5 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;
 if (VAR_4.fh_dentry == VAR_3->fh_dentry) {
  FUNC_2(&VAR_4);
  return VAR_1;
 }
 FUNC_2(&VAR_4);
 return FUNC_3(VAR_2, VAR_3, "..", 2, VAR_3);
}
