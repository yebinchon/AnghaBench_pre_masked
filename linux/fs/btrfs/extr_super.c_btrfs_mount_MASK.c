
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vfsmount {TYPE_1__* mnt_sb; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int s_umount; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct vfsmount*) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (struct vfsmount*) ;
 int VAR_1 ;
 int FUNC_4 (void*,char**,int *) ;
 int FUNC_5 (TYPE_1__*,int*,int *) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct vfsmount*) ;
 struct dentry* FUNC_9 (char*,int ,struct vfsmount*) ;
 int FUNC_10 (int *) ;
 struct vfsmount* FUNC_11 (int *,int,char const*,void*) ;

__attribute__((used)) static struct dentry *FUNC_12(struct file_system_type *VAR_3, int VAR_4,
  const char *VAR_5, void *VAR_6)
{
 struct vfsmount *VAR_7;
 struct dentry *VAR_8;
 char *VAR_9 = ((void*)0);
 u64 VAR_10 = 0;
 int VAR_11 = 0;

 VAR_11 = FUNC_4(VAR_6, &VAR_9,
     &VAR_10);
 if (VAR_11) {
  FUNC_7(VAR_9);
  return FUNC_1(VAR_11);
 }


 VAR_7 = FUNC_11(&VAR_2, VAR_4, VAR_5, VAR_6);
 if (FUNC_3(VAR_7) == -VAR_0) {
  if (VAR_4 & VAR_1) {
   VAR_7 = FUNC_11(&VAR_2,
    VAR_4 & ~VAR_1, VAR_5, VAR_6);
  } else {
   VAR_7 = FUNC_11(&VAR_2,
    VAR_4 | VAR_1, VAR_5, VAR_6);
   if (FUNC_2(VAR_7)) {
    VAR_8 = FUNC_0(VAR_7);
    FUNC_7(VAR_9);
    goto out;
   }

   FUNC_6(&VAR_7->mnt_sb->s_umount);
   VAR_11 = FUNC_5(VAR_7->mnt_sb, &VAR_4, ((void*)0));
   FUNC_10(&VAR_7->mnt_sb->s_umount);
   if (VAR_11 < 0) {
    VAR_8 = FUNC_1(VAR_11);
    FUNC_8(VAR_7);
    FUNC_7(VAR_9);
    goto out;
   }
  }
 }
 if (FUNC_2(VAR_7)) {
  VAR_8 = FUNC_0(VAR_7);
  FUNC_7(VAR_9);
  goto out;
 }


 VAR_8 = FUNC_9(VAR_9, VAR_10, VAR_7);

out:
 return VAR_8;
}
