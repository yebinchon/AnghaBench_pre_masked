
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_flags; struct dentry* d_parent; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct inode*,struct dentry*,int ) ;
 scalar_t__ FUNC_7 (struct inode*,struct inode*) ;
 struct inode* FUNC_8 (struct dentry*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;
 scalar_t__ FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct inode*,int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_9, struct dentry *VAR_10, int VAR_11)
{
 int VAR_12;

 if (FUNC_10(VAR_10))
  return -VAR_4;

 FUNC_0(FUNC_8(VAR_10->d_parent) != VAR_9);
 FUNC_6(VAR_9, VAR_10, VAR_0);

 VAR_12 = FUNC_11(VAR_9, VAR_8 | VAR_7);
 if (VAR_12)
  return VAR_12;
 if (FUNC_1(VAR_9))
  return -VAR_6;
 if (FUNC_7(VAR_9, FUNC_8(VAR_10)) || FUNC_1(FUNC_8(VAR_10)) ||
     FUNC_3(FUNC_8(VAR_10)) || FUNC_5(FUNC_8(VAR_10)))
  return -VAR_6;
 if (VAR_11) {
  if (!FUNC_9(VAR_10))
   return -VAR_5;
  if (FUNC_4(VAR_10))
   return -VAR_2;
 } else if (FUNC_9(VAR_10))
  return -VAR_3;
 if (FUNC_2(VAR_9))
  return -VAR_4;
 if (VAR_10->d_flags & VAR_1)
  return -VAR_2;
 return 0;
}
