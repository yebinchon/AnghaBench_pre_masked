
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct super_block {int s_root; } ;
struct dentry {int dummy; } ;
struct autofs_sb_info {unsigned long exp_timeout; int fs_lock; } ;
struct autofs_info {int flags; int expire_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct vfsmount*,struct dentry*,unsigned long,unsigned int) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static struct dentry *FUNC_8(struct super_block *VAR_3,
        struct vfsmount *VAR_4,
        struct autofs_sb_info *VAR_5,
        unsigned int VAR_6)
{
 struct dentry *VAR_7 = FUNC_2(VAR_3->s_root);
 struct autofs_info *VAR_8;
 unsigned long VAR_9;

 if (!VAR_7)
  return ((void*)0);

 VAR_9 = VAR_5->exp_timeout;

 if (!FUNC_1(VAR_4, VAR_7, VAR_9, VAR_6)) {
  FUNC_5(&VAR_5->fs_lock);
  VAR_8 = FUNC_0(VAR_7);

  if (VAR_8->flags & VAR_1) {
   FUNC_6(&VAR_5->fs_lock);
   goto out;
  }
  VAR_8->flags |= VAR_2;
  FUNC_6(&VAR_5->fs_lock);
  FUNC_7();
  if (!FUNC_1(VAR_4, VAR_7, VAR_9, VAR_6)) {
   FUNC_5(&VAR_5->fs_lock);
   VAR_8->flags |= VAR_0;
   FUNC_4(&VAR_8->expire_complete);
   FUNC_6(&VAR_5->fs_lock);
   return VAR_7;
  }
  FUNC_5(&VAR_5->fs_lock);
  VAR_8->flags &= ~VAR_2;
  FUNC_6(&VAR_5->fs_lock);
 }
out:
 FUNC_3(VAR_7);

 return ((void*)0);
}
