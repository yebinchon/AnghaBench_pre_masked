
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_cattr {char const* link; int mode; int rdev; } ;
struct inode {int i_mode; int i_lock; int i_state; } ;
struct dentry {TYPE_1__* d_parent; int d_sb; } ;
typedef int dev_t ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*,int ,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*,struct ovl_cattr*,int) ;
 int FUNC_4 (struct dentry*) ;
 struct inode* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_2, int VAR_3, dev_t VAR_4,
        const char *VAR_5)
{
 int VAR_6;
 struct inode *VAR_7;
 struct ovl_cattr VAR_8 = {
  .rdev = VAR_4,
  .link = VAR_5,
 };

 VAR_6 = FUNC_6(VAR_2);
 if (VAR_6)
  goto out;


 VAR_6 = -VAR_0;
 VAR_7 = FUNC_5(VAR_2->d_sb, VAR_3, VAR_4);
 if (!VAR_7)
  goto out_drop_write;

 FUNC_7(&VAR_7->i_lock);
 VAR_7->i_state |= VAR_1;
 FUNC_8(&VAR_7->i_lock);

 FUNC_1(VAR_7, VAR_2->d_parent->d_inode, VAR_3);
 VAR_8.mode = VAR_7->i_mode;

 VAR_6 = FUNC_3(VAR_2, VAR_7, &VAR_8, 0);

 if (VAR_7 != FUNC_0(VAR_2))
  FUNC_2(VAR_7);

out_drop_write:
 FUNC_4(VAR_2);
out:
 return VAR_6;
}
