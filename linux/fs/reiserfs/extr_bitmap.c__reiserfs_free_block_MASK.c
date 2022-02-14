
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; struct super_block* t_super; } ;
struct reiserfs_super_block {int dummy; } ;
struct reiserfs_bitmap_info {int free_count; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef int b_blocknr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*,int ) ;
 struct reiserfs_bitmap_info* FUNC_2 (struct super_block*) ;
 struct buffer_head* FUNC_3 (struct super_block*) ;
 struct reiserfs_super_block* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*,int) ;
 int VAR_0 ;
 int FUNC_7 (struct super_block*,int ,unsigned int*,unsigned int*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,struct buffer_head*) ;
 unsigned int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*,char*,char*,int ) ;
 int FUNC_11 (struct super_block*,struct buffer_head*,int) ;
 struct buffer_head* FUNC_12 (struct super_block*,unsigned int) ;
 int FUNC_13 (unsigned int,int ) ;
 int FUNC_14 (struct super_block*,int) ;
 int FUNC_15 (struct super_block*) ;
 scalar_t__ FUNC_16 (struct reiserfs_super_block*) ;
 int FUNC_17 (struct reiserfs_super_block*,scalar_t__) ;

__attribute__((used)) static void FUNC_18(struct reiserfs_transaction_handle *VAR_1,
     struct inode *VAR_2, b_blocknr_t VAR_3,
     int VAR_4)
{
 struct super_block *VAR_5 = VAR_1->t_super;
 struct reiserfs_super_block *VAR_6;
 struct buffer_head *VAR_7, *VAR_8;
 struct reiserfs_bitmap_info *VAR_9;
 unsigned int VAR_10, VAR_11;

 FUNC_0(!VAR_1->t_trans_id);
 FUNC_1(VAR_5, VAR_0);
 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = FUNC_3(VAR_5);
 VAR_9 = FUNC_2(VAR_5);

 FUNC_7(VAR_5, VAR_3, &VAR_10, &VAR_11);

 if (VAR_10 >= FUNC_9(VAR_5)) {
  FUNC_10(VAR_5, "vs-4075", "block %lu is out of range",
          VAR_3);
  return;
 }

 VAR_8 = FUNC_12(VAR_5, VAR_10);
 if (!VAR_8)
  return;

 FUNC_11(VAR_5, VAR_8, 1);


 if (!FUNC_13(VAR_11, VAR_8->b_data)) {
  FUNC_10(VAR_5, "vs-4080",
          "block %lu: bit already cleared", VAR_3);
 }
 VAR_9[VAR_10].free_count++;
 FUNC_8(VAR_1, VAR_8);
 FUNC_5(VAR_8);

 FUNC_11(VAR_5, VAR_7, 1);

 FUNC_17(VAR_6, FUNC_16(VAR_6) + 1);

 FUNC_8(VAR_1, VAR_7);
 if (VAR_4) {
  int VAR_12 = FUNC_15(VAR_5);
  FUNC_6(VAR_2, 1);
  FUNC_14(VAR_5, VAR_12);
 }
}
