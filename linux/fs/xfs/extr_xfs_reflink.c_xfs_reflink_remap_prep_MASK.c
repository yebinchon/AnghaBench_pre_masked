
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 struct xfs_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct xfs_inode*) ;
 scalar_t__ FUNC_3 (struct xfs_inode*) ;
 int VAR_1 ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*,scalar_t__,struct file*,scalar_t__,scalar_t__*,unsigned int) ;
 int FUNC_6 (struct xfs_inode*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (struct inode*,struct inode*) ;
 int FUNC_9 (struct xfs_inode*,int ,struct xfs_inode*,int ) ;
 int FUNC_10 (struct xfs_inode*) ;
 int FUNC_11 (struct file*,struct file*) ;
 int FUNC_12 (struct xfs_inode*,struct xfs_inode*) ;
 int FUNC_13 (struct xfs_inode*,scalar_t__) ;

int
FUNC_14(
 struct file *VAR_2,
 loff_t VAR_3,
 struct file *VAR_4,
 loff_t VAR_5,
 loff_t *VAR_6,
 unsigned int VAR_7)
{
 struct inode *VAR_8 = FUNC_4(VAR_2);
 struct xfs_inode *VAR_9 = FUNC_1(VAR_8);
 struct inode *VAR_10 = FUNC_4(VAR_4);
 struct xfs_inode *VAR_11 = FUNC_1(VAR_10);
 bool VAR_12 = (VAR_8 == VAR_10);
 ssize_t VAR_13;


 VAR_13 = FUNC_8(VAR_8, VAR_10);
 if (VAR_13)
  return VAR_13;
 if (VAR_12)
  FUNC_7(VAR_9, VAR_1);
 else
  FUNC_9(VAR_9, VAR_1, VAR_11,
    VAR_1);


 VAR_13 = -VAR_0;

 if (FUNC_3(VAR_9) || FUNC_3(VAR_11))
  goto out_unlock;


 if (FUNC_0(VAR_8) || FUNC_0(VAR_10))
  goto out_unlock;

 VAR_13 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7);
 if (VAR_13 < 0 || *VAR_6 == 0)
  goto out_unlock;


 VAR_13 = FUNC_10(VAR_11);
 if (VAR_13)
  goto out_unlock;





 VAR_13 = FUNC_13(VAR_11, VAR_5);
 if (VAR_13)
  goto out_unlock;


 VAR_13 = FUNC_12(VAR_9, VAR_11);
 if (VAR_13)
  goto out_unlock;






 if (VAR_5 > FUNC_2(VAR_11)) {
  loff_t VAR_14 = *VAR_6 + (VAR_5 - FUNC_2(VAR_11));
  VAR_13 = FUNC_6(VAR_11, FUNC_2(VAR_11), VAR_14);
 } else {
  VAR_13 = FUNC_6(VAR_11, VAR_5, *VAR_6);
 }
 if (VAR_13)
  goto out_unlock;

 return 1;
out_unlock:
 FUNC_11(VAR_2, VAR_4);
 return VAR_13;
}
