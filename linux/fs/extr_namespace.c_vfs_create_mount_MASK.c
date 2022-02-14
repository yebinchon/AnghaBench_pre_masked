
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; int mnt_root; int mnt_flags; } ;
struct mount {struct vfsmount mnt; int mnt_instance; struct mount* mnt_parent; int mnt_mountpoint; } ;
struct fs_context {int sb_flags; TYPE_2__* root; scalar_t__ source; } ;
struct TYPE_4__ {TYPE_1__* d_sb; } ;
struct TYPE_3__ {int s_mounts; int s_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfsmount* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mount* FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

struct vfsmount *FUNC_7(struct fs_context *VAR_4)
{
 struct mount *VAR_5;

 if (!VAR_4->root)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_4->source ?: "none");
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 if (VAR_4->sb_flags & VAR_3)
  VAR_5->mnt.mnt_flags = VAR_2;

 FUNC_2(&VAR_4->root->d_sb->s_active);
 VAR_5->mnt.mnt_sb = VAR_4->root->d_sb;
 VAR_5->mnt.mnt_root = FUNC_3(VAR_4->root);
 VAR_5->mnt_mountpoint = VAR_5->mnt.mnt_root;
 VAR_5->mnt_parent = VAR_5;

 FUNC_5();
 FUNC_4(&VAR_5->mnt_instance, &VAR_5->mnt.mnt_sb->s_mounts);
 FUNC_6();
 return &VAR_5->mnt;
}
