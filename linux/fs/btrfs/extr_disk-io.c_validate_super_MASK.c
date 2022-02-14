
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int fsid; } ;
struct btrfs_super_block {TYPE_2__ dev_item; int __unused_leafsize; } ;
struct btrfs_fs_info {TYPE_1__* fs_devices; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfs_chunk {int dummy; } ;
struct TYPE_3__ {int metadata_uuid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int VAR_8 ;
 int FUNC_1 (struct btrfs_fs_info*,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct btrfs_super_block*) ;
 int FUNC_4 (struct btrfs_super_block*) ;
 int FUNC_5 (struct btrfs_super_block*) ;
 int FUNC_6 (struct btrfs_super_block*) ;
 int FUNC_7 (struct btrfs_super_block*) ;
 int FUNC_8 (struct btrfs_super_block*) ;
 int FUNC_9 (struct btrfs_super_block*) ;
 int FUNC_10 (struct btrfs_super_block*) ;
 int FUNC_11 (struct btrfs_super_block*) ;
 int FUNC_12 (struct btrfs_super_block*) ;
 scalar_t__ FUNC_13 (struct btrfs_super_block*) ;
 int FUNC_14 (struct btrfs_super_block*) ;
 unsigned long FUNC_15 (struct btrfs_super_block*) ;
 int FUNC_16 (struct btrfs_super_block*) ;
 int FUNC_17 (struct btrfs_super_block*) ;
 int FUNC_18 (struct btrfs_super_block*) ;
 int FUNC_19 (struct btrfs_super_block*) ;
 int FUNC_20 (struct btrfs_super_block*) ;
 int FUNC_21 (struct btrfs_fs_info*,char*,int,...) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int,int,int ) ;

__attribute__((used)) static int FUNC_25(struct btrfs_fs_info *VAR_9,
       struct btrfs_super_block *VAR_10, int VAR_11)
{
 u64 VAR_12 = FUNC_14(VAR_10);
 u64 VAR_13 = FUNC_18(VAR_10);
 int VAR_14 = 0;

 if (FUNC_13(VAR_10) != VAR_1) {
  FUNC_1(VAR_9, "no valid FS found");
  VAR_14 = -VAR_7;
 }
 if (FUNC_9(VAR_10) & ~VAR_4) {
  FUNC_1(VAR_9, "unrecognized or unsupported super flag: %llu",
    FUNC_9(VAR_10) & ~VAR_4);
  VAR_14 = -VAR_7;
 }
 if (FUNC_17(VAR_10) >= VAR_2) {
  FUNC_1(VAR_9, "tree_root level too big: %d >= %d",
    FUNC_17(VAR_10), VAR_2);
  VAR_14 = -VAR_7;
 }
 if (FUNC_8(VAR_10) >= VAR_2) {
  FUNC_1(VAR_9, "chunk_root level too big: %d >= %d",
    FUNC_8(VAR_10), VAR_2);
  VAR_14 = -VAR_7;
 }
 if (FUNC_12(VAR_10) >= VAR_2) {
  FUNC_1(VAR_9, "log_root level too big: %d >= %d",
    FUNC_12(VAR_10), VAR_2);
  VAR_14 = -VAR_7;
 }





 if (!FUNC_22(VAR_13) || VAR_13 < 4096 ||
     VAR_13 > VAR_3) {
  FUNC_1(VAR_9, "invalid sectorsize %llu", VAR_13);
  VAR_14 = -VAR_7;
 }

 if (VAR_13 != VAR_8) {
  FUNC_1(VAR_9,
   "sectorsize %llu not supported yet, only support %lu",
   VAR_13, VAR_8);
  VAR_14 = -VAR_7;
 }
 if (!FUNC_22(VAR_12) || VAR_12 < VAR_13 ||
     VAR_12 > VAR_3) {
  FUNC_1(VAR_9, "invalid nodesize %llu", VAR_12);
  VAR_14 = -VAR_7;
 }
 if (VAR_12 != FUNC_23(VAR_10->__unused_leafsize)) {
  FUNC_1(VAR_9, "invalid leafsize %u, should be %llu",
     FUNC_23(VAR_10->__unused_leafsize), VAR_12);
  VAR_14 = -VAR_7;
 }


 if (!FUNC_0(FUNC_16(VAR_10), VAR_13)) {
  FUNC_21(VAR_9, "tree_root block unaligned: %llu",
      FUNC_16(VAR_10));
  VAR_14 = -VAR_7;
 }
 if (!FUNC_0(FUNC_6(VAR_10), VAR_13)) {
  FUNC_21(VAR_9, "chunk_root block unaligned: %llu",
      FUNC_6(VAR_10));
  VAR_14 = -VAR_7;
 }
 if (!FUNC_0(FUNC_11(VAR_10), VAR_13)) {
  FUNC_21(VAR_9, "log_root block unaligned: %llu",
      FUNC_11(VAR_10));
  VAR_14 = -VAR_7;
 }

 if (FUNC_24(VAR_9->fs_devices->metadata_uuid, VAR_10->dev_item.fsid,
     VAR_0) != 0) {
  FUNC_1(VAR_9,
   "dev_item UUID does not match metadata fsid: %pU != %pU",
   VAR_9->fs_devices->metadata_uuid, VAR_10->dev_item.fsid);
  VAR_14 = -VAR_7;
 }





 if (FUNC_4(VAR_10) < 6 * FUNC_14(VAR_10)) {
  FUNC_1(VAR_9, "bytes_used is too small %llu",
     FUNC_4(VAR_10));
  VAR_14 = -VAR_7;
 }
 if (!FUNC_22(FUNC_19(VAR_10))) {
  FUNC_1(VAR_9, "invalid stripesize %u",
     FUNC_19(VAR_10));
  VAR_14 = -VAR_7;
 }
 if (FUNC_15(VAR_10) > (1UL << 31))
  FUNC_21(VAR_9, "suspicious number of devices: %llu",
      FUNC_15(VAR_10));
 if (FUNC_15(VAR_10) == 0) {
  FUNC_1(VAR_9, "number of devices is 0");
  VAR_14 = -VAR_7;
 }

 if (VAR_11 >= 0 &&
     FUNC_3(VAR_10) != FUNC_2(VAR_11)) {
  FUNC_1(VAR_9, "super offset mismatch %llu != %u",
     FUNC_3(VAR_10), VAR_5);
  VAR_14 = -VAR_7;
 }





 if (FUNC_20(VAR_10) > VAR_6) {
  FUNC_1(VAR_9, "system chunk array too big %u > %u",
     FUNC_20(VAR_10),
     VAR_6);
  VAR_14 = -VAR_7;
 }
 if (FUNC_20(VAR_10) < sizeof(struct btrfs_disk_key)
   + sizeof(struct btrfs_chunk)) {
  FUNC_1(VAR_9, "system chunk array too small %u < %zu",
     FUNC_20(VAR_10),
     sizeof(struct btrfs_disk_key)
     + sizeof(struct btrfs_chunk));
  VAR_14 = -VAR_7;
 }





 if (FUNC_10(VAR_10) < FUNC_7(VAR_10))
  FUNC_21(VAR_9,
   "suspicious: generation < chunk_root_generation: %llu < %llu",
   FUNC_10(VAR_10),
   FUNC_7(VAR_10));
 if (FUNC_10(VAR_10) < FUNC_5(VAR_10)
     && FUNC_5(VAR_10) != (u64)-1)
  FUNC_21(VAR_9,
   "suspicious: generation < cache_generation: %llu < %llu",
   FUNC_10(VAR_10),
   FUNC_5(VAR_10));

 return VAR_14;
}
