
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct extent_map {scalar_t__ block_start; int start; int len; scalar_t__ flags; int node; } ;
struct btrfs_root {scalar_t__ block_start; int start; int len; scalar_t__ flags; int node; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ offset; int objectid; int type; } ;
struct TYPE_5__ {struct extent_map* root; TYPE_1__ location; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct extent_map*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct btrfs_fs_info*,int) ;
 struct btrfs_fs_info* FUNC_3 (int,int) ;
 struct extent_map* FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_fs_info*) ;
 int FUNC_6 (struct extent_map*) ;
 struct extent_map* FUNC_7 (TYPE_2__*,int *,int ,int,int,int ) ;
 struct inode* FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct extent_map*) ;
 int FUNC_12 (struct extent_map*,int,int,int,int ,int,int,int ,int ,int) ;
 int FUNC_13 (struct extent_map*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_18(u32 VAR_10, u32 VAR_11)
{
 struct btrfs_fs_info *VAR_12 = ((void*)0);
 struct inode *VAR_13 = ((void*)0);
 struct btrfs_root *VAR_14 = ((void*)0);
 struct extent_map *VAR_15 = ((void*)0);
 int VAR_16 = -VAR_4;

 FUNC_16("running hole first btrfs_get_extent test");

 VAR_13 = FUNC_8();
 if (!VAR_13) {
  FUNC_17(VAR_7);
  return VAR_16;
 }

 FUNC_0(VAR_13)->location.type = VAR_2;
 FUNC_0(VAR_13)->location.objectid = VAR_1;
 FUNC_0(VAR_13)->location.offset = 0;

 VAR_12 = FUNC_3(VAR_11, VAR_10);
 if (!VAR_12) {
  FUNC_17(VAR_6);
  goto out;
 }

 VAR_14 = FUNC_4(VAR_12);
 if (FUNC_1(VAR_14)) {
  FUNC_17(VAR_8);
  goto out;
 }

 VAR_14->node = FUNC_2(VAR_12, VAR_11);
 if (!VAR_14->node) {
  FUNC_17(VAR_8);
  goto out;
 }

 FUNC_10(VAR_14->node, 0);
 FUNC_9(VAR_14->node, 0);
 FUNC_0(VAR_13)->root = VAR_14;
 VAR_16 = -VAR_3;





 FUNC_13(VAR_14);
 FUNC_12(VAR_14, VAR_10, VAR_10, VAR_10, 0, VAR_10,
        VAR_10, VAR_0, 0, 1);
 VAR_15 = FUNC_7(FUNC_0(VAR_13), ((void*)0), 0, 0, 2 * VAR_10, 0);
 if (FUNC_1(VAR_15)) {
  FUNC_15("got an error when we shouldn't have");
  goto out;
 }
 if (VAR_15->block_start != VAR_5) {
  FUNC_15("expected a hole, got %llu", VAR_15->block_start);
  goto out;
 }
 if (VAR_15->start != 0 || VAR_15->len != VAR_10) {
  FUNC_15(
 "unexpected extent wanted start 0 len %u, got start %llu len %llu",
   VAR_10, VAR_15->start, VAR_15->len);
  goto out;
 }
 if (VAR_15->flags != VAR_9) {
  FUNC_15("wrong flags, wanted %lu, have %lu", VAR_9,
    VAR_15->flags);
  goto out;
 }
 FUNC_11(VAR_15);

 VAR_15 = FUNC_7(FUNC_0(VAR_13), ((void*)0), 0, VAR_10,
   2 * VAR_10, 0);
 if (FUNC_1(VAR_15)) {
  FUNC_15("got an error when we shouldn't have");
  goto out;
 }
 if (VAR_15->block_start != VAR_10) {
  FUNC_15("expected a real extent, got %llu", VAR_15->block_start);
  goto out;
 }
 if (VAR_15->start != VAR_10 || VAR_15->len != VAR_10) {
  FUNC_15(
 "unexpected extent wanted start %u len %u, got start %llu len %llu",
   VAR_10, VAR_10, VAR_15->start, VAR_15->len);
  goto out;
 }
 if (VAR_15->flags != 0) {
  FUNC_15("unexpected flags set, wanted 0 got %lu",
    VAR_15->flags);
  goto out;
 }
 VAR_16 = 0;
out:
 if (!FUNC_1(VAR_15))
  FUNC_11(VAR_15);
 FUNC_14(VAR_13);
 FUNC_6(VAR_14);
 FUNC_5(VAR_12);
 return VAR_16;
}
