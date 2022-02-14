
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {int b_modified; scalar_t__ b_cp_transaction; TYPE_1__* b_next_transaction; TYPE_1__* b_transaction; int b_frozen_data; int b_committed_data; } ;
struct buffer_head {int dummy; } ;
struct TYPE_8__ {int j_list_lock; TYPE_1__* j_committing_transaction; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_9__ {int h_buffer_credits; TYPE_1__* h_transaction; } ;
typedef TYPE_3__ handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct journal_head*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct journal_head*,int) ;
 int FUNC_4 (struct journal_head*,int,char*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct journal_head*,TYPE_1__*,int ) ;
 int FUNC_8 (struct journal_head*) ;
 int FUNC_9 (struct journal_head*) ;
 int FUNC_10 (struct journal_head*) ;
 struct journal_head* FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int FUNC_22 (handle_t *VAR_3, struct buffer_head *VAR_4)
{
 transaction_t *VAR_5 = VAR_3->h_transaction;
 journal_t *VAR_6;
 struct journal_head *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (FUNC_16(VAR_3))
  return -VAR_2;
 VAR_6 = VAR_5->t_journal;

 FUNC_0(VAR_4, "entry");

 FUNC_17(VAR_4);

 if (!FUNC_13(VAR_4))
  goto not_jbd;
 VAR_7 = FUNC_11(VAR_4);



 if (!FUNC_4(VAR_7, !VAR_7->b_committed_data,
    "inconsistent data on disk")) {
  VAR_9 = -VAR_1;
  goto not_jbd;
 }


 VAR_10 = VAR_7->b_modified;





 VAR_7->b_modified = 0;

 if (VAR_7->b_transaction == VAR_5) {
  FUNC_3(VAR_7, !VAR_7->b_frozen_data);




  FUNC_14(VAR_4);
  FUNC_15(VAR_4);

  FUNC_1(VAR_7, "belongs to current transaction: unfile");





  if (VAR_10)
   VAR_8 = 1;
  FUNC_20(&VAR_6->j_list_lock);
  if (VAR_7->b_cp_transaction) {
   FUNC_9(VAR_7);
   FUNC_7(VAR_7, VAR_5, VAR_0);
  } else {
   FUNC_10(VAR_7);
   if (!FUNC_13(VAR_4)) {
    FUNC_21(&VAR_6->j_list_lock);
    goto not_jbd;
   }
  }
  FUNC_21(&VAR_6->j_list_lock);
 } else if (VAR_7->b_transaction) {
  FUNC_3(VAR_7, (VAR_7->b_transaction ==
     VAR_6->j_committing_transaction));


  FUNC_1(VAR_7, "belongs to older transaction");







  FUNC_19(VAR_4);

  if (!VAR_7->b_next_transaction) {
   FUNC_20(&VAR_6->j_list_lock);
   VAR_7->b_next_transaction = VAR_5;
   FUNC_21(&VAR_6->j_list_lock);
  } else {
   FUNC_2(VAR_7->b_next_transaction == VAR_5);





   if (VAR_10)
    VAR_8 = 1;
  }
 } else {





  FUNC_20(&VAR_6->j_list_lock);
  if (!VAR_7->b_cp_transaction) {
   FUNC_1(VAR_7, "belongs to none transaction");
   FUNC_21(&VAR_6->j_list_lock);
   goto not_jbd;
  }





  if (!FUNC_12(VAR_4)) {
   FUNC_8(VAR_7);
   FUNC_21(&VAR_6->j_list_lock);
   goto not_jbd;
  }







  FUNC_14(VAR_4);
  FUNC_7(VAR_7, VAR_5, VAR_0);
  FUNC_21(&VAR_6->j_list_lock);
 }

 FUNC_18(VAR_4);
 FUNC_6(VAR_4);
drop:
 if (VAR_8) {

  VAR_3->h_buffer_credits++;
 }
 return VAR_9;

not_jbd:
 FUNC_18(VAR_4);
 FUNC_5(VAR_4);
 goto drop;
}
