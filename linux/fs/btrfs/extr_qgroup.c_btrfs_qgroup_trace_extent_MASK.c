
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {TYPE_1__* transaction; struct btrfs_fs_info* fs_info; } ;
struct btrfs_qgroup_extent_record {int * old_roots; scalar_t__ num_bytes; scalar_t__ bytenr; } ;
struct btrfs_fs_info {int flags; } ;
struct btrfs_delayed_ref_root {int lock; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_delayed_ref_root*,struct btrfs_qgroup_extent_record*) ;
 int FUNC_1 (struct btrfs_fs_info*,struct btrfs_qgroup_extent_record*) ;
 int FUNC_2 (struct btrfs_qgroup_extent_record*) ;
 struct btrfs_qgroup_extent_record* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct btrfs_trans_handle *VAR_2, u64 VAR_3,
         u64 VAR_4, gfp_t VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_2->fs_info;
 struct btrfs_qgroup_extent_record *VAR_7;
 struct btrfs_delayed_ref_root *VAR_8;
 int VAR_9;

 if (!FUNC_6(VAR_0, &VAR_6->flags)
     || VAR_3 == 0 || VAR_4 == 0)
  return 0;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_5);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = &VAR_2->transaction->delayed_refs;
 VAR_7->bytenr = VAR_3;
 VAR_7->num_bytes = VAR_4;
 VAR_7->old_roots = ((void*)0);

 FUNC_4(&VAR_8->lock);
 VAR_9 = FUNC_0(VAR_6, VAR_8, VAR_7);
 FUNC_5(&VAR_8->lock);
 if (VAR_9 > 0) {
  FUNC_2(VAR_7);
  return 0;
 }
 return FUNC_1(VAR_6, VAR_7);
}
