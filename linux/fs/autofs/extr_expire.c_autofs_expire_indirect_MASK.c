
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct super_block {struct dentry* s_root; } ;
struct dentry {int dummy; } ;
struct autofs_sb_info {unsigned long exp_timeout; int fs_lock; } ;
struct autofs_info {int flags; int expire_complete; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*,struct dentry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct dentry*,struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*,struct vfsmount*,unsigned long,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static struct dentry *FUNC_9(struct super_block *VAR_3,
          struct vfsmount *VAR_4,
          struct autofs_sb_info *VAR_5,
          unsigned int VAR_6)
{
 unsigned long VAR_7;
 struct dentry *VAR_8 = VAR_3->s_root;
 struct dentry *VAR_9;
 struct dentry *VAR_10;
 struct dentry *VAR_11;
 struct autofs_info *VAR_12;

 if (!VAR_8)
  return ((void*)0);

 VAR_7 = VAR_5->exp_timeout;

 VAR_9 = ((void*)0);
 while ((VAR_9 = FUNC_2(VAR_9, VAR_8))) {
  FUNC_6(&VAR_5->fs_lock);
  VAR_12 = FUNC_0(VAR_9);
  if (VAR_12->flags & VAR_2) {
   FUNC_7(&VAR_5->fs_lock);
   continue;
  }
  FUNC_7(&VAR_5->fs_lock);

  VAR_10 = FUNC_5(VAR_9, VAR_4, VAR_7, VAR_6);
  if (!VAR_10)
   continue;

  FUNC_6(&VAR_5->fs_lock);
  VAR_12 = FUNC_0(VAR_10);
  VAR_12->flags |= VAR_2;
  FUNC_7(&VAR_5->fs_lock);
  FUNC_8();




  VAR_6 &= ~VAR_0;
  VAR_11 = FUNC_5(VAR_10, VAR_4, VAR_7, VAR_6);
  if (!VAR_11 || VAR_11 != VAR_10)

   goto next;

  if (VAR_10 != VAR_9)
   FUNC_1(VAR_9);

  FUNC_6(&VAR_5->fs_lock);
  goto found;
next:
  FUNC_6(&VAR_5->fs_lock);
  VAR_12->flags &= ~VAR_2;
  FUNC_7(&VAR_5->fs_lock);
  if (VAR_10 != VAR_9)
   FUNC_1(VAR_10);
 }
 return ((void*)0);

found:
 FUNC_4("returning %p %pd\n", VAR_10, VAR_10);
 VAR_12->flags |= VAR_1;
 FUNC_3(&VAR_12->expire_complete);
 FUNC_7(&VAR_5->fs_lock);
 return VAR_10;
}
