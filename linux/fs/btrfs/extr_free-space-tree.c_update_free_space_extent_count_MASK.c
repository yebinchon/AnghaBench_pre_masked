
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_path {int * nodes; } ;
struct btrfs_free_space_info {int dummy; } ;
struct btrfs_block_group_cache {scalar_t__ bitmap_high_thresh; scalar_t__ bitmap_low_thresh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_free_space_info*) ;
 int FUNC_1 (struct btrfs_free_space_info*) ;
 scalar_t__ FUNC_2 (int ,struct btrfs_free_space_info*) ;
 scalar_t__ FUNC_3 (int ,struct btrfs_free_space_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (int ,struct btrfs_free_space_info*,scalar_t__) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 struct btrfs_free_space_info* FUNC_9 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,int) ;

__attribute__((used)) static int FUNC_10(struct btrfs_trans_handle *VAR_1,
       struct btrfs_block_group_cache *VAR_2,
       struct btrfs_path *VAR_3,
       int VAR_4)
{
 struct btrfs_free_space_info *VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;

 if (VAR_4 == 0)
  return 0;

 VAR_5 = FUNC_9(VAR_1, VAR_2, VAR_3, 1);
 if (FUNC_0(VAR_5)) {
  VAR_8 = FUNC_1(VAR_5);
  goto out;
 }
 VAR_6 = FUNC_3(VAR_3->nodes[0], VAR_5);
 VAR_7 = FUNC_2(VAR_3->nodes[0], VAR_5);

 VAR_7 += VAR_4;
 FUNC_6(VAR_3->nodes[0], VAR_5, VAR_7);
 FUNC_4(VAR_3->nodes[0]);
 FUNC_5(VAR_3);

 if (!(VAR_6 & VAR_0) &&
     VAR_7 > VAR_2->bitmap_high_thresh) {
  VAR_8 = FUNC_7(VAR_1, VAR_2, VAR_3);
 } else if ((VAR_6 & VAR_0) &&
     VAR_7 < VAR_2->bitmap_low_thresh) {
  VAR_8 = FUNC_8(VAR_1, VAR_2, VAR_3);
 }

out:
 return VAR_8;
}
