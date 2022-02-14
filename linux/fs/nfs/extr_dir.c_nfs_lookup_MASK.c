
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct nfs4_label {int d_sb; TYPE_1__ d_name; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; TYPE_1__ d_name; } ;
struct TYPE_7__ {int (* lookup ) (struct inode*,TYPE_1__*,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;} ;
struct TYPE_6__ {scalar_t__ namelen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs4_label* FUNC_0 (struct inode*) ;
 struct nfs4_label* FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct nfs4_label*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_3 (struct inode*) ;
 TYPE_2__* FUNC_4 (struct inode*) ;
 int VAR_6 ;
 struct nfs4_label* FUNC_5 (struct inode*,struct nfs4_label*) ;
 int FUNC_6 (int ,char*,struct nfs4_label*) ;
 struct nfs4_label* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct nfs4_label*) ;
 struct nfs_fattr* FUNC_9 () ;
 struct nfs_fh* FUNC_10 () ;
 struct inode* FUNC_11 (int ,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct nfs_fattr*) ;
 int FUNC_14 (struct nfs_fh*) ;
 int FUNC_15 (struct inode*,int ) ;
 scalar_t__ FUNC_16 (struct inode*,unsigned int) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct nfs4_label*,int ) ;
 int FUNC_19 (struct inode*,TYPE_1__*,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;
 int FUNC_20 (struct inode*,struct nfs4_label*,unsigned int) ;
 int FUNC_21 (struct inode*,struct nfs4_label*,unsigned int,int) ;
 scalar_t__ FUNC_22 (int) ;

struct dentry *FUNC_23(struct inode *VAR_7, struct dentry * VAR_8, unsigned int VAR_9)
{
 struct dentry *VAR_10;
 struct inode *VAR_11 = ((void*)0);
 struct nfs_fh *VAR_12 = ((void*)0);
 struct nfs_fattr *VAR_13 = ((void*)0);
 struct nfs4_label *VAR_14 = ((void*)0);
 int VAR_15;

 FUNC_6(VAR_6, "NFS: lookup(%pd2)\n", VAR_8);
 FUNC_15(VAR_7, VAR_5);

 if (FUNC_22(VAR_8->d_name.len > FUNC_4(VAR_7)->namelen))
  return FUNC_1(-VAR_0);





 if (FUNC_16(VAR_7, VAR_9) || VAR_9 & VAR_4)
  return ((void*)0);

 VAR_10 = FUNC_1(-VAR_2);
 VAR_12 = FUNC_10();
 VAR_13 = FUNC_9();
 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
  goto out;

 VAR_14 = FUNC_7(FUNC_4(VAR_7), VAR_3);
 if (FUNC_2(VAR_14))
  goto out;

 FUNC_20(VAR_7, VAR_8, VAR_9);
 VAR_15 = FUNC_3(VAR_7)->lookup(VAR_7, &VAR_8->d_name, VAR_12, VAR_13, VAR_14);
 if (VAR_15 == -VAR_1)
  goto no_entry;
 if (VAR_15 < 0) {
  VAR_10 = FUNC_1(VAR_15);
  goto out_label;
 }
 VAR_11 = FUNC_11(VAR_8->d_sb, VAR_12, VAR_13, VAR_14);
 VAR_10 = FUNC_0(VAR_11);
 if (FUNC_2(VAR_10))
  goto out_label;


 FUNC_12(VAR_7);

no_entry:
 VAR_10 = FUNC_5(VAR_11, VAR_8);
 if (VAR_10 != ((void*)0)) {
  if (FUNC_2(VAR_10))
   goto out_label;
  VAR_8 = VAR_10;
 }
 FUNC_18(VAR_8, FUNC_17(VAR_7));
out_label:
 FUNC_21(VAR_7, VAR_8, VAR_9, VAR_15);
 FUNC_8(VAR_14);
out:
 FUNC_13(VAR_13);
 FUNC_14(VAR_12);
 return VAR_10;
}
