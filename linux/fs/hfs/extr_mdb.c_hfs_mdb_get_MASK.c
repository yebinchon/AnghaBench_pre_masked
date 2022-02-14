
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct super_block {int s_blocksize_bits; int s_blocksize; int s_flags; } ;
struct hfs_mdb {int drSigWord; int drAtrb; int drLsMod; int drWrCnt; int drVBMSt; int drDirCnt; int drFilCnt; int drNmRtDirs; int drNmFls; int drNxtCNID; int drFreeBks; int drAlBlSt; int drClpSiz; int drNmAlBlks; int drAlBlkSiz; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
typedef int loff_t ;
typedef int __be16 ;
struct TYPE_2__ {int alloc_blksz; int part_start; int fs_ablocks; int fs_div; int clumpablks; int fs_start; int free_ablocks; int next_id; int root_files; int root_dirs; int file_count; int folder_count; struct buffer_head* mdb_bh; void* cat_tree; void* ext_tree; scalar_t__ bitmap; struct hfs_mdb* alt_mdb; struct buffer_head* alt_mdb_bh; struct hfs_mdb* mdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (struct super_block*,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (struct super_block*,int*,int*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct super_block*,int*,int*) ;
 scalar_t__ FUNC_11 (int,int ) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (char*,scalar_t__,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*) ;
 struct buffer_head* FUNC_17 (struct super_block*,int) ;
 struct buffer_head* FUNC_18 (struct super_block*,int,struct hfs_mdb*) ;
 int FUNC_19 (struct super_block*,int) ;
 int FUNC_20 (struct super_block*) ;
 int FUNC_21 (struct super_block*,int) ;
 int FUNC_22 (struct buffer_head*) ;

int FUNC_23(struct super_block *VAR_16)
{
 struct buffer_head *VAR_17;
 struct hfs_mdb *VAR_18, *VAR_19;
 unsigned int VAR_20;
 char *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 sector_t VAR_26, VAR_27;
 loff_t VAR_28;
 __be16 VAR_29;


 VAR_24 = FUNC_19(VAR_16, VAR_9);
 if (!VAR_24)
  return -VAR_0;

 if (FUNC_7(VAR_16, &VAR_26, &VAR_27))
  return -VAR_0;
 while (1) {

  VAR_17 = FUNC_18(VAR_16, VAR_26 + VAR_5, VAR_18);
  if (!VAR_17)
   goto out;

  if (VAR_18->drSigWord == FUNC_5(VAR_11))
   break;
  FUNC_4(VAR_17);




  if (FUNC_10(VAR_16, &VAR_26, &VAR_27))
   goto out;
 }

 FUNC_0(VAR_16)->alloc_blksz = VAR_24 = FUNC_3(VAR_18->drAlBlkSiz);
 if (!VAR_24 || (VAR_24 & (VAR_9 - 1))) {
  FUNC_15("bad allocation block size %d\n", VAR_24);
  goto out_bh;
 }

 VAR_24 = FUNC_14(FUNC_0(VAR_16)->alloc_blksz, (u32)VAR_12);

 while (VAR_24 & (VAR_24 - 1))
  VAR_24 -= VAR_9;
 VAR_25 = FUNC_1(VAR_18->drAlBlSt) + VAR_26;

 while (VAR_25 & ((VAR_24 - 1) >> VAR_10))
  VAR_24 >>= 1;

 while (FUNC_0(VAR_16)->alloc_blksz & (VAR_24 - 1))
  VAR_24 >>= 1;
 FUNC_4(VAR_17);
 if (!FUNC_21(VAR_16, VAR_24)) {
  FUNC_15("unable to set blocksize to %u\n", VAR_24);
  goto out;
 }

 VAR_17 = FUNC_18(VAR_16, VAR_26 + VAR_5, VAR_18);
 if (!VAR_17)
  goto out;
 if (VAR_18->drSigWord != FUNC_5(VAR_11))
  goto out_bh;

 FUNC_0(VAR_16)->mdb_bh = VAR_17;
 FUNC_0(VAR_16)->mdb = VAR_18;


 FUNC_0(VAR_16)->part_start = VAR_26;
 FUNC_0(VAR_16)->fs_ablocks = FUNC_1(VAR_18->drNmAlBlks);
 FUNC_0(VAR_16)->fs_div = FUNC_0(VAR_16)->alloc_blksz >> VAR_16->s_blocksize_bits;
 FUNC_0(VAR_16)->clumpablks = FUNC_3(VAR_18->drClpSiz) /
     FUNC_0(VAR_16)->alloc_blksz;
 if (!FUNC_0(VAR_16)->clumpablks)
  FUNC_0(VAR_16)->clumpablks = 1;
 FUNC_0(VAR_16)->fs_start = (FUNC_1(VAR_18->drAlBlSt) + VAR_26) >>
          (VAR_16->s_blocksize_bits - VAR_10);


 FUNC_0(VAR_16)->free_ablocks = FUNC_1(VAR_18->drFreeBks);
 FUNC_0(VAR_16)->next_id = FUNC_3(VAR_18->drNxtCNID);
 FUNC_0(VAR_16)->root_files = FUNC_1(VAR_18->drNmFls);
 FUNC_0(VAR_16)->root_dirs = FUNC_1(VAR_18->drNmRtDirs);
 FUNC_0(VAR_16)->file_count = FUNC_3(VAR_18->drFilCnt);
 FUNC_0(VAR_16)->folder_count = FUNC_3(VAR_18->drDirCnt);


 VAR_25 = VAR_26 + VAR_27 - 2;
 VAR_17 = FUNC_18(VAR_16, VAR_25, VAR_19);
 if (VAR_17) {
  if (VAR_19->drSigWord == FUNC_5(VAR_11)) {
   FUNC_0(VAR_16)->alt_mdb_bh = VAR_17;
   FUNC_0(VAR_16)->alt_mdb = VAR_19;
  } else
   FUNC_4(VAR_17);
 }

 if (!FUNC_0(VAR_16)->alt_mdb) {
  FUNC_16("unable to locate alternate MDB\n");
  FUNC_16("continuing without an alternate MDB\n");
 }

 FUNC_0(VAR_16)->bitmap = FUNC_11(8192, VAR_2);
 if (!FUNC_0(VAR_16)->bitmap)
  goto out;


 VAR_20 = FUNC_1(VAR_18->drVBMSt) + VAR_26;
 VAR_28 = (loff_t)VAR_20 << VAR_10;
 VAR_24 = (FUNC_0(VAR_16)->fs_ablocks + 8) / 8;
 VAR_21 = (u8 *)FUNC_0(VAR_16)->bitmap;
 while (VAR_24) {
  VAR_17 = FUNC_17(VAR_16, VAR_28 >> VAR_16->s_blocksize_bits);
  if (!VAR_17) {
   FUNC_15("unable to read volume bitmap\n");
   goto out;
  }
  VAR_22 = VAR_28 & (VAR_16->s_blocksize - 1);
  VAR_23 = FUNC_14((int)VAR_16->s_blocksize - VAR_22, VAR_24);
  FUNC_13(VAR_21, VAR_17->b_data + VAR_22, VAR_23);
  FUNC_4(VAR_17);
  VAR_21 += VAR_23;
  VAR_28 += VAR_23;
  VAR_24 -= VAR_23;
 }

 FUNC_0(VAR_16)->ext_tree = FUNC_6(VAR_16, VAR_4, VAR_15);
 if (!FUNC_0(VAR_16)->ext_tree) {
  FUNC_15("unable to open extent tree\n");
  goto out;
 }
 FUNC_0(VAR_16)->cat_tree = FUNC_6(VAR_16, VAR_3, VAR_14);
 if (!FUNC_0(VAR_16)->cat_tree) {
  FUNC_15("unable to open catalog tree\n");
  goto out;
 }

 VAR_29 = VAR_18->drAtrb;
 if (!(VAR_29 & FUNC_5(VAR_8))) {
  FUNC_16("filesystem was not cleanly unmounted, running fsck.hfs is recommended.  mounting read-only.\n");
  VAR_16->s_flags |= VAR_13;
 }
 if ((VAR_29 & FUNC_5(VAR_7))) {
  FUNC_16("filesystem is marked locked, mounting read-only.\n");
  VAR_16->s_flags |= VAR_13;
 }
 if (!FUNC_20(VAR_16)) {

  VAR_29 &= FUNC_5(~VAR_8);
  VAR_29 |= FUNC_5(VAR_6);
  VAR_18->drAtrb = VAR_29;
  FUNC_2(&VAR_18->drWrCnt, 1);
  VAR_18->drLsMod = FUNC_9();

  FUNC_12(FUNC_0(VAR_16)->mdb_bh);
  FUNC_22(FUNC_0(VAR_16)->mdb_bh);
 }

 return 0;

out_bh:
 FUNC_4(VAR_17);
out:
 FUNC_8(VAR_16);
 return -VAR_1;
}
