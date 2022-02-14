
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int subid ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {struct btrfs_root* uuid_root; } ;
typedef int read_subid ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_path*) ;
 unsigned long FUNC_5 (struct extent_buffer*,int) ;
 int FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_8 (struct btrfs_path*,int,int) ;
 int FUNC_9 (int *,int ,struct btrfs_key*) ;
 int FUNC_10 (struct btrfs_fs_info*,char*,unsigned long) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct extent_buffer*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_13 (struct extent_buffer*,int *,unsigned long,int) ;

int FUNC_14(struct btrfs_trans_handle *VAR_3, u8 *VAR_4, u8 VAR_5,
   u64 VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_3->fs_info;
 struct btrfs_root *VAR_8 = VAR_7->uuid_root;
 int VAR_9;
 struct btrfs_path *VAR_10 = ((void*)0);
 struct btrfs_key VAR_11;
 struct extent_buffer *VAR_12;
 int VAR_13;
 unsigned long VAR_14;
 u32 VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;

 if (FUNC_1(!VAR_8)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 FUNC_9(VAR_4, VAR_5, &VAR_11);

 VAR_10 = FUNC_2();
 if (!VAR_10) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_9 = FUNC_7(VAR_3, VAR_8, &VAR_11, VAR_10, -1, 1);
 if (VAR_9 < 0) {
  FUNC_10(VAR_7, "error %d while searching for uuid item!",
      VAR_9);
  goto out;
 }
 if (VAR_9 > 0) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_12 = VAR_10->nodes[0];
 VAR_13 = VAR_10->slots[0];
 VAR_14 = FUNC_5(VAR_12, VAR_13);
 VAR_15 = FUNC_6(VAR_12, VAR_13);
 if (!FUNC_0(VAR_15, sizeof(u64))) {
  FUNC_10(VAR_7, "uuid item with illegal size %lu!",
      (unsigned long)VAR_15);
  VAR_9 = -VAR_1;
  goto out;
 }
 while (VAR_15) {
  __le64 VAR_19;

  FUNC_13(VAR_12, &VAR_19, VAR_14, sizeof(VAR_19));
  if (FUNC_11(VAR_19) == VAR_6)
   break;
  VAR_14 += sizeof(VAR_19);
  VAR_15 -= sizeof(VAR_19);
 }

 if (!VAR_15) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_15 = FUNC_6(VAR_12, VAR_13);
 if (VAR_15 == sizeof(VAR_6)) {
  VAR_9 = FUNC_3(VAR_3, VAR_8, VAR_10);
  goto out;
 }

 VAR_16 = VAR_14;
 VAR_17 = VAR_14 + sizeof(VAR_6);
 VAR_18 = VAR_15 - (VAR_17 - FUNC_5(VAR_12, VAR_13));
 FUNC_12(VAR_12, VAR_16, VAR_17, VAR_18);
 FUNC_8(VAR_10, VAR_15 - sizeof(VAR_6), 1);

out:
 FUNC_4(VAR_10);
 return VAR_9;
}
