
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_super_block {int dummy; } ;
struct btrfs_root {int node; } ;
struct btrfs_fs_info {int sb; scalar_t__ generation; struct btrfs_super_block* super_copy; } ;
struct btrfs_fs_devices {scalar_t__ rw_devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_root*,struct btrfs_fs_info*,int ) ;
 struct btrfs_root* FUNC_3 (struct btrfs_fs_info*,int ) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_fs_info*,char*) ;
 int FUNC_6 (struct btrfs_fs_info*,int,char*) ;
 int FUNC_7 (struct btrfs_root*) ;
 int FUNC_8 (struct btrfs_super_block*) ;
 int FUNC_9 (struct btrfs_super_block*) ;
 int FUNC_10 (struct btrfs_fs_info*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct btrfs_root*) ;
 int FUNC_14 (struct btrfs_fs_info*,int ,scalar_t__,int,int *) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct btrfs_fs_info *VAR_4,
       struct btrfs_fs_devices *VAR_5)
{
 int VAR_6;
 struct btrfs_root *VAR_7;
 struct btrfs_super_block *VAR_8 = VAR_4->super_copy;
 u64 VAR_9 = FUNC_8(VAR_8);
 int VAR_10 = FUNC_9(VAR_8);

 if (VAR_5->rw_devices == 0) {
  FUNC_10(VAR_4, "log replay required on RO media");
  return -VAR_1;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_2(VAR_7, VAR_4, VAR_0);

 VAR_7->node = FUNC_14(VAR_4, VAR_9,
           VAR_4->generation + 1,
           VAR_10, ((void*)0));
 if (FUNC_0(VAR_7->node)) {
  FUNC_10(VAR_4, "failed to read log tree");
  VAR_6 = FUNC_1(VAR_7->node);
  FUNC_13(VAR_7);
  return VAR_6;
 } else if (!FUNC_11(VAR_7->node)) {
  FUNC_5(VAR_4, "failed to read log tree");
  FUNC_12(VAR_7->node);
  FUNC_13(VAR_7);
  return -VAR_1;
 }

 VAR_6 = FUNC_7(VAR_7);
 if (VAR_6) {
  FUNC_6(VAR_4, VAR_6,
          "Failed to recover log tree");
  FUNC_12(VAR_7->node);
  FUNC_13(VAR_7);
  return VAR_6;
 }

 if (FUNC_15(VAR_4->sb)) {
  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
