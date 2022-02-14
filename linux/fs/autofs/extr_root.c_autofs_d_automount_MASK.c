
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {struct dentry* dentry; } ;
struct dentry {int d_sb; } ;
struct autofs_sb_info {int version; int fs_lock; } ;
struct autofs_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vfsmount* FUNC_0 (int) ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct path*,int ) ;
 struct dentry* FUNC_3 (struct path*) ;
 scalar_t__ FUNC_4 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct path*,int ) ;
 scalar_t__ FUNC_9 (struct path*) ;
 int FUNC_10 (struct path*) ;
 int FUNC_11 (char*,struct dentry*,struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static struct vfsmount *FUNC_15(struct path *VAR_3)
{
 struct dentry *VAR_4 = VAR_3->dentry;
 struct autofs_sb_info *VAR_5 = FUNC_5(VAR_4->d_sb);
 struct autofs_info *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 FUNC_11("dentry=%p %pd\n", VAR_4, VAR_4);


 if (FUNC_4(VAR_5))
  return ((void*)0);
 VAR_7 = FUNC_8(VAR_3, 0);
 if (VAR_7 && VAR_7 != -VAR_1)
  return ((void*)0);


 FUNC_13(&VAR_5->fs_lock);
 if (VAR_6->flags & VAR_0) {
  FUNC_14(&VAR_5->fs_lock);
  VAR_7 = FUNC_2(VAR_3, 0);
  if (VAR_7)
   return FUNC_0(VAR_7);
  goto done;
 }






 if (FUNC_7(VAR_4) && FUNC_6(VAR_4)) {
  FUNC_14(&VAR_5->fs_lock);
  goto done;
 }

 if (!FUNC_10(VAR_3)) {
  if (VAR_5->version > 4) {
   if (FUNC_9(VAR_3)) {
    FUNC_14(&VAR_5->fs_lock);
    goto done;
   }
  } else {
   if (!FUNC_12(VAR_4)) {
    FUNC_14(&VAR_5->fs_lock);
    goto done;
   }
  }
  VAR_6->flags |= VAR_0;
  FUNC_14(&VAR_5->fs_lock);
  VAR_7 = FUNC_2(VAR_3, 0);
  FUNC_13(&VAR_5->fs_lock);
  VAR_6->flags &= ~VAR_0;
  if (VAR_7) {
   FUNC_14(&VAR_5->fs_lock);
   return FUNC_0(VAR_7);
  }
 }
 FUNC_14(&VAR_5->fs_lock);
done:

 VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_2);

 return ((void*)0);
}
