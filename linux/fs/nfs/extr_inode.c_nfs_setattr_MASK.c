
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_fattr {int dummy; } ;
struct inode {int i_mode; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* setattr ) (struct dentry*,struct nfs_fattr*,struct iattr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,scalar_t__) ;
 struct nfs_fattr* FUNC_6 () ;
 int FUNC_7 (struct nfs_fattr*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,struct nfs_fattr*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct dentry*,struct nfs_fattr*,struct iattr*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,int) ;

int
FUNC_14(struct dentry *VAR_9, struct iattr *VAR_10)
{
 struct inode *VAR_11 = FUNC_3(VAR_9);
 struct nfs_fattr *VAR_12;
 int VAR_13 = 0;

 FUNC_8(VAR_11, VAR_7);


 if (VAR_10->ia_valid & (VAR_2 | VAR_1))
  VAR_10->ia_valid &= ~VAR_3;

 if (VAR_10->ia_valid & VAR_5) {
  FUNC_0(!FUNC_2(VAR_11->i_mode));

  VAR_13 = FUNC_5(VAR_11, VAR_10->ia_size);
  if (VAR_13)
   return VAR_13;

  if (VAR_10->ia_size == FUNC_4(VAR_11))
   VAR_10->ia_valid &= ~VAR_5;
 }


 VAR_10->ia_valid &= VAR_8;
 if ((VAR_10->ia_valid & ~(VAR_0|VAR_4)) == 0)
  return 0;

 FUNC_12(VAR_11);


 if (FUNC_2(VAR_11->i_mode))
  FUNC_10(VAR_11);

 VAR_12 = FUNC_6();
 if (VAR_12 == ((void*)0)) {
  VAR_13 = -VAR_6;
  goto out;
 }

 VAR_13 = FUNC_1(VAR_11)->setattr(VAR_9, VAR_12, VAR_10);
 if (VAR_13 == 0)
  VAR_13 = FUNC_9(VAR_11, VAR_12);
 FUNC_7(VAR_12);
out:
 FUNC_13(VAR_11, VAR_13);
 return VAR_13;
}
