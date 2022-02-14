
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*,scalar_t__,int,struct file**) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,struct svc_fh*,scalar_t__,int) ;
 int FUNC_2 () ;

__be32
FUNC_3(struct svc_rqst *VAR_2, struct svc_fh *VAR_3, umode_t VAR_4,
  int VAR_5, struct file **VAR_6)
{
 __be32 VAR_7;

 FUNC_2();
 if (VAR_4 == VAR_1)
  VAR_5 |= VAR_0;
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2();
 return VAR_7;
}
