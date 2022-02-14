
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int dummy; } ;
typedef int data ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_path*) ;
 unsigned long FUNC_4 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_5 (struct extent_buffer*,int) ;
 int FUNC_6 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_7 (int *,int ,struct btrfs_key*) ;
 int FUNC_8 (int ,char*,unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct extent_buffer*,int *,unsigned long,int) ;

__attribute__((used)) static int FUNC_11(struct btrfs_root *VAR_2, u8 *VAR_3,
      u8 VAR_4, u64 VAR_5)
{
 int VAR_6;
 struct btrfs_path *VAR_7 = ((void*)0);
 struct extent_buffer *VAR_8;
 int VAR_9;
 u32 VAR_10;
 unsigned long VAR_11;
 struct btrfs_key VAR_12;

 if (FUNC_1(!VAR_2)) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_2();
 if (!VAR_7) {
  VAR_6 = -VAR_1;
  goto out;
 }

 FUNC_7(VAR_3, VAR_4, &VAR_12);
 VAR_6 = FUNC_6(((void*)0), VAR_2, &VAR_12, VAR_7, 0, 0);
 if (VAR_6 < 0) {
  goto out;
 } else if (VAR_6 > 0) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_8 = VAR_7->nodes[0];
 VAR_9 = VAR_7->slots[0];
 VAR_10 = FUNC_5(VAR_8, VAR_9);
 VAR_11 = FUNC_4(VAR_8, VAR_9);
 VAR_6 = -VAR_0;

 if (!FUNC_0(VAR_10, sizeof(u64))) {
  FUNC_8(VAR_2->fs_info,
      "uuid item with illegal size %lu!",
      (unsigned long)VAR_10);
  goto out;
 }
 while (VAR_10) {
  __le64 VAR_13;

  FUNC_10(VAR_8, &VAR_13, VAR_11, sizeof(VAR_13));
  if (FUNC_9(VAR_13) == VAR_5) {
   VAR_6 = 0;
   break;
  }
  VAR_11 += sizeof(VAR_13);
  VAR_10 -= sizeof(VAR_13);
 }

out:
 FUNC_3(VAR_7);
 return VAR_6;
}
