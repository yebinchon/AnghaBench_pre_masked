
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct dentry* d_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 struct inode* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,struct inode*) ;
 struct dentry* FUNC_8 (struct dentry*,struct dentry*) ;
 int FUNC_9 (struct dentry*,struct dentry*) ;
 int FUNC_10 (struct inode*,struct dentry*,struct inode*,struct dentry*,int *,int ) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_2, struct dentry *VAR_3,
  struct inode *VAR_4, struct dentry *VAR_5,
  unsigned int VAR_6)
{
 int VAR_7;
 struct dentry *VAR_8;
 struct dentry *VAR_9;
 struct dentry *VAR_10;
 struct dentry *VAR_11;
 struct dentry *VAR_12 = ((void*)0);
 struct inode *VAR_13;

 if (VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_3);
 VAR_9 = FUNC_5(VAR_5);
 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 VAR_10 = FUNC_3(VAR_8);
 VAR_11 = FUNC_3(VAR_9);
 VAR_13 = FUNC_0(VAR_5);
 VAR_12 = FUNC_8(VAR_10, VAR_11);
 VAR_7 = -VAR_0;
 if (VAR_8->d_parent != VAR_10)
  goto out_lock;
 if (VAR_9->d_parent != VAR_11)
  goto out_lock;
 if (FUNC_1(VAR_8) || FUNC_1(VAR_9))
  goto out_lock;

 if (VAR_12 == VAR_8)
  goto out_lock;

 if (VAR_12 == VAR_9) {
  VAR_7 = -VAR_1;
  goto out_lock;
 }
 VAR_7 = FUNC_10(FUNC_0(VAR_10), VAR_8,
   FUNC_0(VAR_11), VAR_9,
   ((void*)0), 0);
 if (VAR_7)
  goto out_lock;
 if (VAR_13)
  FUNC_7(VAR_13,
          FUNC_6(VAR_13));
 FUNC_7(VAR_4, FUNC_0(VAR_11));
 if (VAR_4 != VAR_2)
  FUNC_7(VAR_2, FUNC_0(VAR_10));
out_lock:
 FUNC_9(VAR_10, VAR_11);
 FUNC_4(VAR_11);
 FUNC_4(VAR_10);
 FUNC_4(VAR_9);
 FUNC_4(VAR_8);
 return VAR_7;
}
