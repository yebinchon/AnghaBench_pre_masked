
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ block_start; scalar_t__ block_len; void* len; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct extent_map_tree*,struct extent_map*,int ) ;
 struct extent_map* FUNC_1 () ;
 int FUNC_2 (struct btrfs_fs_info*,struct extent_map_tree*,struct extent_map**,scalar_t__,void*) ;
 scalar_t__ FUNC_3 (struct extent_map*) ;
 int FUNC_4 (struct extent_map*) ;
 int FUNC_5 (struct extent_map_tree*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct btrfs_fs_info *VAR_6,
  struct extent_map_tree *VAR_7)
{
 struct extent_map *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1();
 if (!VAR_8) {
  FUNC_7(VAR_5);
  return -VAR_1;
 }


 VAR_8->start = 0;
 VAR_8->len = VAR_3;
 VAR_8->block_start = VAR_2;
 VAR_8->block_len = (u64)-1;
 FUNC_8(&VAR_7->lock);
 VAR_9 = FUNC_0(VAR_7, VAR_8, 0);
 FUNC_9(&VAR_7->lock);
 if (VAR_9 < 0) {
  FUNC_6("cannot add extent range [0, 1K)");
  goto out;
 }
 FUNC_4(VAR_8);


 VAR_8 = FUNC_1();
 if (!VAR_8) {
  FUNC_7(VAR_5);
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_8->start = VAR_4;
 VAR_8->len = VAR_4;
 VAR_8->block_start = VAR_4;
 VAR_8->block_len = VAR_4;
 FUNC_8(&VAR_7->lock);
 VAR_9 = FUNC_0(VAR_7, VAR_8, 0);
 FUNC_9(&VAR_7->lock);
 if (VAR_9 < 0) {
  FUNC_6("cannot add extent range [4K, 8K)");
  goto out;
 }
 FUNC_4(VAR_8);

 VAR_8 = FUNC_1();
 if (!VAR_8) {
  FUNC_7(VAR_5);
  VAR_9 = -VAR_1;
  goto out;
 }


 VAR_8->start = 0;
 VAR_8->len = VAR_3;
 VAR_8->block_start = VAR_2;
 VAR_8->block_len = (u64)-1;
 FUNC_8(&VAR_7->lock);
 VAR_9 = FUNC_2(VAR_6, VAR_7, &VAR_8, VAR_8->start, VAR_8->len);
 FUNC_9(&VAR_7->lock);
 if (VAR_9) {
  FUNC_6("case2 [0 1K]: ret %d", VAR_9);
  goto out;
 }
 if (VAR_8 &&
     (VAR_8->start != 0 || FUNC_3(VAR_8) != VAR_3 ||
      VAR_8->block_start != VAR_2 || VAR_8->block_len != (u64)-1)) {
  FUNC_6(
"case2 [0 1K]: ret %d return a wrong em (start %llu len %llu block_start %llu block_len %llu",
    VAR_9, VAR_8->start, VAR_8->len, VAR_8->block_start,
    VAR_8->block_len);
  VAR_9 = -VAR_0;
 }
 FUNC_4(VAR_8);
out:
 FUNC_5(VAR_7);

 return VAR_9;
}
