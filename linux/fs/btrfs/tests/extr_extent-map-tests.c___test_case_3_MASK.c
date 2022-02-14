
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; scalar_t__ block_start; scalar_t__ block_len; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct extent_map_tree*,struct extent_map*,int ) ;
 struct extent_map* FUNC_1 () ;
 int FUNC_2 (struct btrfs_fs_info*,struct extent_map_tree*,struct extent_map**,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct extent_map*) ;
 int FUNC_4 (struct extent_map*) ;
 int FUNC_5 (struct extent_map_tree*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct btrfs_fs_info *VAR_5,
  struct extent_map_tree *VAR_6, u64 VAR_7)
{
 struct extent_map *VAR_8;
 u64 VAR_9 = VAR_3;
 int VAR_10;

 VAR_8 = FUNC_1();
 if (!VAR_8) {
  FUNC_7(VAR_4);
  return -VAR_1;
 }


 VAR_8->start = VAR_3;
 VAR_8->len = VAR_3;
 VAR_8->block_start = VAR_3;
 VAR_8->block_len = VAR_3;
 FUNC_8(&VAR_6->lock);
 VAR_10 = FUNC_0(VAR_6, VAR_8, 0);
 FUNC_9(&VAR_6->lock);
 if (VAR_10 < 0) {
  FUNC_6("cannot add extent range [4K, 8K)");
  goto out;
 }
 FUNC_4(VAR_8);

 VAR_8 = FUNC_1();
 if (!VAR_8) {
  FUNC_7(VAR_4);
  VAR_10 = -VAR_1;
  goto out;
 }


 VAR_8->start = 0;
 VAR_8->len = VAR_2;
 VAR_8->block_start = 0;
 VAR_8->block_len = VAR_2;
 FUNC_8(&VAR_6->lock);
 VAR_10 = FUNC_2(VAR_5, VAR_6, &VAR_8, VAR_7, VAR_9);
 FUNC_9(&VAR_6->lock);
 if (VAR_10) {
  FUNC_6("case3 [0x%llx 0x%llx): ret %d",
    VAR_7, VAR_7 + VAR_9, VAR_10);
  goto out;
 }




 if (VAR_8 &&
     (VAR_7 < VAR_8->start || VAR_7 + VAR_9 > FUNC_3(VAR_8) ||
      VAR_8->start != VAR_8->block_start || VAR_8->len != VAR_8->block_len)) {
  FUNC_6(
"case3 [0x%llx 0x%llx): ret %d em (start 0x%llx len 0x%llx block_start 0x%llx block_len 0x%llx)",
    VAR_7, VAR_7 + VAR_9, VAR_10, VAR_8->start, VAR_8->len,
    VAR_8->block_start, VAR_8->block_len);
  VAR_10 = -VAR_0;
 }
 FUNC_4(VAR_8);
out:
 FUNC_5(VAR_6);

 return VAR_10;
}
