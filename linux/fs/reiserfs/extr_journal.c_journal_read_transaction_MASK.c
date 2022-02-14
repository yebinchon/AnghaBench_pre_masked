
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_bdev; } ;
struct reiserfs_journal_desc {int * j_realblock; } ;
struct reiserfs_journal_commit {int * j_realblock; } ;
struct reiserfs_journal {unsigned long j_start; unsigned int j_last_flush_trans_id; unsigned int j_trans_id; } ;
struct buffer_head {unsigned int b_blocknr; int b_size; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 struct reiserfs_journal* FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (struct super_block*) ;
 unsigned int FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head**,int) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct reiserfs_journal_commit*) ;
 int FUNC_9 (struct reiserfs_journal_commit*) ;
 unsigned long FUNC_10 (struct reiserfs_journal_desc*) ;
 unsigned int FUNC_11 (struct reiserfs_journal_desc*) ;
 unsigned int FUNC_12 (struct reiserfs_journal_desc*) ;
 scalar_t__ FUNC_13 (struct super_block*,scalar_t__) ;
 struct buffer_head* FUNC_14 (struct super_block*,unsigned int) ;
 scalar_t__ FUNC_15 (struct super_block*,struct reiserfs_journal_desc*,struct reiserfs_journal_commit*) ;
 struct buffer_head* FUNC_16 (struct super_block*,unsigned int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct buffer_head**) ;
 struct buffer_head** FUNC_19 (unsigned int,int,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ,unsigned int,struct buffer_head**) ;
 int FUNC_22 (scalar_t__,scalar_t__,int ) ;
 int FUNC_23 (struct super_block*,int ,char*,unsigned long,...) ;
 int FUNC_24 (struct super_block*,char*,char*) ;
 struct buffer_head* FUNC_25 (struct super_block*,int ) ;
 int FUNC_26 (struct buffer_head*) ;
 int FUNC_27 (struct buffer_head*) ;
 int FUNC_28 (struct buffer_head*) ;
 int FUNC_29 (struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_30(struct super_block *VAR_4,
        unsigned long VAR_5,
        unsigned long VAR_6,
        unsigned int VAR_7,
        unsigned long VAR_8)
{
 struct reiserfs_journal *VAR_9 = FUNC_1(VAR_4);
 struct reiserfs_journal_desc *VAR_10;
 struct reiserfs_journal_commit *VAR_11;
 unsigned int VAR_12 = 0;
 struct buffer_head *VAR_13;
 struct buffer_head *VAR_14;
 struct buffer_head **VAR_15 = ((void*)0);
 struct buffer_head **VAR_16 = ((void*)0);
 unsigned int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_14 = FUNC_14(VAR_4, VAR_5);
 if (!VAR_14)
  return 1;
 VAR_10 = (struct reiserfs_journal_desc *)VAR_14->b_data;
 VAR_17 = VAR_14->b_blocknr - FUNC_2(VAR_4);
 FUNC_23(VAR_4, VAR_2, "journal-1037: "
         "journal_read_transaction, offset %llu, len %d mount_id %d",
         VAR_14->b_blocknr - FUNC_2(VAR_4),
         FUNC_12(VAR_10), FUNC_10(VAR_10));
 if (FUNC_11(VAR_10) < VAR_7) {
  FUNC_23(VAR_4, VAR_2, "journal-1039: "
          "journal_read_trans skipping because %lu is too old",
          VAR_5 -
          FUNC_2(VAR_4));
  FUNC_5(VAR_14);
  return 1;
 }
 if (FUNC_10(VAR_10) != VAR_8) {
  FUNC_23(VAR_4, VAR_2, "journal-1146: "
          "journal_read_trans skipping because %d is != "
          "newest_mount_id %lu", FUNC_10(VAR_10),
          VAR_8);
  FUNC_5(VAR_14);
  return 1;
 }
 VAR_13 = FUNC_14(VAR_4, FUNC_2(VAR_4) +
        ((VAR_17 + FUNC_12(VAR_10) + 1) %
         FUNC_3(VAR_4)));
 if (!VAR_13) {
  FUNC_5(VAR_14);
  return 1;
 }
 VAR_11 = (struct reiserfs_journal_commit *)VAR_13->b_data;
 if (FUNC_15(VAR_4, VAR_10, VAR_11)) {
  FUNC_23(VAR_4, VAR_2,
          "journal_read_transaction, "
          "commit offset %llu had bad time %d or length %d",
          VAR_13->b_blocknr -
          FUNC_2(VAR_4),
          FUNC_8(VAR_11),
          FUNC_9(VAR_11));
  FUNC_5(VAR_13);
  FUNC_5(VAR_14);
  return 1;
 }

 if (FUNC_4(VAR_4->s_bdev)) {
  FUNC_24(VAR_4, "clm-2076",
     "device is readonly, unable to replay log");
  FUNC_5(VAR_13);
  FUNC_5(VAR_14);
  return -VAR_0;
 }

 VAR_12 = FUNC_11(VAR_10);




 VAR_15 = FUNC_19(FUNC_12(VAR_10),
       sizeof(struct buffer_head *),
       VAR_1);
 VAR_16 = FUNC_19(FUNC_12(VAR_10),
        sizeof(struct buffer_head *),
        VAR_1);
 if (!VAR_15 || !VAR_16) {
  FUNC_5(VAR_13);
  FUNC_5(VAR_14);
  FUNC_18(VAR_15);
  FUNC_18(VAR_16);
  FUNC_24(VAR_4, "journal-1169",
     "kmalloc failed, unable to mount FS");
  return -1;
 }

 VAR_19 = FUNC_17(VAR_4->s_blocksize);
 for (VAR_18 = 0; VAR_18 < FUNC_12(VAR_10); VAR_18++) {
  VAR_15[VAR_18] =
      FUNC_16(VAR_4,
       FUNC_2(VAR_4) +
       (VAR_17 + 1 +
        VAR_18) % FUNC_3(VAR_4));
  if (VAR_18 < VAR_19) {
   VAR_16[VAR_18] =
       FUNC_25(VAR_4,
          FUNC_20(VAR_10->j_realblock[VAR_18]));
  } else {
   VAR_16[VAR_18] =
       FUNC_25(VAR_4,
          FUNC_20(VAR_11->
        j_realblock[VAR_18 - VAR_19]));
  }
  if (VAR_16[VAR_18]->b_blocknr > FUNC_0(VAR_4)) {
   FUNC_24(VAR_4, "journal-1207",
      "REPLAY FAILURE fsck required! "
      "Block to replay is outside of "
      "filesystem");
   goto abort_replay;
  }

  if (FUNC_13
      (VAR_4, VAR_16[VAR_18]->b_blocknr)) {
   FUNC_24(VAR_4, "journal-1204",
      "REPLAY FAILURE fsck required! "
      "Trying to replay onto a log block");
abort_replay:
   FUNC_6(VAR_15, VAR_18);
   FUNC_6(VAR_16, VAR_18);
   FUNC_5(VAR_13);
   FUNC_5(VAR_14);
   FUNC_18(VAR_15);
   FUNC_18(VAR_16);
   return -1;
  }
 }

 FUNC_21(VAR_3, 0, FUNC_12(VAR_10), VAR_15);
 for (VAR_18 = 0; VAR_18 < FUNC_12(VAR_10); VAR_18++) {

  FUNC_28(VAR_15[VAR_18]);
  if (!FUNC_7(VAR_15[VAR_18])) {
   FUNC_24(VAR_4, "journal-1212",
      "REPLAY FAILURE fsck required! "
      "buffer write failed");
   FUNC_6(VAR_15 + VAR_18,
         FUNC_12(VAR_10) - VAR_18);
   FUNC_6(VAR_16, FUNC_12(VAR_10));
   FUNC_5(VAR_13);
   FUNC_5(VAR_14);
   FUNC_18(VAR_15);
   FUNC_18(VAR_16);
   return -1;
  }
  FUNC_22(VAR_16[VAR_18]->b_data, VAR_15[VAR_18]->b_data,
         VAR_16[VAR_18]->b_size);
  FUNC_27(VAR_16[VAR_18]);
  FUNC_5(VAR_15[VAR_18]);
 }

 for (VAR_18 = 0; VAR_18 < FUNC_12(VAR_10); VAR_18++) {
  FUNC_26(VAR_16[VAR_18]);
  FUNC_29(VAR_16[VAR_18], 0);
 }
 for (VAR_18 = 0; VAR_18 < FUNC_12(VAR_10); VAR_18++) {
  FUNC_28(VAR_16[VAR_18]);
  if (!FUNC_7(VAR_16[VAR_18])) {
   FUNC_24(VAR_4, "journal-1226",
      "REPLAY FAILURE, fsck required! "
      "buffer write failed");
   FUNC_6(VAR_16 + VAR_18,
         FUNC_12(VAR_10) - VAR_18);
   FUNC_5(VAR_13);
   FUNC_5(VAR_14);
   FUNC_18(VAR_15);
   FUNC_18(VAR_16);
   return -1;
  }
  FUNC_5(VAR_16[VAR_18]);
 }
 VAR_5 =
     FUNC_2(VAR_4) +
     ((VAR_17 + FUNC_12(VAR_10) +
       2) % FUNC_3(VAR_4));
 FUNC_23(VAR_4, VAR_2,
         "journal-1095: setting journal " "start to offset %ld",
         VAR_5 - FUNC_2(VAR_4));





 VAR_9->j_start = VAR_5 - FUNC_2(VAR_4);
 VAR_9->j_last_flush_trans_id = VAR_12;
 VAR_9->j_trans_id = VAR_12 + 1;

 if (VAR_9->j_trans_id == 0)
  VAR_9->j_trans_id = 10;
 FUNC_5(VAR_13);
 FUNC_5(VAR_14);
 FUNC_18(VAR_15);
 FUNC_18(VAR_16);
 return 0;
}
