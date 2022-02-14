
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* j_wbuf; scalar_t__ j_chksum_driver; scalar_t__ j_revoke; int j_inode; scalar_t__ j_proc_entry; scalar_t__ j_sb_buffer; int j_checkpoint_mutex; int j_state_lock; scalar_t__ j_transaction_sequence; scalar_t__ j_tail_sequence; int j_list_lock; int * j_checkpoint_transactions; int * j_committing_transaction; int * j_running_transaction; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

int FUNC_19(journal_t *VAR_4)
{
 int VAR_5 = 0;


 FUNC_11(VAR_4);


 if (VAR_4->j_running_transaction)
  FUNC_5(VAR_4);




 FUNC_15(&VAR_4->j_list_lock);
 while (VAR_4->j_checkpoint_transactions != ((void*)0)) {
  FUNC_16(&VAR_4->j_list_lock);
  FUNC_13(&VAR_4->j_checkpoint_mutex);
  VAR_5 = FUNC_8(VAR_4);
  FUNC_14(&VAR_4->j_checkpoint_mutex);




  if (VAR_5) {
   FUNC_6(VAR_4);
   FUNC_15(&VAR_4->j_list_lock);
   break;
  }
  FUNC_15(&VAR_4->j_list_lock);
 }

 FUNC_0(VAR_4->j_running_transaction == ((void*)0));
 FUNC_0(VAR_4->j_committing_transaction == ((void*)0));
 FUNC_0(VAR_4->j_checkpoint_transactions == ((void*)0));
 FUNC_16(&VAR_4->j_list_lock);

 if (VAR_4->j_sb_buffer) {
  if (!FUNC_4(VAR_4)) {
   FUNC_13(&VAR_4->j_checkpoint_mutex);

   FUNC_17(&VAR_4->j_state_lock);
   VAR_4->j_tail_sequence =
    ++VAR_4->j_transaction_sequence;
   FUNC_18(&VAR_4->j_state_lock);

   FUNC_9(VAR_4,
     VAR_3 | VAR_2 | VAR_1);
   FUNC_14(&VAR_4->j_checkpoint_mutex);
  } else
   VAR_5 = -VAR_0;
  FUNC_1(VAR_4->j_sb_buffer);
 }

 if (VAR_4->j_proc_entry)
  FUNC_10(VAR_4);
 FUNC_3(VAR_4->j_inode);
 if (VAR_4->j_revoke)
  FUNC_7(VAR_4);
 if (VAR_4->j_chksum_driver)
  FUNC_2(VAR_4->j_chksum_driver);
 FUNC_12(VAR_4->j_wbuf);
 FUNC_12(VAR_4);

 return VAR_5;
}
