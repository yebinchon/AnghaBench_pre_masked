
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_space_info {int lock; int flags; int bytes_reserved; } ;
struct btrfs_block_group_cache {int lock; int delalloc_bytes; int fs_info; int reserved; scalar_t__ ro; struct btrfs_space_info* space_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct btrfs_space_info*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int ,int) ;

int FUNC_4(struct btrfs_block_group_cache *VAR_1,
        u64 VAR_2, u64 VAR_3, int VAR_4)
{
 struct btrfs_space_info *VAR_5 = VAR_1->space_info;
 int VAR_6 = 0;

 FUNC_1(&VAR_5->lock);
 FUNC_1(&VAR_1->lock);
 if (VAR_1->ro) {
  VAR_6 = -VAR_0;
 } else {
  VAR_1->reserved += VAR_3;
  VAR_5->bytes_reserved += VAR_3;
  FUNC_3(VAR_1->fs_info, "space_info",
           VAR_5->flags, VAR_3, 1);
  FUNC_0(VAR_1->fs_info,
            VAR_5, -VAR_2);
  if (VAR_4)
   VAR_1->delalloc_bytes += VAR_3;
 }
 FUNC_2(&VAR_1->lock);
 FUNC_2(&VAR_5->lock);
 return VAR_6;
}
