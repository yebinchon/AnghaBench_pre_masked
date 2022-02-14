
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; int len; int block_len; scalar_t__ block_start; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
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

__attribute__((used)) static int FUNC_10(struct btrfs_fs_info *VAR_8,
  struct extent_map_tree *VAR_9, u64 VAR_10)
{
 struct extent_map *VAR_11;
 u64 VAR_12 = VAR_5;
 int VAR_13;

 VAR_11 = FUNC_1();
 if (!VAR_11) {
  FUNC_7(VAR_7);
  return -VAR_1;
 }


 VAR_11->start = 0;
 VAR_11->len = VAR_6;
 VAR_11->block_start = 0;
 VAR_11->block_len = VAR_6;
 FUNC_8(&VAR_9->lock);
 VAR_13 = FUNC_0(VAR_9, VAR_11, 0);
 FUNC_9(&VAR_9->lock);
 if (VAR_13 < 0) {
  FUNC_6("cannot add extent range [0, 8K)");
  goto out;
 }
 FUNC_4(VAR_11);

 VAR_11 = FUNC_1();
 if (!VAR_11) {
  FUNC_7(VAR_7);
  VAR_13 = -VAR_1;
  goto out;
 }


 VAR_11->start = VAR_6;
 VAR_11->len = 24 * VAR_3;
 VAR_11->block_start = VAR_2;
 VAR_11->block_len = 24 * VAR_3;
 FUNC_8(&VAR_9->lock);
 VAR_13 = FUNC_0(VAR_9, VAR_11, 0);
 FUNC_9(&VAR_9->lock);
 if (VAR_13 < 0) {
  FUNC_6("cannot add extent range [8K, 32K)");
  goto out;
 }
 FUNC_4(VAR_11);

 VAR_11 = FUNC_1();
 if (!VAR_11) {
  FUNC_7(VAR_7);
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_11->start = 0;
 VAR_11->len = VAR_4;
 VAR_11->block_start = 0;
 VAR_11->block_len = VAR_4;
 FUNC_8(&VAR_9->lock);
 VAR_13 = FUNC_2(VAR_8, VAR_9, &VAR_11, VAR_10, VAR_12);
 FUNC_9(&VAR_9->lock);
 if (VAR_13) {
  FUNC_6("case4 [0x%llx 0x%llx): ret %d",
    VAR_10, VAR_12, VAR_13);
  goto out;
 }
 if (VAR_11 && (VAR_10 < VAR_11->start || VAR_10 + VAR_12 > FUNC_3(VAR_11))) {
  FUNC_6(
"case4 [0x%llx 0x%llx): ret %d, added wrong em (start 0x%llx len 0x%llx block_start 0x%llx block_len 0x%llx)",
    VAR_10, VAR_12, VAR_13, VAR_11->start, VAR_11->len, VAR_11->block_start,
    VAR_11->block_len);
  VAR_13 = -VAR_0;
 }
 FUNC_4(VAR_11);
out:
 FUNC_5(VAR_9);

 return VAR_13;
}
