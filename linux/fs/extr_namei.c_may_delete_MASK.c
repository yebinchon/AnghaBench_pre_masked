
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_gid; int i_uid; } ;
struct dentry {int d_flags; TYPE_1__* d_parent; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct inode*,struct dentry*,int ) ;
 scalar_t__ FUNC_8 (struct inode*,struct inode*) ;
 struct inode* FUNC_9 (struct dentry*) ;
 scalar_t__ FUNC_10 (struct dentry*) ;
 scalar_t__ FUNC_11 (struct dentry*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_10, struct dentry *VAR_11, bool VAR_12)
{
 struct inode *VAR_13 = FUNC_9(VAR_11);
 int VAR_14;

 if (FUNC_11(VAR_11))
  return -VAR_4;
 FUNC_0(!VAR_13);

 FUNC_0(VAR_11->d_parent->d_inode != VAR_10);


 if (!FUNC_14(VAR_13->i_uid) || !FUNC_12(VAR_13->i_gid))
  return -VAR_6;

 FUNC_7(VAR_10, VAR_11, VAR_0);

 VAR_14 = FUNC_13(VAR_10, VAR_9 | VAR_8);
 if (VAR_14)
  return VAR_14;
 if (FUNC_2(VAR_10))
  return -VAR_7;

 if (FUNC_8(VAR_10, VAR_13) || FUNC_2(VAR_13) ||
     FUNC_4(VAR_13) || FUNC_6(VAR_13) || FUNC_1(VAR_13))
  return -VAR_7;
 if (VAR_12) {
  if (!FUNC_10(VAR_11))
   return -VAR_5;
  if (FUNC_5(VAR_11))
   return -VAR_2;
 } else if (FUNC_10(VAR_11))
  return -VAR_3;
 if (FUNC_3(VAR_10))
  return -VAR_4;
 if (VAR_11->d_flags & VAR_1)
  return -VAR_2;
 return 0;
}
