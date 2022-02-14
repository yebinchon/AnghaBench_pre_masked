
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {struct dentry* fh_dentry; } ;
struct inode {int i_mode; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct svc_fh*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct svc_fh*) ;
 int FUNC_7 (struct svc_fh*,int ) ;
 scalar_t__ FUNC_8 (struct svc_rqst*,struct svc_fh*,int,int ) ;
 int FUNC_9 (struct svc_fh*) ;
 scalar_t__ FUNC_10 (char*,int) ;
 struct dentry* FUNC_11 (char*,struct dentry*,int) ;
 int FUNC_12 (struct dentry*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct inode*,struct dentry*) ;
 int FUNC_15 (struct inode*,struct dentry*,int *) ;

__be32
FUNC_16(struct svc_rqst *VAR_6, struct svc_fh *VAR_7, int VAR_8,
    char *VAR_9, int VAR_10)
{
 struct dentry *VAR_11, *VAR_12;
 struct inode *VAR_13;
 __be32 VAR_14;
 int VAR_15;

 VAR_14 = VAR_5;
 if (!VAR_10 || FUNC_10(VAR_9, VAR_10))
  goto out;
 VAR_14 = FUNC_8(VAR_6, VAR_7, VAR_3, VAR_2);
 if (VAR_14)
  goto out;

 VAR_15 = FUNC_9(VAR_7);
 if (VAR_15)
  goto out_nfserr;

 FUNC_7(VAR_7, VAR_1);
 VAR_11 = VAR_7->fh_dentry;
 VAR_13 = FUNC_3(VAR_11);

 VAR_12 = FUNC_11(VAR_9, VAR_11, VAR_10);
 VAR_15 = FUNC_1(VAR_12);
 if (FUNC_0(VAR_12))
  goto out_drop_write;

 if (FUNC_4(VAR_12)) {
  FUNC_5(VAR_12);
  VAR_15 = -VAR_0;
  goto out_drop_write;
 }

 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_12)->i_mode & VAR_4;

 if (VAR_8 != VAR_3) {
  FUNC_12(VAR_12);
  VAR_15 = FUNC_15(VAR_13, VAR_12, ((void*)0));
 } else {
  VAR_15 = FUNC_14(VAR_13, VAR_12);
 }

 if (!VAR_15)
  VAR_15 = FUNC_2(VAR_7);
 FUNC_5(VAR_12);

out_drop_write:
 FUNC_6(VAR_7);
out_nfserr:
 VAR_14 = FUNC_13(VAR_15);
out:
 return VAR_14;
}
