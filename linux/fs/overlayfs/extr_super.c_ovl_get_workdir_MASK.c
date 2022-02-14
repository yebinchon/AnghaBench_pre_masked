
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct path {scalar_t__ mnt; int dentry; } ;
struct TYPE_2__ {int workdir; } ;
struct ovl_fs {int workdir_locked; int workbasedir_trap; int workbasedir; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,struct ovl_fs*,struct path*) ;
 int FUNC_3 (int ,struct path*) ;
 int FUNC_4 (struct ovl_fs*,char*) ;
 int FUNC_5 (struct super_block*,int ,int *,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_1, struct ovl_fs *VAR_2,
      struct path *VAR_3)
{
 int VAR_4;
 struct path VAR_5 = { };

 VAR_4 = FUNC_3(VAR_2->config.workdir, &VAR_5);
 if (VAR_4)
  goto out;

 VAR_4 = -VAR_0;
 if (VAR_3->mnt != VAR_5.mnt) {
  FUNC_8("overlayfs: workdir and upperdir must reside under the same mount\n");
  goto out;
 }
 if (!FUNC_6(VAR_5.dentry, VAR_3->dentry)) {
  FUNC_8("overlayfs: workdir and upperdir must be separate subtrees\n");
  goto out;
 }

 VAR_2->workbasedir = FUNC_0(VAR_5.dentry);

 if (FUNC_1(VAR_2->workbasedir)) {
  VAR_2->workdir_locked = 1;
 } else {
  VAR_4 = FUNC_4(VAR_2, "workdir");
  if (VAR_4)
   goto out;
 }

 VAR_4 = FUNC_5(VAR_1, VAR_2->workbasedir, &VAR_2->workbasedir_trap,
        "workdir");
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_5);

out:
 FUNC_7(&VAR_5);

 return VAR_4;
}
