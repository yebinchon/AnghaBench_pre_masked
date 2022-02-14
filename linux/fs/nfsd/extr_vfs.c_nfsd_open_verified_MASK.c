
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct file {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*,struct svc_fh*,int ,int,struct file**) ;
 int FUNC_1 () ;

__be32
FUNC_2(struct svc_rqst *VAR_0, struct svc_fh *VAR_1, umode_t VAR_2,
  int VAR_3, struct file **VAR_4)
{
 __be32 VAR_5;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1();
 return VAR_5;
}
