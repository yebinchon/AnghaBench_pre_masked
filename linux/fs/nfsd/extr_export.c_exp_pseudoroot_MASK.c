
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct svc_export {TYPE_1__ ex_path; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct svc_export*) ;
 int FUNC_1 (struct svc_export*) ;
 int FUNC_2 (struct svc_export*) ;
 int FUNC_3 (struct svc_fh*,struct svc_export*,int ,int *) ;
 int FUNC_4 (int ) ;
 struct svc_export* FUNC_5 (struct svc_rqst*) ;

__be32
FUNC_6(struct svc_rqst *VAR_0, struct svc_fh *VAR_1)
{
 struct svc_export *VAR_2;
 __be32 VAR_3;

 VAR_2 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_4(FUNC_1(VAR_2));
 VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_2->ex_path.dentry, ((void*)0));
 FUNC_2(VAR_2);
 return VAR_3;
}
