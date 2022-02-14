
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_flags; int mnt_root; } ;
struct super_block {int dummy; } ;
struct path {int dentry; TYPE_1__* mnt; } ;
struct TYPE_4__ {int upperdir; } ;
struct ovl_fs {int upperdir_locked; struct vfsmount* upper_mnt; int upperdir_trap; TYPE_2__ config; } ;
struct TYPE_3__ {int mnt_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vfsmount*) ;
 struct vfsmount* FUNC_2 (struct path*) ;
 int FUNC_3 (struct path*,struct ovl_fs*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct path*) ;
 int FUNC_6 (struct ovl_fs*,char*) ;
 int FUNC_7 (struct super_block*,int ,int *,char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_4, struct ovl_fs *VAR_5,
    struct path *VAR_6)
{
 struct vfsmount *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_5->config.upperdir, VAR_6);
 if (VAR_8)
  goto out;


 if (FUNC_9(VAR_6->mnt->mnt_sb)) {
  FUNC_8("overlayfs: upper fs is r/o, try multi-lower layers mount\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_3(VAR_6, VAR_5, VAR_5->config.upperdir);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_7(VAR_4, VAR_6->dentry, &VAR_5->upperdir_trap,
        "upperdir");
 if (VAR_8)
  goto out;

 VAR_7 = FUNC_2(VAR_6);
 VAR_8 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7)) {
  FUNC_8("overlayfs: failed to clone upperpath\n");
  goto out;
 }


 VAR_7->mnt_flags &= ~(VAR_1 | VAR_2 | VAR_3);
 VAR_5->upper_mnt = VAR_7;

 if (FUNC_4(VAR_5->upper_mnt->mnt_root)) {
  VAR_5->upperdir_locked = 1;
 } else {
  VAR_8 = FUNC_6(VAR_5, "upperdir");
  if (VAR_8)
   goto out;
 }

 VAR_8 = 0;
out:
 return VAR_8;
}
