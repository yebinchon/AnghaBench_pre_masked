
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kset; } ;
struct the_nilfs {int ns_dev_subgroups; TYPE_1__ ns_dev_kobj; int ns_dev_kobj_unregister; } ;
struct super_block {int s_id; struct the_nilfs* s_fs_info; } ;
struct nilfs_sysfs_dev_subgroups {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *,int *,char*,int ) ;
 int FUNC_4 (size_t,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct super_block*,int ,char*) ;
 int FUNC_6 (struct the_nilfs*) ;
 int FUNC_7 (struct the_nilfs*) ;
 int FUNC_8 (struct the_nilfs*) ;
 int FUNC_9 (struct the_nilfs*) ;
 int FUNC_10 (struct the_nilfs*) ;
 int FUNC_11 (struct the_nilfs*) ;
 int FUNC_12 (struct the_nilfs*) ;
 int FUNC_13 (struct the_nilfs*) ;
 int FUNC_14 (struct the_nilfs*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct super_block *VAR_5)
{
 struct the_nilfs *VAR_6 = VAR_5->s_fs_info;
 size_t VAR_7 = sizeof(struct nilfs_sysfs_dev_subgroups);
 int VAR_8;

 VAR_6->ns_dev_subgroups = FUNC_4(VAR_7, VAR_1);
 if (FUNC_15(!VAR_6->ns_dev_subgroups)) {
  VAR_8 = -VAR_0;
  FUNC_5(VAR_5, VAR_2,
     "unable to allocate memory for device group");
  goto failed_create_device_group;
 }

 VAR_6->ns_dev_kobj.kset = VAR_4;
 FUNC_0(&VAR_6->ns_dev_kobj_unregister);
 VAR_8 = FUNC_3(&VAR_6->ns_dev_kobj, &VAR_3, ((void*)0),
        "%s", VAR_5->s_id);
 if (VAR_8)
  goto free_dev_subgroups;

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8)
  goto cleanup_dev_kobject;

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8)
  goto delete_mounted_snapshots_group;

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  goto delete_checkpoints_group;

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8)
  goto delete_segments_group;

 VAR_8 = FUNC_8(VAR_6);
 if (VAR_8)
  goto delete_superblock_group;

 return 0;

delete_superblock_group:
 FUNC_14(VAR_6);

delete_segments_group:
 FUNC_13(VAR_6);

delete_checkpoints_group:
 FUNC_11(VAR_6);

delete_mounted_snapshots_group:
 FUNC_12(VAR_6);

cleanup_dev_kobject:
 FUNC_2(&VAR_6->ns_dev_kobj);

free_dev_subgroups:
 FUNC_1(VAR_6->ns_dev_subgroups);

failed_create_device_group:
 return VAR_8;
}
