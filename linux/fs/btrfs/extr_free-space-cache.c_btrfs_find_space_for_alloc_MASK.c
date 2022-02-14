
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_free_space_ctl {int tree_lock; } ;
struct btrfs_free_space {scalar_t__ bytes; scalar_t__ offset; scalar_t__ bitmap; } ;
struct btrfs_block_group_cache {int fs_info; int full_stripe_len; struct btrfs_free_space_ctl* free_space_ctl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct btrfs_free_space_ctl*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 struct btrfs_free_space* FUNC_3 (struct btrfs_free_space_ctl*,scalar_t__*,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_4 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 int FUNC_5 (int ,struct btrfs_free_space*) ;
 int FUNC_6 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;

u64 FUNC_10(struct btrfs_block_group_cache *VAR_1,
          u64 VAR_2, u64 VAR_3, u64 VAR_4,
          u64 *VAR_5)
{
 struct btrfs_free_space_ctl *VAR_6 = VAR_1->free_space_ctl;
 struct btrfs_free_space *VAR_7 = ((void*)0);
 u64 VAR_8 = VAR_3 + VAR_4;
 u64 VAR_9 = 0;
 u64 VAR_10 = 0;
 u64 VAR_11 = 0;

 FUNC_7(&VAR_6->tree_lock);
 VAR_7 = FUNC_3(VAR_6, &VAR_2, &VAR_8,
    VAR_1->full_stripe_len, VAR_5);
 if (!VAR_7)
  goto out;

 VAR_9 = VAR_2;
 if (VAR_7->bitmap) {
  FUNC_2(VAR_6, VAR_7, VAR_2, VAR_3);
  if (!VAR_7->bytes)
   FUNC_4(VAR_6, VAR_7);
 } else {
  FUNC_9(VAR_6, VAR_7);
  VAR_11 = VAR_2 - VAR_7->offset;
  VAR_10 = VAR_7->offset;

  VAR_7->offset = VAR_2 + VAR_3;
  FUNC_0(VAR_7->bytes < VAR_3 + VAR_11);

  VAR_7->bytes -= VAR_3 + VAR_11;
  if (!VAR_7->bytes)
   FUNC_5(VAR_0, VAR_7);
  else
   FUNC_6(VAR_6, VAR_7);
 }
out:
 FUNC_8(&VAR_6->tree_lock);

 if (VAR_11)
  FUNC_1(VAR_1->fs_info, VAR_6,
           VAR_10, VAR_11);
 return VAR_9;
}
