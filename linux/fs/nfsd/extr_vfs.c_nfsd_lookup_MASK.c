
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct svc_export {int dummy; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_export*,struct svc_rqst*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct svc_export*) ;
 scalar_t__ FUNC_4 (struct svc_fh*,struct svc_export*,struct dentry*,struct svc_fh*) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 scalar_t__ FUNC_6 (struct svc_rqst*,struct svc_fh*,char const*,unsigned int,struct svc_export**,struct dentry**) ;
 scalar_t__ VAR_2 ;

__be32
FUNC_7(struct svc_rqst *VAR_3, struct svc_fh *VAR_4, const char *VAR_5,
    unsigned int VAR_6, struct svc_fh *VAR_7)
{
 struct svc_export *VAR_8;
 struct dentry *VAR_9;
 __be32 VAR_10;

 VAR_10 = FUNC_5(VAR_3, VAR_4, VAR_1, VAR_0);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_8, VAR_3);
 if (VAR_10)
  goto out;




 VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_4);
 if (!VAR_10 && FUNC_1(VAR_9))
  VAR_10 = VAR_2;
out:
 FUNC_2(VAR_9);
 FUNC_3(VAR_8);
 return VAR_10;
}
