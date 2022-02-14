
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int subid_le ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ offset; scalar_t__ objectid; } ;
struct btrfs_fs_info {struct btrfs_root* uuid_root; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_path*,int) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int) ;
 unsigned long FUNC_5 (struct extent_buffer*,int) ;
 int FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (int *,int ,struct btrfs_key*) ;
 int FUNC_9 (struct btrfs_root*,int *,int ,int ) ;
 int FUNC_10 (struct btrfs_fs_info*,char*,int,unsigned long long,unsigned long long,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct extent_buffer*,int *,unsigned long,int) ;

int FUNC_13(struct btrfs_trans_handle *VAR_4, u8 *VAR_5, u8 VAR_6,
   u64 VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_4->fs_info;
 struct btrfs_root *VAR_9 = VAR_8->uuid_root;
 int VAR_10;
 struct btrfs_path *VAR_11 = ((void*)0);
 struct btrfs_key VAR_12;
 struct extent_buffer *VAR_13;
 int VAR_14;
 unsigned long VAR_15;
 __le64 VAR_16;

 VAR_10 = FUNC_9(VAR_9, VAR_5, VAR_6, VAR_7);
 if (VAR_10 != -VAR_2)
  return VAR_10;

 if (FUNC_0(!VAR_9)) {
  VAR_10 = -VAR_1;
  goto out;
 }

 FUNC_8(VAR_5, VAR_6, &VAR_12);

 VAR_11 = FUNC_1();
 if (!VAR_11) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_4, VAR_9, VAR_11, &VAR_12,
          sizeof(VAR_16));
 if (VAR_10 >= 0) {

  VAR_13 = VAR_11->nodes[0];
  VAR_14 = VAR_11->slots[0];
  VAR_15 = FUNC_5(VAR_13, VAR_14);
 } else if (VAR_10 == -VAR_0) {




  FUNC_2(VAR_11, sizeof(VAR_16));
  VAR_13 = VAR_11->nodes[0];
  VAR_14 = VAR_11->slots[0];
  VAR_15 = FUNC_5(VAR_13, VAR_14);
  VAR_15 += FUNC_6(VAR_13, VAR_14) - sizeof(VAR_16);
 } else {
  FUNC_10(VAR_8,
      "insert uuid item failed %d (0x%016llx, 0x%016llx) type %u!",
      VAR_10, (unsigned long long)VAR_12.objectid,
      (unsigned long long)VAR_12.offset, VAR_6);
  goto out;
 }

 VAR_10 = 0;
 VAR_16 = FUNC_11(VAR_7);
 FUNC_12(VAR_13, &VAR_16, VAR_15, sizeof(VAR_16));
 FUNC_7(VAR_13);

out:
 FUNC_3(VAR_11);
 return VAR_10;
}
