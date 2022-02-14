
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; int offset; } ;
struct btrfs_item {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct btrfs_root*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct extent_buffer* FUNC_2 (struct btrfs_fs_info*,scalar_t__) ;
 struct btrfs_fs_info* FUNC_3 (scalar_t__,scalar_t__) ;
 struct btrfs_root* FUNC_4 (struct btrfs_fs_info*) ;
 struct btrfs_path* FUNC_5 () ;
 int FUNC_6 (struct btrfs_fs_info*) ;
 int FUNC_7 (struct btrfs_root*) ;
 int FUNC_8 (struct btrfs_path*) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_key*,int) ;
 struct btrfs_item* FUNC_10 (int) ;
 int FUNC_11 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_12 (struct extent_buffer*,struct btrfs_item*) ;
 int FUNC_13 (int *,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int) ;
 scalar_t__ FUNC_14 (char*,char*,scalar_t__) ;
 int FUNC_15 (struct extent_buffer*,char*,int ,scalar_t__) ;
 int FUNC_16 (struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,scalar_t__*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct extent_buffer*,char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_22(u32 VAR_7, u32 VAR_8)
{
 struct btrfs_fs_info *VAR_9;
 struct btrfs_path *VAR_10 = ((void*)0);
 struct btrfs_root *VAR_11 = ((void*)0);
 struct extent_buffer *VAR_12;
 struct btrfs_item *VAR_13;
 char *VAR_14 = "mary had a little lamb";
 char *VAR_15 = "mary had a little";
 char *VAR_16 = " lamb";
 char *VAR_17 = "mary";
 char *VAR_18 = " had a little";
 char VAR_19[32];
 struct btrfs_key VAR_20;
 u32 VAR_21 = FUNC_17(VAR_14);
 int VAR_22 = 0;

 FUNC_19("running btrfs_split_item tests");

 VAR_9 = FUNC_3(VAR_8, VAR_7);
 if (!VAR_9) {
  FUNC_20(VAR_4);
  return -VAR_2;
 }

 VAR_11 = FUNC_4(VAR_9);
 if (FUNC_0(VAR_11)) {
  FUNC_20(VAR_6);
  VAR_22 = FUNC_1(VAR_11);
  goto out;
 }

 VAR_10 = FUNC_5();
 if (!VAR_10) {
  FUNC_20(VAR_5);
  VAR_22 = -VAR_2;
  goto out;
 }

 VAR_10->nodes[0] = VAR_12 = FUNC_2(VAR_9, VAR_8);
 if (!VAR_12) {
  FUNC_20(VAR_3);
  VAR_22 = -VAR_2;
  goto out;
 }
 VAR_10->slots[0] = 0;

 VAR_20.objectid = 0;
 VAR_20.type = VAR_0;
 VAR_20.offset = 0;

 FUNC_16(VAR_11, VAR_10, &VAR_20, &VAR_21, VAR_21,
          VAR_21 + sizeof(struct btrfs_item), 1);
 VAR_13 = FUNC_10(0);
 FUNC_21(VAR_12, VAR_14, FUNC_11(VAR_12, 0),
       VAR_21);

 VAR_20.offset = 3;






 VAR_22 = FUNC_13(((void*)0), VAR_11, VAR_10, &VAR_20, 17);
 if (VAR_22) {
  FUNC_18("split item failed %d", VAR_22);
  goto out;
 }





 FUNC_9(VAR_12, &VAR_20, 0);
 if (VAR_20.objectid != 0 || VAR_20.type != VAR_0 ||
     VAR_20.offset != 0) {
  FUNC_18("invalid key at slot 0");
  VAR_22 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_10(0);
 if (FUNC_12(VAR_12, VAR_13) != FUNC_17(VAR_15)) {
  FUNC_18("invalid len in the first split");
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_15(VAR_12, VAR_19, FUNC_11(VAR_12, 0),
      FUNC_17(VAR_15));
 if (FUNC_14(VAR_19, VAR_15, FUNC_17(VAR_15))) {
  FUNC_18(
"data in the buffer doesn't match what it should in the first split have='%.*s' want '%s'",
    (int)FUNC_17(VAR_15), VAR_19, VAR_15);
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_9(VAR_12, &VAR_20, 1);
 if (VAR_20.objectid != 0 || VAR_20.type != VAR_0 ||
     VAR_20.offset != 3) {
  FUNC_18("invalid key at slot 1");
  VAR_22 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_10(1);
 if (FUNC_12(VAR_12, VAR_13) != FUNC_17(VAR_16)) {
  FUNC_18("invalid len in the second split");
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_15(VAR_12, VAR_19, FUNC_11(VAR_12, 1),
      FUNC_17(VAR_16));
 if (FUNC_14(VAR_19, VAR_16, FUNC_17(VAR_16))) {
  FUNC_18(
 "data in the buffer doesn't match what it should in the second split");
  VAR_22 = -VAR_1;
  goto out;
 }

 VAR_20.offset = 1;

 VAR_22 = FUNC_13(((void*)0), VAR_11, VAR_10, &VAR_20, 4);
 if (VAR_22) {
  FUNC_18("second split item failed %d", VAR_22);
  goto out;
 }

 FUNC_9(VAR_12, &VAR_20, 0);
 if (VAR_20.objectid != 0 || VAR_20.type != VAR_0 ||
     VAR_20.offset != 0) {
  FUNC_18("invalid key at slot 0");
  VAR_22 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_10(0);
 if (FUNC_12(VAR_12, VAR_13) != FUNC_17(VAR_17)) {
  FUNC_18("invalid len in the first split");
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_15(VAR_12, VAR_19, FUNC_11(VAR_12, 0),
      FUNC_17(VAR_17));
 if (FUNC_14(VAR_19, VAR_17, FUNC_17(VAR_17))) {
  FUNC_18(
 "data in the buffer doesn't match what it should in the third split");
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_9(VAR_12, &VAR_20, 1);
 if (VAR_20.objectid != 0 || VAR_20.type != VAR_0 ||
     VAR_20.offset != 1) {
  FUNC_18("invalid key at slot 1");
  VAR_22 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_10(1);
 if (FUNC_12(VAR_12, VAR_13) != FUNC_17(VAR_18)) {
  FUNC_18("invalid len in the second split");
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_15(VAR_12, VAR_19, FUNC_11(VAR_12, 1),
      FUNC_17(VAR_18));
 if (FUNC_14(VAR_19, VAR_18, FUNC_17(VAR_18))) {
  FUNC_18(
 "data in the buffer doesn't match what it should in the fourth split");
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_9(VAR_12, &VAR_20, 2);
 if (VAR_20.objectid != 0 || VAR_20.type != VAR_0 ||
     VAR_20.offset != 3) {
  FUNC_18("invalid key at slot 2");
  VAR_22 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_10(2);
 if (FUNC_12(VAR_12, VAR_13) != FUNC_17(VAR_16)) {
  FUNC_18("invalid len in the second split");
  VAR_22 = -VAR_1;
  goto out;
 }

 FUNC_15(VAR_12, VAR_19, FUNC_11(VAR_12, 2),
      FUNC_17(VAR_16));
 if (FUNC_14(VAR_19, VAR_16, FUNC_17(VAR_16))) {
  FUNC_18(
 "data in the buffer doesn't match what it should in the last chunk");
  VAR_22 = -VAR_1;
  goto out;
 }
out:
 FUNC_8(VAR_10);
 FUNC_7(VAR_11);
 FUNC_6(VAR_9);
 return VAR_22;
}
