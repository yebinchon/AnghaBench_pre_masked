
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct super_block {int dummy; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct dentry {int dummy; } ;
struct autofs_sb_info {int fs_lock; int type; } ;
struct autofs_info {int flags; int expire_complete; int last_used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct super_block*,struct vfsmount*,struct autofs_sb_info*,unsigned int) ;
 struct dentry* FUNC_2 (struct super_block*,struct vfsmount*,struct autofs_sb_info*,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct autofs_sb_info*,struct path const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct super_block *VAR_5, struct vfsmount *VAR_6,
      struct autofs_sb_info *VAR_7, unsigned int VAR_8)
{
 struct dentry *VAR_9;
 int VAR_10 = -VAR_2;

 if (FUNC_3(VAR_7->type))
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
 else
  VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_9) {
  struct autofs_info *VAR_11 = FUNC_0(VAR_9);
  const struct path VAR_12 = { .mnt = VAR_6, .dentry = VAR_9 };




  VAR_10 = FUNC_4(VAR_7, &VAR_12, VAR_3);

  FUNC_7(&VAR_7->fs_lock);

  VAR_11->last_used = VAR_4;
  VAR_11->flags &= ~(VAR_0|VAR_1);
  FUNC_5(&VAR_11->expire_complete);
  FUNC_8(&VAR_7->fs_lock);
  FUNC_6(VAR_9);
 }

 return VAR_10;
}
