
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {int (* lookup ) (struct inode*,int *,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nfs4_label*) ;
 int FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct nfs4_label* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nfs4_label*) ;
 struct nfs_fattr* FUNC_6 () ;
 struct nfs_fh* FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,struct nfs_fh*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct nfs_fattr*) ;
 int FUNC_11 (struct nfs_fh*) ;
 int FUNC_12 (struct inode*,struct dentry*,struct inode*,int) ;
 scalar_t__ FUNC_13 (struct inode*,struct nfs_fattr*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct dentry*,int ) ;
 int FUNC_16 (struct inode*,struct nfs_fattr*,struct nfs4_label*) ;
 int FUNC_17 (struct inode*,int *,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;

__attribute__((used)) static int
FUNC_18(struct inode *VAR_4, struct dentry *VAR_5,
        struct inode *VAR_6)
{
 struct nfs_fh *VAR_7;
 struct nfs_fattr *VAR_8;
 struct nfs4_label *VAR_9;
 int VAR_10;

 VAR_10 = -VAR_1;
 VAR_7 = FUNC_7();
 VAR_8 = FUNC_6();
 VAR_9 = FUNC_4(FUNC_3(VAR_6), VAR_3);
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || FUNC_0(VAR_9))
  goto out;

 VAR_10 = FUNC_2(VAR_4)->lookup(VAR_4, &VAR_5->d_name, VAR_7, VAR_8, VAR_9);
 if (VAR_10 < 0) {
  if (VAR_10 == -VAR_2 || VAR_10 == -VAR_0)
   VAR_10 = 0;
  goto out;
 }
 VAR_10 = 0;
 if (FUNC_8(FUNC_1(VAR_6), VAR_7))
  goto out;
 if (FUNC_13(VAR_6, VAR_8) < 0)
  goto out;

 FUNC_16(VAR_6, VAR_8, VAR_9);
 FUNC_15(VAR_5, FUNC_14(VAR_4));


 FUNC_9(VAR_4);
 VAR_10 = 1;
out:
 FUNC_10(VAR_8);
 FUNC_11(VAR_7);
 FUNC_5(VAR_9);
 return FUNC_12(VAR_4, VAR_5, VAR_6, VAR_10);
}
