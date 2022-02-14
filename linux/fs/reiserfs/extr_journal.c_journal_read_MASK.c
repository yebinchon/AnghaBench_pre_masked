
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct super_block {int s_bdev; int s_blocksize; } ;
struct reiserfs_journal_header {int j_mount_id; int j_last_flush_trans_id; int j_first_unflushed_offset; } ;
struct reiserfs_journal_desc {int dummy; } ;
struct reiserfs_journal {unsigned long j_start; int j_trans_id; int j_last_flush_trans_id; int j_mount_id; int j_first_unflushed_offset; int j_dev_bd; TYPE_1__* j_header_bh; } ;
struct buffer_head {unsigned long b_blocknr; scalar_t__ b_data; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 unsigned long FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 unsigned long FUNC_6 (struct reiserfs_journal_desc*) ;
 unsigned int FUNC_7 (struct reiserfs_journal_desc*) ;
 scalar_t__ FUNC_8 (struct reiserfs_journal_desc*) ;
 void* FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (struct super_block*,unsigned long,unsigned long,unsigned int,unsigned long) ;
 int FUNC_11 (struct super_block*,struct buffer_head*,unsigned int*,unsigned long*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int ) ;
 struct buffer_head* FUNC_14 (int ,unsigned long,int ,unsigned long) ;
 int FUNC_15 (struct super_block*,int ,char*,...) ;
 int FUNC_16 (struct super_block*,char*,int,...) ;
 int FUNC_17 (struct super_block*) ;
 int FUNC_18 (struct super_block*) ;

__attribute__((used)) static int FUNC_19(struct super_block *VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_0(VAR_1);
 struct reiserfs_journal_desc *VAR_3;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 time64_t VAR_6;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 9;
 struct buffer_head *VAR_10;
 struct reiserfs_journal_header *VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 1;
 int VAR_15;

 VAR_8 = FUNC_1(VAR_1);
 FUNC_16(VAR_1, "checking transaction log (%pg)\n",
        VAR_2->j_dev_bd);
 VAR_6 = FUNC_12();






 VAR_2->j_header_bh = FUNC_9(VAR_1,
          FUNC_1(VAR_1)
          + FUNC_2(VAR_1));
 if (!VAR_2->j_header_bh) {
  return 1;
 }
 VAR_11 = (struct reiserfs_journal_header *)(VAR_2->j_header_bh->b_data);
 if (FUNC_13(VAR_11->j_first_unflushed_offset) <
     FUNC_2(VAR_1)
     && FUNC_13(VAR_11->j_last_flush_trans_id) > 0) {
  VAR_7 =
      FUNC_1(VAR_1) +
      FUNC_13(VAR_11->j_first_unflushed_offset);
  VAR_4 = FUNC_13(VAR_11->j_last_flush_trans_id) + 1;
  VAR_9 = FUNC_13(VAR_11->j_mount_id);
  FUNC_15(VAR_1, VAR_0,
          "journal-1153: found in "
          "header: first_unflushed_offset %d, last_flushed_trans_id "
          "%lu", FUNC_13(VAR_11->j_first_unflushed_offset),
          FUNC_13(VAR_11->j_last_flush_trans_id));
  VAR_12 = 1;






  VAR_10 =
      FUNC_9(VAR_1,
      FUNC_1(VAR_1) +
      FUNC_13(VAR_11->j_first_unflushed_offset));
  VAR_15 = FUNC_11(VAR_1, VAR_10, ((void*)0), ((void*)0));
  if (!VAR_15) {
   VAR_14 = 0;
  }
  FUNC_5(VAR_10);
  goto start_log_replay;
 }






 while (VAR_14
        && VAR_8 <
        (FUNC_1(VAR_1) +
  FUNC_2(VAR_1))) {




  VAR_10 =
      FUNC_14(VAR_2->j_dev_bd, VAR_8,
        VAR_1->s_blocksize,
        FUNC_1(VAR_1) +
        FUNC_2(VAR_1));
  VAR_15 =
      FUNC_11(VAR_1, VAR_10,
       &VAR_5,
       &VAR_9);
  if (VAR_15 == 1) {
   VAR_3 = (struct reiserfs_journal_desc *)VAR_10->b_data;
   if (VAR_7 == 0) {
    VAR_4 = FUNC_7(VAR_3);
    VAR_7 = VAR_10->b_blocknr;
    VAR_9 = FUNC_6(VAR_3);
    FUNC_15(VAR_1, VAR_0,
            "journal-1179: Setting "
            "oldest_start to offset %llu, trans_id %lu",
            VAR_7 -
            FUNC_1
            (VAR_1), VAR_4);
   } else if (VAR_4 > FUNC_7(VAR_3)) {

    VAR_4 = FUNC_7(VAR_3);
    VAR_7 = VAR_10->b_blocknr;
    FUNC_15(VAR_1, VAR_0,
            "journal-1180: Resetting "
            "oldest_start to offset %lu, trans_id %lu",
            VAR_7 -
            FUNC_1
            (VAR_1), VAR_4);
   }
   if (VAR_9 < FUNC_6(VAR_3)) {
    VAR_9 = FUNC_6(VAR_3);
    FUNC_15(VAR_1, VAR_0,
            "journal-1299: Setting "
            "newest_mount_id to %d",
            FUNC_6(VAR_3));
   }
   VAR_8 += FUNC_8(VAR_3) + 2;
  } else {
   VAR_8++;
  }
  FUNC_5(VAR_10);
 }

start_log_replay:
 VAR_8 = VAR_7;
 if (VAR_4) {
  FUNC_15(VAR_1, VAR_0,
          "journal-1206: Starting replay "
          "from offset %llu, trans_id %lu",
          VAR_8 - FUNC_1(VAR_1),
          VAR_4);

 }
 VAR_13 = 0;
 while (VAR_14 && VAR_4 > 0) {
  VAR_15 =
      FUNC_10(VAR_1, VAR_8, VAR_7,
          VAR_4, VAR_9);
  if (VAR_15 < 0) {
   return VAR_15;
  } else if (VAR_15 != 0) {
   break;
  }
  VAR_8 =
      FUNC_1(VAR_1) + VAR_2->j_start;
  VAR_13++;
  if (VAR_8 == VAR_7)
   break;
 }

 if (VAR_4 == 0) {
  FUNC_15(VAR_1, VAR_0,
          "journal-1225: No valid " "transactions found");
 }






 if (VAR_12 && VAR_13 == 0) {
  VAR_2->j_start = FUNC_13(VAR_11->j_first_unflushed_offset);
  VAR_2->j_trans_id =
      FUNC_13(VAR_11->j_last_flush_trans_id) + 1;

  if (VAR_2->j_trans_id == 0)
   VAR_2->j_trans_id = 10;
  VAR_2->j_last_flush_trans_id =
      FUNC_13(VAR_11->j_last_flush_trans_id);
  VAR_2->j_mount_id = FUNC_13(VAR_11->j_mount_id) + 1;
 } else {
  VAR_2->j_mount_id = VAR_9 + 1;
 }
 FUNC_15(VAR_1, VAR_0, "journal-1299: Setting "
         "newest_mount_id to %lu", VAR_2->j_mount_id);
 VAR_2->j_first_unflushed_offset = VAR_2->j_start;
 if (VAR_13 > 0) {
  FUNC_16(VAR_1,
         "replayed %d transactions in %lu seconds\n",
         VAR_13, FUNC_12() - VAR_6);
 }

 FUNC_17(VAR_1);
 if (!FUNC_4(VAR_1->s_bdev) &&
     FUNC_3(VAR_1, VAR_2->j_start,
      VAR_2->j_last_flush_trans_id)) {
  FUNC_18(VAR_1);




  return -1;
 }
 FUNC_18(VAR_1);
 return 0;
}
