
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int transaction_t ;
struct journal_head {scalar_t__ b_modified; int * b_next_transaction; int b_cp_transaction; int * b_transaction; } ;
struct buffer_head {int * b_bdev; } ;
struct TYPE_3__ {int j_state_lock; int j_list_lock; int * j_running_transaction; int * j_committing_transaction; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct journal_head*,char*) ;
 int FUNC_2 (struct buffer_head*,int) ;
 int FUNC_3 (struct journal_head*,int) ;
 int FUNC_4 (struct journal_head*,int *) ;
 int FUNC_5 (struct journal_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 struct journal_head* FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct journal_head*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(journal_t *VAR_1, struct buffer_head *VAR_2,
    int VAR_3)
{
 transaction_t *VAR_4;
 struct journal_head *VAR_5;
 int VAR_6 = 1;

 FUNC_0(VAR_2, "entry");







 if (!FUNC_7(VAR_2))
  goto zap_buffer_unlocked;


 FUNC_23(&VAR_1->j_state_lock);
 FUNC_18(VAR_2);
 FUNC_21(&VAR_1->j_list_lock);

 VAR_5 = FUNC_16(VAR_2);
 if (!VAR_5)
  goto zap_buffer_no_jh;
 VAR_4 = VAR_5->b_transaction;
 if (VAR_4 == ((void*)0)) {




  if (!VAR_5->b_cp_transaction) {
   FUNC_1(VAR_5, "not on any transaction: zap");
   goto zap_buffer;
  }

  if (!FUNC_6(VAR_2)) {

   FUNC_5(VAR_5);
   goto zap_buffer;
  }





  if (VAR_1->j_running_transaction) {



   FUNC_1(VAR_5, "checkpointed: add to BJ_Forget");
   VAR_6 = FUNC_4(VAR_5,
     VAR_1->j_running_transaction);
   goto zap_buffer;
  } else {




   if (VAR_1->j_committing_transaction) {
    FUNC_1(VAR_5, "give to committing trans");
    VAR_6 = FUNC_4(VAR_5,
     VAR_1->j_committing_transaction);
    goto zap_buffer;
   } else {


    FUNC_11(VAR_2);
    FUNC_5(VAR_5);
    goto zap_buffer;
   }
  }
 } else if (VAR_4 == VAR_1->j_committing_transaction) {
  FUNC_1(VAR_5, "on committing transaction");





  if (VAR_3) {
   FUNC_17(VAR_5);
   FUNC_22(&VAR_1->j_list_lock);
   FUNC_19(VAR_2);
   FUNC_24(&VAR_1->j_state_lock);
   return -VAR_0;
  }






  FUNC_20(VAR_2);
  if (VAR_1->j_running_transaction && FUNC_8(VAR_2))
   VAR_5->b_next_transaction = VAR_1->j_running_transaction;
  FUNC_17(VAR_5);
  FUNC_22(&VAR_1->j_list_lock);
  FUNC_19(VAR_2);
  FUNC_24(&VAR_1->j_state_lock);
  return 0;
 } else {






  FUNC_3(VAR_5, VAR_4 == VAR_1->j_running_transaction);
  FUNC_1(VAR_5, "on running transaction");
  VAR_6 = FUNC_4(VAR_5, VAR_4);
 }

zap_buffer:
 VAR_5->b_modified = 0;
 FUNC_17(VAR_5);
zap_buffer_no_jh:
 FUNC_22(&VAR_1->j_list_lock);
 FUNC_19(VAR_2);
 FUNC_24(&VAR_1->j_state_lock);
zap_buffer_unlocked:
 FUNC_10(VAR_2);
 FUNC_2(VAR_2, !FUNC_8(VAR_2));
 FUNC_12(VAR_2);
 FUNC_14(VAR_2);
 FUNC_13(VAR_2);
 FUNC_9(VAR_2);
 FUNC_15(VAR_2);
 VAR_2->b_bdev = ((void*)0);
 return VAR_6;
}
