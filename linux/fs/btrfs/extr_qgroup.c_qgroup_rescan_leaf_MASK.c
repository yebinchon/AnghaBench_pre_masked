
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct ulist {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ type; void* objectid; void* offset; } ;
struct TYPE_2__ {void* objectid; int offset; int type; } ;
struct btrfs_fs_info {TYPE_1__ qgroup_rescan_progress; void* nodesize; int qgroup_rescan_lock; int extent_root; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct extent_buffer* FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct btrfs_fs_info*,char*,void*,int ,int ,int) ;
 int FUNC_2 (int *,struct btrfs_fs_info*,void*,int ,struct ulist**,int) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_5 (struct btrfs_trans_handle*,void*,void*,int *,struct ulist*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (int ,TYPE_1__*,struct btrfs_path*,int,int ) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct btrfs_trans_handle *VAR_3,
         struct btrfs_path *VAR_4)
{
 struct btrfs_fs_info *VAR_5 = VAR_3->fs_info;
 struct btrfs_key VAR_6;
 struct extent_buffer *VAR_7 = ((void*)0);
 struct ulist *VAR_8 = ((void*)0);
 u64 VAR_9;
 bool VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_10(&VAR_5->qgroup_rescan_lock);
 VAR_12 = FUNC_7(VAR_5->extent_root,
      &VAR_5->qgroup_rescan_progress,
      VAR_4, 1, 0);

 FUNC_1(VAR_5,
  "current progress key (%llu %u %llu), search_slot ret %d",
  VAR_5->qgroup_rescan_progress.objectid,
  VAR_5->qgroup_rescan_progress.type,
  VAR_5->qgroup_rescan_progress.offset, VAR_12);

 if (VAR_12) {
  VAR_5->qgroup_rescan_progress.objectid = (u64)-1;
  FUNC_6(VAR_4);
  FUNC_11(&VAR_5->qgroup_rescan_lock);
  return VAR_12;
 }
 VAR_10 = FUNC_9(VAR_4);

 FUNC_4(VAR_4->nodes[0], &VAR_6,
         FUNC_3(VAR_4->nodes[0]) - 1);
 VAR_5->qgroup_rescan_progress.objectid = VAR_6.objectid + 1;

 VAR_7 = FUNC_0(VAR_4->nodes[0]);
 if (!VAR_7) {
  VAR_12 = -VAR_2;
  FUNC_11(&VAR_5->qgroup_rescan_lock);
  goto out;
 }
 VAR_11 = VAR_4->slots[0];
 FUNC_6(VAR_4);
 FUNC_11(&VAR_5->qgroup_rescan_lock);

 for (; VAR_11 < FUNC_3(VAR_7); ++VAR_11) {
  FUNC_4(VAR_7, &VAR_6, VAR_11);
  if (VAR_6.type != VAR_0 &&
      VAR_6.type != VAR_1)
   continue;
  if (VAR_6.type == VAR_1)
   VAR_9 = VAR_5->nodesize;
  else
   VAR_9 = VAR_6.offset;

  VAR_12 = FUNC_2(((void*)0), VAR_5, VAR_6.objectid, 0,
        &VAR_8, 0);
  if (VAR_12 < 0)
   goto out;

  VAR_12 = FUNC_5(VAR_3, VAR_6.objectid,
        VAR_9, ((void*)0), VAR_8);
  if (VAR_12 < 0)
   goto out;
 }
out:
 if (VAR_7)
  FUNC_8(VAR_7);

 if (VAR_10 && !VAR_12) {
  VAR_12 = 1;
  VAR_5->qgroup_rescan_progress.objectid = (u64)-1;
 }
 return VAR_12;
}
