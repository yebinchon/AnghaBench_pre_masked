
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; struct super_block* t_super; } ;
struct reiserfs_super_block {int dummy; } ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (struct super_block*) ;
 struct reiserfs_super_block* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_8 (scalar_t__*,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_10 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* FUNC_11 (struct super_block*,struct reiserfs_super_block*) ;
 int FUNC_12 (struct super_block*,char*,char*,unsigned long) ;
 int FUNC_13 (struct super_block*,int ,int) ;
 int FUNC_14 (struct reiserfs_super_block*) ;
 int FUNC_15 (struct reiserfs_super_block*) ;
 int FUNC_16 (struct reiserfs_super_block*,int) ;

void FUNC_17(struct reiserfs_transaction_handle *VAR_1,
          __u32 VAR_2)
{
 struct super_block *VAR_3 = VAR_1->t_super;
 struct reiserfs_super_block *VAR_4 = FUNC_4(VAR_3);
 __le32 *VAR_5 = FUNC_11(VAR_3, VAR_4);
 int VAR_6 = 0;

 FUNC_0(!VAR_1->t_trans_id);

 FUNC_5(VAR_3, VAR_5);

 FUNC_13(VAR_3, FUNC_3(VAR_3), 1);
 FUNC_7(VAR_1, FUNC_3(VAR_3));
 while (VAR_6 < FUNC_14(VAR_4)) {
  if (VAR_2 == FUNC_9(VAR_5[VAR_6])) {

   FUNC_8(&VAR_5[VAR_6], 1);





   if (VAR_5[VAR_6] == VAR_5[VAR_6 + 1]) {

    FUNC_10(VAR_5 + VAR_6, VAR_5 + VAR_6 + 2,
     (FUNC_14(VAR_4) - VAR_6 -
      2) * sizeof(__u32));
    FUNC_16(VAR_4, FUNC_14(VAR_4) - 2);

    FUNC_2(FUNC_14(VAR_4) < 2 ||
           FUNC_14(VAR_4) > FUNC_15(VAR_4),
           "vs-15005: objectid map corrupted cur_size == %d (max == %d)",
           FUNC_14(VAR_4), FUNC_15(VAR_4));
   }
   return;
  }

  if (VAR_2 > FUNC_9(VAR_5[VAR_6]) &&
      VAR_2 < FUNC_9(VAR_5[VAR_6 + 1])) {

   if (VAR_2 + 1 == FUNC_9(VAR_5[VAR_6 + 1])) {
    FUNC_8(&VAR_5[VAR_6 + 1], -1);
    return;
   }
   if (FUNC_14(VAR_4) == FUNC_15(VAR_4)) {
    FUNC_1(VAR_3, VAR_0);
    return;
   }


   FUNC_10(VAR_5 + VAR_6 + 3, VAR_5 + VAR_6 + 1,
    (FUNC_14(VAR_4) - VAR_6 - 1) * sizeof(__u32));
   VAR_5[VAR_6 + 1] = FUNC_6(VAR_2);
   VAR_5[VAR_6 + 2] = FUNC_6(VAR_2 + 1);
   FUNC_16(VAR_4, FUNC_14(VAR_4) + 2);
   return;
  }
  VAR_6 += 2;
 }

 FUNC_12(VAR_3, "vs-15011", "tried to free free object id (%lu)",
         (long unsigned)VAR_2);
}
