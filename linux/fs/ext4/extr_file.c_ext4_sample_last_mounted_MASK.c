
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_root; } ;
struct super_block {int dummy; } ;
struct path {int dentry; struct vfsmount* mnt; } ;
struct ext4_sb_info {int s_mount_flags; TYPE_1__* s_es; int s_sbh; } ;
typedef char handle_t ;
typedef int buf ;
struct TYPE_2__ {int s_last_mounted; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (struct path*,char*,int) ;
 int FUNC_5 (char*,struct super_block*) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (struct super_block*,int ,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (struct super_block*) ;
 scalar_t__ FUNC_12 (struct super_block*) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_2,
        struct vfsmount *VAR_3)
{
 struct ext4_sb_info *VAR_4 = FUNC_1(VAR_2);
 struct path VAR_5;
 char VAR_6[64], *VAR_7;
 handle_t *VAR_8;
 int VAR_9;

 if (FUNC_9(VAR_4->s_mount_flags & VAR_1))
  return 0;

 if (FUNC_12(VAR_2) || !FUNC_13(VAR_2))
  return 0;

 VAR_4->s_mount_flags |= VAR_1;






 FUNC_10(VAR_6, 0, sizeof(VAR_6));
 VAR_5.mnt = VAR_3;
 VAR_5.dentry = VAR_3->mnt_root;
 VAR_7 = FUNC_4(&VAR_5, VAR_6, sizeof(VAR_6));
 VAR_9 = 0;
 if (FUNC_2(VAR_7))
  goto out;

 VAR_8 = FUNC_7(VAR_2, VAR_0, 1);
 VAR_9 = FUNC_3(VAR_8);
 if (FUNC_2(VAR_8))
  goto out;
 FUNC_0(VAR_4->s_sbh, "get_write_access");
 VAR_9 = FUNC_6(VAR_8, VAR_4->s_sbh);
 if (VAR_9)
  goto out_journal;
 FUNC_14(VAR_4->s_es->s_last_mounted, VAR_7,
  sizeof(VAR_4->s_es->s_last_mounted));
 FUNC_5(VAR_8, VAR_2);
out_journal:
 FUNC_8(VAR_8);
out:
 FUNC_11(VAR_2);
 return VAR_9;
}
