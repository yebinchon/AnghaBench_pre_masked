
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {int d_flags; struct inode* d_inode; } ;
struct TYPE_2__ {int (* unlink ) (struct inode*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*,struct dentry*,int ) ;
 int FUNC_9 (struct inode*,struct dentry*) ;
 int FUNC_10 (struct inode*,struct dentry*) ;
 int FUNC_11 (struct inode*,struct inode**) ;

int FUNC_12(struct inode *VAR_3, struct dentry *VAR_4, struct inode **VAR_5)
{
 struct inode *VAR_6 = VAR_4->d_inode;
 int VAR_7 = FUNC_8(VAR_3, VAR_4, 0);

 if (VAR_7)
  return VAR_7;

 if (!VAR_3->i_op->unlink)
  return -VAR_2;

 FUNC_5(VAR_6);
 if (FUNC_7(VAR_4))
  VAR_7 = -VAR_1;
 else {
  VAR_7 = FUNC_9(VAR_3, VAR_4);
  if (!VAR_7) {
   VAR_7 = FUNC_11(VAR_6, VAR_5);
   if (VAR_7)
    goto out;
   VAR_7 = VAR_3->i_op->unlink(VAR_3, VAR_4);
   if (!VAR_7) {
    FUNC_2(VAR_4);
    FUNC_1(VAR_4);
    FUNC_4(VAR_3, VAR_4);
   }
  }
 }
out:
 FUNC_6(VAR_6);


 if (!VAR_7 && !(VAR_4->d_flags & VAR_0)) {
  FUNC_3(VAR_6);
  FUNC_0(VAR_4);
 }

 return VAR_7;
}
