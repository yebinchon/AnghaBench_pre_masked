
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_trim_range {int list; scalar_t__ bytes; scalar_t__ start; } ;
struct btrfs_free_space_ctl {scalar_t__ free_space; int unit; int cache_writeout_mutex; int trimming_ranges; int tree_lock; } ;
struct btrfs_free_space {scalar_t__ bytes; } ;
struct btrfs_block_group_cache {struct btrfs_free_space_ctl* free_space_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct btrfs_block_group_cache*,scalar_t__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct btrfs_trim_range*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct btrfs_free_space_ctl*,scalar_t__) ;
 int FUNC_10 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct btrfs_free_space* FUNC_13 (struct btrfs_free_space_ctl*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_14(struct btrfs_block_group_cache *VAR_3,
   u64 *VAR_4, u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct btrfs_free_space_ctl *VAR_8 = VAR_3->free_space_ctl;
 struct btrfs_free_space *VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 u64 VAR_12;
 u64 VAR_13 = FUNC_9(VAR_8, VAR_5);

 while (VAR_13 < VAR_6) {
  bool VAR_14 = 0;
  struct btrfs_trim_range VAR_15;

  FUNC_7(&VAR_8->cache_writeout_mutex);
  FUNC_11(&VAR_8->tree_lock);

  if (VAR_8->free_space < VAR_7) {
   FUNC_12(&VAR_8->tree_lock);
   FUNC_8(&VAR_8->cache_writeout_mutex);
   break;
  }

  VAR_9 = FUNC_13(VAR_8, VAR_13, 1, 0);
  if (!VAR_9) {
   FUNC_12(&VAR_8->tree_lock);
   FUNC_8(&VAR_8->cache_writeout_mutex);
   VAR_14 = 1;
   goto next;
  }

  VAR_12 = VAR_7;
  VAR_11 = FUNC_10(VAR_8, VAR_9, &VAR_5, &VAR_12, 0);
  if (VAR_11 || VAR_5 >= VAR_6) {
   FUNC_12(&VAR_8->tree_lock);
   FUNC_8(&VAR_8->cache_writeout_mutex);
   VAR_14 = 1;
   goto next;
  }

  VAR_12 = FUNC_6(VAR_12, VAR_6 - VAR_5);
  if (VAR_12 < VAR_7) {
   FUNC_12(&VAR_8->tree_lock);
   FUNC_8(&VAR_8->cache_writeout_mutex);
   goto next;
  }

  FUNC_0(VAR_8, VAR_9, VAR_5, VAR_12);
  if (VAR_9->bytes == 0)
   FUNC_4(VAR_8, VAR_9);

  FUNC_12(&VAR_8->tree_lock);
  VAR_15.start = VAR_5;
  VAR_15.bytes = VAR_12;
  FUNC_5(&VAR_15.list, &VAR_8->trimming_ranges);
  FUNC_8(&VAR_8->cache_writeout_mutex);

  VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_12,
      VAR_5, VAR_12, &VAR_15);
  if (VAR_10)
   break;
next:
  if (VAR_14) {
   VAR_13 += VAR_0 * VAR_8->unit;
  } else {
   VAR_5 += VAR_12;
   if (VAR_5 >= VAR_13 + VAR_0 * VAR_8->unit)
    VAR_13 += VAR_0 * VAR_8->unit;
  }

  if (FUNC_3(VAR_2)) {
   VAR_10 = -VAR_1;
   break;
  }

  FUNC_1();
 }

 return VAR_10;
}
