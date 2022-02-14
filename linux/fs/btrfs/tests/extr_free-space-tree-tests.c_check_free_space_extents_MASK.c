
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct free_space_extent {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_path {int * nodes; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_free_space_info {int dummy; } ;
struct btrfs_block_group_cache {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_free_space_info*) ;
 int FUNC_1 (struct btrfs_free_space_info*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_fs_info*,struct btrfs_block_group_cache*,struct btrfs_path*,struct free_space_extent const* const,unsigned int) ;
 int FUNC_3 (int ,struct btrfs_free_space_info*) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 struct btrfs_free_space_info* FUNC_7 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct btrfs_trans_handle *VAR_1,
        struct btrfs_fs_info *VAR_2,
        struct btrfs_block_group_cache *VAR_3,
        struct btrfs_path *VAR_4,
        const struct free_space_extent * const VAR_5,
        unsigned int VAR_6)
{
 struct btrfs_free_space_info *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(VAR_1, VAR_3, VAR_4, 0);
 if (FUNC_0(VAR_7)) {
  FUNC_8("could not find free space info");
  FUNC_4(VAR_4);
  return FUNC_1(VAR_7);
 }
 VAR_8 = FUNC_3(VAR_4->nodes[0], VAR_7);
 FUNC_4(VAR_4);

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6);
 if (VAR_9)
  return VAR_9;


 if (VAR_8 & VAR_0) {
  VAR_9 = FUNC_6(VAR_1, VAR_3, VAR_4);
  if (VAR_9) {
   FUNC_8("could not convert to extents");
   return VAR_9;
  }
 } else {
  VAR_9 = FUNC_5(VAR_1, VAR_3, VAR_4);
  if (VAR_9) {
   FUNC_8("could not convert to bitmaps");
   return VAR_9;
  }
 }
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6);
}
