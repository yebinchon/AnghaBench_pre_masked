
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; } ;
struct reiserfs_journal {int j_work; } ;
typedef int myth ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*) ;
 struct reiserfs_journal* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,struct super_block*) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,struct super_block*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_10 (struct super_block*) ;
 scalar_t__ FUNC_11 (struct reiserfs_journal*) ;
 int FUNC_12 (struct super_block*,int ,int) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct super_block*) ;
 int FUNC_15 (struct super_block*) ;

__attribute__((used)) static int FUNC_16(struct reiserfs_transaction_handle *VAR_1,
         struct super_block *VAR_2, int VAR_3)
{
 struct reiserfs_transaction_handle VAR_4;
 struct reiserfs_journal *VAR_5 = FUNC_2(VAR_2);





 if (!VAR_3 && !FUNC_15(VAR_2)) {

  FUNC_0(!VAR_1->t_trans_id);
  FUNC_4(VAR_1, VAR_0);





  if (!FUNC_6(&VAR_4, VAR_2)) {
   FUNC_12(VAR_2,
           FUNC_1(VAR_2),
           1);
   FUNC_8(&VAR_4, FUNC_1(VAR_2));
   FUNC_4(&VAR_4, VAR_0);
  }
 }


 if (!VAR_3 && FUNC_11(VAR_5)) {
  FUNC_9(&VAR_4, 0, sizeof(VAR_4));
  if (!FUNC_7(&VAR_4, VAR_2)) {
   FUNC_12(VAR_2,
           FUNC_1(VAR_2),
           1);
   FUNC_8(&VAR_4, FUNC_1(VAR_2));
   FUNC_4(&VAR_4, VAR_0);
  }
 }






 FUNC_14(VAR_2);






 FUNC_10(VAR_2);

 FUNC_3(&FUNC_2(VAR_2)->j_work);

 FUNC_5(VAR_2);

 FUNC_13(VAR_2);

 return 0;
}
