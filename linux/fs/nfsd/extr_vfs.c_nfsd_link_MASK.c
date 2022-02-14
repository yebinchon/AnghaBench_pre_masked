
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_vers; } ;
struct svc_fh {struct dentry* fh_dentry; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_2 (struct svc_fh*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct svc_fh*) ;
 int FUNC_8 (struct svc_fh*,int ) ;
 int FUNC_9 (struct svc_fh*) ;
 scalar_t__ FUNC_10 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_11 (struct svc_fh*) ;
 scalar_t__ FUNC_12 (char*,int) ;
 struct dentry* FUNC_13 (char*,struct dentry*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct dentry*,struct inode*,struct dentry*,int *) ;

__be32
FUNC_16(struct svc_rqst *VAR_10, struct svc_fh *VAR_11,
    char *VAR_12, int VAR_13, struct svc_fh *VAR_14)
{
 struct dentry *VAR_15, *VAR_16, *VAR_17;
 struct inode *VAR_18;
 __be32 VAR_19;
 int VAR_20;

 VAR_19 = FUNC_10(VAR_10, VAR_11, VAR_4, VAR_2);
 if (VAR_19)
  goto out;
 VAR_19 = FUNC_10(VAR_10, VAR_14, 0, VAR_3);
 if (VAR_19)
  goto out;
 VAR_19 = VAR_7;
 if (FUNC_4(VAR_14->fh_dentry))
  goto out;
 VAR_19 = VAR_9;
 if (!VAR_13)
  goto out;
 VAR_19 = VAR_6;
 if (FUNC_12(VAR_12, VAR_13))
  goto out;

 VAR_20 = FUNC_11(VAR_14);
 if (VAR_20) {
  VAR_19 = FUNC_14(VAR_20);
  goto out;
 }

 FUNC_8(VAR_11, VAR_1);
 VAR_15 = VAR_11->fh_dentry;
 VAR_18 = FUNC_3(VAR_15);

 VAR_16 = FUNC_13(VAR_12, VAR_15, VAR_13);
 VAR_20 = FUNC_1(VAR_16);
 if (FUNC_0(VAR_16))
  goto out_nfserr;

 VAR_17 = VAR_14->fh_dentry;

 VAR_19 = VAR_8;
 if (FUNC_5(VAR_17))
  goto out_dput;
 VAR_20 = FUNC_15(VAR_17, VAR_18, VAR_16, ((void*)0));
 if (!VAR_20) {
  VAR_19 = FUNC_14(FUNC_2(VAR_11));
  if (!VAR_19)
   VAR_19 = FUNC_14(FUNC_2(VAR_14));
 } else {
  if (VAR_20 == -VAR_0 && VAR_10->rq_vers == 2)
   VAR_19 = VAR_5;
  else
   VAR_19 = FUNC_14(VAR_20);
 }
out_dput:
 FUNC_6(VAR_16);
out_unlock:
 FUNC_9(VAR_11);
 FUNC_7(VAR_14);
out:
 return VAR_19;

out_nfserr:
 VAR_19 = FUNC_14(VAR_20);
 goto out_unlock;
}
