
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_space_info {int lock; scalar_t__ max_extent_size; int bytes_reserved; int bytes_readonly; } ;
struct btrfs_block_group_cache {int lock; int delalloc_bytes; int reserved; scalar_t__ ro; struct btrfs_space_info* space_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_block_group_cache *VAR_0,
          u64 VAR_1, int VAR_2)
{
 struct btrfs_space_info *VAR_3 = VAR_0->space_info;

 FUNC_0(&VAR_3->lock);
 FUNC_0(&VAR_0->lock);
 if (VAR_0->ro)
  VAR_3->bytes_readonly += VAR_1;
 VAR_0->reserved -= VAR_1;
 VAR_3->bytes_reserved -= VAR_1;
 VAR_3->max_extent_size = 0;

 if (VAR_2)
  VAR_0->delalloc_bytes -= VAR_1;
 FUNC_1(&VAR_0->lock);
 FUNC_1(&VAR_3->lock);
}
