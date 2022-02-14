
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_space_info {int flags; scalar_t__ total_bytes; int lock; int ro_bgs; int bytes_readonly; } ;
struct TYPE_2__ {scalar_t__ offset; int objectid; } ;
struct btrfs_block_group_cache {scalar_t__ reserved; scalar_t__ pinned; scalar_t__ bytes_super; struct btrfs_space_info* space_info; int fs_info; TYPE_1__ key; int lock; int ro_list; scalar_t__ ro; int item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct btrfs_space_info*,int ,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_3 (struct btrfs_space_info*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct btrfs_block_group_cache *VAR_5, int VAR_6)
{
 struct btrfs_space_info *VAR_7 = VAR_5->space_info;
 u64 VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 int VAR_11 = -VAR_2;






 if ((VAR_7->flags &
      (VAR_1 | VAR_0)) &&
     !VAR_6)
  VAR_10 = VAR_4;
 else
  VAR_10 = 0;

 FUNC_6(&VAR_7->lock);
 FUNC_6(&VAR_5->lock);

 if (VAR_5->ro) {
  VAR_5->ro++;
  VAR_11 = 0;
  goto out;
 }

 VAR_8 = VAR_5->key.offset - VAR_5->reserved - VAR_5->pinned -
      VAR_5->bytes_super - FUNC_0(&VAR_5->item);
 VAR_9 = FUNC_3(VAR_7, 1);







 if (VAR_9 + VAR_8 + VAR_10 <=
     VAR_7->total_bytes) {
  VAR_7->bytes_readonly += VAR_8;
  VAR_5->ro++;
  FUNC_5(&VAR_5->ro_list, &VAR_7->ro_bgs);
  VAR_11 = 0;
 }
out:
 FUNC_7(&VAR_5->lock);
 FUNC_7(&VAR_7->lock);
 if (VAR_11 == -VAR_2 && FUNC_4(VAR_5->fs_info, VAR_3)) {
  FUNC_2(VAR_5->fs_info,
   "unable to make block group %llu ro",
   VAR_5->key.objectid);
  FUNC_2(VAR_5->fs_info,
   "sinfo_used=%llu bg_num_bytes=%llu min_allocable=%llu",
   VAR_9, VAR_8, VAR_10);
  FUNC_1(VAR_5->fs_info, VAR_5->space_info, 0, 0);
 }
 return VAR_11;
}
