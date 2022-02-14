
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct super_operations {int dummy; } ;
struct TYPE_7__ {int batch; int flags; int count_objects; int scan_objects; int seeks; } ;
struct TYPE_6__ {int dqio_sem; } ;
struct TYPE_5__ {int wait_unfrozen; int * rw_sem; } ;
struct super_block {int s_flags; int s_count; int s_time_gran; TYPE_3__ s_shrink; int s_inode_lru; int s_dentry_lru; int cleancache_poolid; int s_time_max; int s_time_min; struct super_operations const* s_op; int s_maxbytes; TYPE_2__ s_dquot; int s_vfs_rename_mutex; int s_active; int s_inode_wblist_lock; int s_inodes_wb; int s_inode_list_lock; int s_inodes; int s_sync_lock; int s_roots; int s_instances; int s_iflags; int * s_user_ns; int * s_bdi; TYPE_1__ s_writers; int s_umount; int s_mounts; } ;
struct file_system_type {int s_vfs_rename_key; int * s_writers_key; int s_umount_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (struct user_namespace*) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 struct super_block* FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int * VAR_13 ;
 scalar_t__ FUNC_15 (struct super_block*) ;
 int FUNC_16 (int *) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static struct super_block *FUNC_17(struct file_system_type *VAR_16, int VAR_17,
           struct user_namespace *VAR_18)
{
 struct super_block *VAR_19 = FUNC_10(sizeof(struct super_block), VAR_2);
 static const struct super_operations VAR_20;
 int VAR_21;

 if (!VAR_19)
  return ((void*)0);

 FUNC_2(&VAR_19->s_mounts);
 VAR_19->s_user_ns = FUNC_7(VAR_18);
 FUNC_8(&VAR_19->s_umount);
 FUNC_12(&VAR_19->s_umount, &VAR_16->s_umount_key);
 FUNC_6(&VAR_19->s_umount, VAR_8);

 if (FUNC_15(VAR_19))
  goto fail;

 for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
  if (FUNC_3(&VAR_19->s_writers.rw_sem[VAR_21],
     VAR_13[VAR_21],
     &VAR_16->s_writers_key[VAR_21]))
   goto fail;
 }
 FUNC_9(&VAR_19->s_writers.wait_unfrozen);
 VAR_19->s_bdi = &VAR_12;
 VAR_19->s_flags = VAR_17;
 if (VAR_19->s_user_ns != &VAR_11)
  VAR_19->s_iflags |= VAR_5;
 FUNC_1(&VAR_19->s_instances);
 FUNC_0(&VAR_19->s_roots);
 FUNC_13(&VAR_19->s_sync_lock);
 FUNC_2(&VAR_19->s_inodes);
 FUNC_16(&VAR_19->s_inode_list_lock);
 FUNC_2(&VAR_19->s_inodes_wb);
 FUNC_16(&VAR_19->s_inode_wblist_lock);

 VAR_19->s_count = 1;
 FUNC_4(&VAR_19->s_active, 1);
 FUNC_13(&VAR_19->s_vfs_rename_mutex);
 FUNC_12(&VAR_19->s_vfs_rename_mutex, &VAR_16->s_vfs_rename_key);
 FUNC_8(&VAR_19->s_dquot.dqio_sem);
 VAR_19->s_maxbytes = VAR_3;
 VAR_19->s_op = &VAR_20;
 VAR_19->s_time_gran = 1000000000;
 VAR_19->s_time_min = VAR_10;
 VAR_19->s_time_max = VAR_9;
 VAR_19->cleancache_poolid = VAR_0;

 VAR_19->s_shrink.seeks = VAR_1;
 VAR_19->s_shrink.scan_objects = VAR_15;
 VAR_19->s_shrink.count_objects = VAR_14;
 VAR_19->s_shrink.batch = 1024;
 VAR_19->s_shrink.flags = VAR_7 | VAR_6;
 if (FUNC_14(&VAR_19->s_shrink))
  goto fail;
 if (FUNC_11(&VAR_19->s_dentry_lru, &VAR_19->s_shrink))
  goto fail;
 if (FUNC_11(&VAR_19->s_inode_lru, &VAR_19->s_shrink))
  goto fail;
 return VAR_19;

fail:
 FUNC_5(VAR_19);
 return ((void*)0);
}
