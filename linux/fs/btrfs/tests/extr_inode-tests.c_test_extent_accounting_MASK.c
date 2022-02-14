
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {int outstanding_extents; int io_tree; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct btrfs_root*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct btrfs_fs_info* FUNC_2 (int,int) ;
 struct btrfs_root* FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_root*) ;
 struct inode* FUNC_6 () ;
 int FUNC_7 (struct inode*,int,int,int ,int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int,int,int,int ,int ,int *) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(u32 VAR_8, u32 VAR_9)
{
 struct btrfs_fs_info *VAR_10 = ((void*)0);
 struct inode *VAR_11 = ((void*)0);
 struct btrfs_root *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_2;

 FUNC_12("running outstanding_extents tests");

 VAR_11 = FUNC_6();
 if (!VAR_11) {
  FUNC_13(VAR_6);
  return VAR_13;
 }

 VAR_10 = FUNC_2(VAR_9, VAR_8);
 if (!VAR_10) {
  FUNC_13(VAR_5);
  goto out;
 }

 VAR_12 = FUNC_3(VAR_10);
 if (FUNC_1(VAR_12)) {
  FUNC_13(VAR_7);
  goto out;
 }

 FUNC_0(VAR_11)->root = VAR_12;
 FUNC_8(VAR_11);


 VAR_13 = FUNC_7(VAR_11, 0, VAR_0 - 1, 0,
     ((void*)0));
 if (VAR_13) {
  FUNC_11("btrfs_set_extent_delalloc returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents != 1) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 1, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }


 VAR_13 = FUNC_7(VAR_11, VAR_0,
     VAR_0 + VAR_8 - 1,
     0, ((void*)0));
 if (VAR_13) {
  FUNC_11("btrfs_set_extent_delalloc returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents != 2) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 2, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }


 VAR_13 = FUNC_9(&FUNC_0(VAR_11)->io_tree,
          VAR_0 >> 1,
          (VAR_0 >> 1) + VAR_8 - 1,
          VAR_3 | VAR_4, 0, 0, ((void*)0));
 if (VAR_13) {
  FUNC_11("clear_extent_bit returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents != 2) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 2, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }


 VAR_13 = FUNC_7(VAR_11, VAR_0 >> 1,
     (VAR_0 >> 1)
     + VAR_8 - 1,
     0, ((void*)0));
 if (VAR_13) {
  FUNC_11("btrfs_set_extent_delalloc returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents != 2) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 2, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }




 VAR_13 = FUNC_7(VAR_11,
   VAR_0 + 2 * VAR_8,
   (VAR_0 << 1) + 3 * VAR_8 - 1,
   0, ((void*)0));
 if (VAR_13) {
  FUNC_11("btrfs_set_extent_delalloc returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents != 4) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 4, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }




 VAR_13 = FUNC_7(VAR_11,
   VAR_0 + VAR_8,
   VAR_0 + 2 * VAR_8 - 1, 0, ((void*)0));
 if (VAR_13) {
  FUNC_11("btrfs_set_extent_delalloc returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents != 3) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 3, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }


 VAR_13 = FUNC_9(&FUNC_0(VAR_11)->io_tree,
          VAR_0 + VAR_8,
          VAR_0 + 2 * VAR_8 - 1,
          VAR_3 | VAR_4, 0, 0, ((void*)0));
 if (VAR_13) {
  FUNC_11("clear_extent_bit returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents != 4) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 4, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }





 VAR_13 = FUNC_7(VAR_11,
   VAR_0 + VAR_8,
   VAR_0 + 2 * VAR_8 - 1, 0, ((void*)0));
 if (VAR_13) {
  FUNC_11("btrfs_set_extent_delalloc returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents != 3) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 3, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }


 VAR_13 = FUNC_9(&FUNC_0(VAR_11)->io_tree, 0, (u64)-1,
          VAR_3 | VAR_4, 0, 0, ((void*)0));
 if (VAR_13) {
  FUNC_11("clear_extent_bit returned %d", VAR_13);
  goto out;
 }
 if (FUNC_0(VAR_11)->outstanding_extents) {
  VAR_13 = -VAR_1;
  FUNC_11("miscount, wanted 0, got %u",
    FUNC_0(VAR_11)->outstanding_extents);
  goto out;
 }
 VAR_13 = 0;
out:
 if (VAR_13)
  FUNC_9(&FUNC_0(VAR_11)->io_tree, 0, (u64)-1,
     VAR_3 | VAR_4, 0, 0, ((void*)0));
 FUNC_10(VAR_11);
 FUNC_5(VAR_12);
 FUNC_4(VAR_10);
 return VAR_13;
}
