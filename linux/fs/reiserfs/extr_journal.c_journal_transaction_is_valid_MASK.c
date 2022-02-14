
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_journal_desc {int dummy; } ;
struct reiserfs_journal_commit {int dummy; } ;
struct buffer_head {unsigned long b_blocknr; scalar_t__ b_data; } ;
struct TYPE_2__ {unsigned long j_trans_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 unsigned long FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;
 unsigned long FUNC_4 (struct reiserfs_journal_commit*) ;
 unsigned int FUNC_5 (struct reiserfs_journal_commit*) ;
 unsigned long FUNC_6 (struct reiserfs_journal_desc*) ;
 unsigned int FUNC_7 (struct reiserfs_journal_desc*) ;
 unsigned long FUNC_8 (struct reiserfs_journal_desc*) ;
 int FUNC_9 (struct buffer_head*) ;
 struct buffer_head* FUNC_10 (struct super_block*,unsigned long) ;
 scalar_t__ FUNC_11 (struct super_block*,struct reiserfs_journal_desc*,struct reiserfs_journal_commit*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct super_block*,int ,char*,unsigned long,...) ;
 int FUNC_14 (struct super_block*,char*,char*,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_2,
     struct buffer_head *VAR_3,
     unsigned int *VAR_4,
     unsigned long *VAR_5)
{
 struct reiserfs_journal_desc *VAR_6;
 struct reiserfs_journal_commit *VAR_7;
 struct buffer_head *VAR_8;
 unsigned long VAR_9;

 if (!VAR_3)
  return 0;

 VAR_6 = (struct reiserfs_journal_desc *)VAR_3->b_data;
 if (FUNC_8(VAR_6) > 0
     && !FUNC_12(FUNC_9(VAR_3), VAR_0, 8)) {
  if (VAR_4 && *VAR_4
      && FUNC_7(VAR_6) > *VAR_4) {
   FUNC_13(VAR_2, VAR_1,
           "journal-986: transaction "
           "is valid returning because trans_id %d is greater than "
           "oldest_invalid %lu",
           FUNC_7(VAR_6),
           *VAR_4);
   return 0;
  }
  if (VAR_5
      && *VAR_5 > FUNC_6(VAR_6)) {
   FUNC_13(VAR_2, VAR_1,
           "journal-1087: transaction "
           "is valid returning because mount_id %d is less than "
           "newest_mount_id %lu",
           FUNC_6(VAR_6),
           *VAR_5);
   return -1;
  }
  if (FUNC_8(VAR_6) > FUNC_0(VAR_2)->j_trans_max) {
   FUNC_14(VAR_2, "journal-2018",
      "Bad transaction length %d "
      "encountered, ignoring transaction",
      FUNC_8(VAR_6));
   return -1;
  }
  VAR_9 = VAR_3->b_blocknr - FUNC_1(VAR_2);





  VAR_8 =
      FUNC_10(VAR_2,
      FUNC_1(VAR_2) +
      ((VAR_9 + FUNC_8(VAR_6) +
        1) % FUNC_2(VAR_2)));
  if (!VAR_8)
   return 0;
  VAR_7 = (struct reiserfs_journal_commit *)VAR_8->b_data;
  if (FUNC_11(VAR_2, VAR_6, VAR_7)) {
   FUNC_13(VAR_2, VAR_1,
           "journal_transaction_is_valid, commit offset %ld had bad "
           "time %d or length %d",
           VAR_8->b_blocknr -
           FUNC_1(VAR_2),
           FUNC_4(VAR_7),
           FUNC_5(VAR_7));
   FUNC_3(VAR_8);
   if (VAR_4) {
    *VAR_4 =
        FUNC_7(VAR_6);
    FUNC_13(VAR_2, VAR_1,
            "journal-1004: "
            "transaction_is_valid setting oldest invalid trans_id "
            "to %d",
            FUNC_7(VAR_6));
   }
   return -1;
  }
  FUNC_3(VAR_8);
  FUNC_13(VAR_2, VAR_1,
          "journal-1006: found valid "
          "transaction start offset %llu, len %d id %d",
          VAR_3->b_blocknr -
          FUNC_1(VAR_2),
          FUNC_8(VAR_6),
          FUNC_7(VAR_6));
  return 1;
 } else {
  return 0;
 }
}
