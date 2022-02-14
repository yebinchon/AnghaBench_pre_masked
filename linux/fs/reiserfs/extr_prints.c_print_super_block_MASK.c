
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_super_block {int dummy; } ;
struct buffer_head {int b_blocknr; int b_bdev; scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_1 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_2 (struct reiserfs_super_block*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct reiserfs_super_block*) ;
 int FUNC_6 (struct reiserfs_super_block*) ;
 int FUNC_7 (struct reiserfs_super_block*) ;
 int FUNC_8 (struct reiserfs_super_block*) ;
 int FUNC_9 (struct reiserfs_super_block*) ;
 int FUNC_10 (struct reiserfs_super_block*) ;
 int FUNC_11 (struct reiserfs_super_block*) ;
 int FUNC_12 (struct reiserfs_super_block*) ;
 int FUNC_13 (struct reiserfs_super_block*) ;
 int FUNC_14 (struct reiserfs_super_block*) ;
 int FUNC_15 (struct reiserfs_super_block*) ;
 int FUNC_16 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_17 (struct reiserfs_super_block*) ;

__attribute__((used)) static int FUNC_18(struct buffer_head *VAR_1)
{
 struct reiserfs_super_block *VAR_2 =
     (struct reiserfs_super_block *)(VAR_1->b_data);
 int VAR_3, VAR_4;
 char *VAR_5;

 if (FUNC_0(VAR_2)) {
  VAR_5 = "3.5";
 } else if (FUNC_1(VAR_2)) {
  VAR_5 = "3.6";
 } else if (FUNC_2(VAR_2)) {
  VAR_5 = ((FUNC_17(VAR_2) == VAR_0) ?
      "3.6" : "3.5");
 } else {
  return 1;
 }

 FUNC_3("%pg\'s super block is in block %llu\n", VAR_1->b_bdev,
        (unsigned long long)VAR_1->b_blocknr);
 FUNC_3("Reiserfs version %s\n", VAR_5);
 FUNC_3("Block count %u\n", FUNC_5(VAR_2));
 FUNC_3("Blocksize %d\n", FUNC_6(VAR_2));
 FUNC_3("Free blocks %u\n", FUNC_8(VAR_2));





 VAR_3 = VAR_1->b_blocknr;
 VAR_4 = FUNC_5(VAR_2) - VAR_3 - 1 - FUNC_7(VAR_2) -
     (!FUNC_2(VAR_2) ? FUNC_13(VAR_2) +
      1 : FUNC_14(VAR_2)) - FUNC_8(VAR_2);
 FUNC_3
     ("Busy blocks (skipped %d, bitmaps - %d, journal (or reserved) blocks - %d\n"
      "1 super block, %d data blocks\n", VAR_3, FUNC_7(VAR_2),
      (!FUNC_2(VAR_2) ? (FUNC_13(VAR_2) + 1) :
       FUNC_14(VAR_2)), VAR_4);
 FUNC_3("Root block %u\n", FUNC_15(VAR_2));
 FUNC_3("Journal block (first) %d\n", FUNC_11(VAR_2));
 FUNC_3("Journal dev %d\n", FUNC_12(VAR_2));
 FUNC_3("Journal orig size %d\n", FUNC_13(VAR_2));
 FUNC_3("FS state %d\n", FUNC_9(VAR_2));
 FUNC_3("Hash function \"%s\"\n",
        FUNC_4(FUNC_10(VAR_2)));

 FUNC_3("Tree height %d\n", FUNC_16(VAR_2));
 return 0;
}
