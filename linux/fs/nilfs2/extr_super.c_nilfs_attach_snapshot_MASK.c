
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_snapshot_mount_mutex; int ns_segctor_sem; int ns_cpfile; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_root {int dummy; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,scalar_t__,int,struct nilfs_root**) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct super_block*,struct nilfs_root*,struct dentry**) ;
 int FUNC_6 (struct super_block*,int ,char*,int,...) ;
 int FUNC_7 (struct nilfs_root*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_3, __u64 VAR_4,
     struct dentry **VAR_5)
{
 struct the_nilfs *VAR_6 = VAR_3->s_fs_info;
 struct nilfs_root *VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6->ns_snapshot_mount_mutex);

 FUNC_0(&VAR_6->ns_segctor_sem);
 VAR_8 = FUNC_4(VAR_6->ns_cpfile, VAR_4);
 FUNC_8(&VAR_6->ns_segctor_sem);
 if (VAR_8 < 0) {
  VAR_8 = (VAR_8 == -VAR_1) ? -VAR_0 : VAR_8;
  goto out;
 } else if (!VAR_8) {
  FUNC_6(VAR_3, VAR_2,
     "The specified checkpoint is not a snapshot (checkpoint number=%llu)",
     (unsigned long long)VAR_4);
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_3(VAR_3, VAR_4, 0, &VAR_7);
 if (VAR_8) {
  FUNC_6(VAR_3, VAR_2,
     "error %d while loading snapshot (checkpoint number=%llu)",
     VAR_8, (unsigned long long)VAR_4);
  goto out;
 }
 VAR_8 = FUNC_5(VAR_3, VAR_7, VAR_5);
 FUNC_7(VAR_7);
 out:
 FUNC_2(&VAR_6->ns_snapshot_mount_mutex);
 return VAR_8;
}
