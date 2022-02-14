
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {struct dentry* fh_dentry; } ;
struct posix_acl {int dummy; } ;
struct nfs4_acl {int dummy; } ;
struct inode {int i_mode; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct svc_fh*) ;
 int FUNC_3 (struct svc_fh*) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,struct svc_fh*,int ,int ) ;
 int FUNC_5 (struct nfs4_acl*,struct posix_acl**,struct posix_acl**,unsigned int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct posix_acl*) ;
 int FUNC_8 (struct inode*,int ,struct posix_acl*) ;

__be32
FUNC_9(struct svc_rqst *VAR_7, struct svc_fh *VAR_8,
  struct nfs4_acl *VAR_9)
{
 __be32 VAR_10;
 int VAR_11;
 struct dentry *VAR_12;
 struct inode *VAR_13;
 struct posix_acl *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 unsigned int VAR_16 = 0;


 VAR_10 = FUNC_4(VAR_7, VAR_8, 0, VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_12 = VAR_8->fh_dentry;
 VAR_13 = FUNC_1(VAR_12);

 if (FUNC_0(VAR_13->i_mode))
  VAR_16 = VAR_4;

 VAR_11 = FUNC_5(VAR_9, &VAR_14, &VAR_15, VAR_16);
 if (VAR_11 == -VAR_2)
  return VAR_6;
 if (VAR_11 < 0)
  goto out_nfserr;

 FUNC_2(VAR_8);

 VAR_11 = FUNC_8(VAR_13, VAR_0, VAR_14);
 if (VAR_11 < 0)
  goto out_drop_lock;

 if (FUNC_0(VAR_13->i_mode)) {
  VAR_11 = FUNC_8(VAR_13, VAR_1, VAR_15);
 }

out_drop_lock:
 FUNC_3(VAR_8);

 FUNC_7(VAR_14);
 FUNC_7(VAR_15);
out_nfserr:
 if (VAR_11 == -VAR_3)
  return VAR_6;
 else
  return FUNC_6(VAR_11);
}
