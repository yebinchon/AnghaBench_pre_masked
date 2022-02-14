
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid_kobject {int kobj; int flags; } ;
struct btrfs_space_info {int ** block_group_kobjs; int kobj; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int flags; struct btrfs_fs_info* fs_info; struct btrfs_space_info* space_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct btrfs_fs_info*,char*) ;
 int FUNC_3 (int *,int *,char*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 struct raid_kobject* FUNC_6 (int,int ) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 () ;

void FUNC_9(struct btrfs_block_group_cache *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 struct btrfs_space_info *VAR_4 = VAR_2->space_info;
 struct raid_kobject *VAR_5;
 const int VAR_6 = FUNC_0(VAR_2->flags);
 unsigned int VAR_7;
 int VAR_8;
 VAR_7 = FUNC_8();

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_7(VAR_7);
  FUNC_2(VAR_2->fs_info,
    "couldn't alloc memory for raid level kobject");
  return;
 }

 VAR_5->flags = VAR_2->flags;
 FUNC_4(&VAR_5->kobj, &VAR_1);
 VAR_8 = FUNC_3(&VAR_5->kobj, &VAR_4->kobj, "%s",
     FUNC_1(VAR_5->flags));
 FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_5(&VAR_5->kobj);
  FUNC_2(VAR_3,
   "failed to add kobject for block cache, ignoring");
  return;
 }

 VAR_4->block_group_kobjs[VAR_6] = &VAR_5->kobj;
}
