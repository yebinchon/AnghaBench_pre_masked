
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_export; struct dentry* fh_dentry; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct svc_fh*,int ,struct dentry*,struct svc_fh*) ;
 int FUNC_4 (struct svc_fh*,int ) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_6 (struct svc_fh*) ;
 scalar_t__ FUNC_7 (char*,int) ;
 struct dentry* FUNC_8 (char*,struct dentry*,int) ;
 scalar_t__ FUNC_9 (struct svc_rqst*,struct svc_fh*,char*,int,struct iattr*,int,int ,struct svc_fh*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_10 (int) ;

__be32
FUNC_11(struct svc_rqst *VAR_4, struct svc_fh *VAR_5,
  char *VAR_6, int VAR_7, struct iattr *VAR_8,
  int VAR_9, dev_t VAR_10, struct svc_fh *VAR_11)
{
 struct dentry *VAR_12, *VAR_13 = ((void*)0);
 __be32 VAR_14;
 int VAR_15;

 if (FUNC_7(VAR_6, VAR_7))
  return VAR_3;

 VAR_14 = FUNC_5(VAR_4, VAR_5, VAR_2, VAR_1);
 if (VAR_14)
  return VAR_14;

 VAR_12 = VAR_5->fh_dentry;

 VAR_15 = FUNC_6(VAR_5);
 if (VAR_15)
  return FUNC_10(VAR_15);

 FUNC_4(VAR_5, VAR_0);
 VAR_13 = FUNC_8(VAR_6, VAR_12, VAR_7);
 VAR_15 = FUNC_1(VAR_13);
 if (FUNC_0(VAR_13))
  return FUNC_10(VAR_15);
 VAR_14 = FUNC_3(VAR_11, VAR_5->fh_export, VAR_13, VAR_5);




 FUNC_2(VAR_13);
 if (VAR_14)
  return VAR_14;
 return FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11);
}
