
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct super_block* mnt_sb; int mnt_root; } ;
struct super_block {int s_umount; int s_active; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct mount {int mnt_list; struct mnt_namespace* mnt_ns; } ;
struct mnt_namespace {int list; int mounts; struct mount* root; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct mnt_namespace*) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mnt_namespace*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mnt_namespace* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct vfsmount*) ;
 int FUNC_8 (struct mnt_namespace*) ;
 struct mount* FUNC_9 (struct vfsmount*) ;
 int FUNC_10 (int ,struct vfsmount*,char const*,int,struct path*) ;

struct dentry *FUNC_11(struct vfsmount *VAR_3, const char *VAR_4)
{
 struct mount *VAR_5 = FUNC_9(VAR_3);
 struct mnt_namespace *VAR_6;
 struct super_block *VAR_7;
 struct path VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(&VAR_2, 1);
 if (FUNC_2(VAR_6)) {
  FUNC_7(VAR_3);
  return FUNC_0(VAR_6);
 }
 VAR_5->mnt_ns = VAR_6;
 VAR_6->root = VAR_5;
 VAR_6->mounts++;
 FUNC_6(&VAR_5->mnt_list, &VAR_6->list);

 VAR_9 = FUNC_10(VAR_3->mnt_root, VAR_3,
   VAR_4, VAR_1|VAR_0, &VAR_8);

 FUNC_8(VAR_6);

 if (VAR_9)
  return FUNC_1(VAR_9);


 VAR_7 = VAR_8.mnt->mnt_sb;
 FUNC_4(&VAR_7->s_active);
 FUNC_7(VAR_8.mnt);

 FUNC_5(&VAR_7->s_umount);

 return VAR_8.dentry;
}
