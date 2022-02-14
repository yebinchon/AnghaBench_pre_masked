
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* t_journal; } ;
typedef TYPE_2__ transaction_t ;
struct journal_head {char* b_frozen_data; scalar_t__ b_jlist; TYPE_2__* b_next_transaction; TYPE_2__* b_transaction; scalar_t__ b_modified; } ;
struct buffer_head {int b_size; int b_state; TYPE_1__* b_bdev; } ;
struct TYPE_11__ {TYPE_2__* j_committing_transaction; int j_list_lock; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_12__ {TYPE_2__* h_transaction; } ;
typedef TYPE_4__ handle_t ;
struct TYPE_9__ {int bd_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct journal_head*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct journal_head*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 char* FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct journal_head*) ;
 int FUNC_10 (TYPE_4__*,struct journal_head*) ;
 unsigned long FUNC_11 (unsigned long,unsigned long) ;
 int FUNC_12 (int,char*,struct journal_head*,int) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 struct buffer_head* FUNC_15 (struct journal_head*) ;
 unsigned long VAR_8 ;
 int FUNC_16 (unsigned long) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,int ) ;
 scalar_t__ FUNC_23 (char*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (int *,int ,int ) ;
 int FUNC_26 (struct buffer_head*) ;

__attribute__((used)) static int
FUNC_27(handle_t *VAR_9, struct journal_head *VAR_10,
   int VAR_11)
{
 struct buffer_head *VAR_12;
 transaction_t *VAR_13 = VAR_9->h_transaction;
 journal_t *VAR_14;
 int VAR_15;
 char *VAR_16 = ((void*)0);
 unsigned long VAR_17, VAR_18;

 if (FUNC_6(VAR_9))
  return -VAR_3;
 VAR_14 = VAR_13->t_journal;

 FUNC_12(5, "journal_head %p, force_copy %d\n", VAR_10, VAR_11);

 FUNC_0(VAR_10, "entry");
repeat:
 VAR_12 = FUNC_15(VAR_10);



  VAR_17 = VAR_8;
 FUNC_17(VAR_12);
 FUNC_13(VAR_12);


 VAR_18 = FUNC_11(VAR_17, VAR_8);
 if (VAR_18 > VAR_5/10)
  FUNC_22(VAR_12->b_bdev->bd_dev,
   FUNC_16(VAR_18));
 if (FUNC_3(VAR_12)) {




  if (VAR_10->b_transaction) {
   FUNC_1(VAR_10,
    VAR_10->b_transaction == VAR_13 ||
    VAR_10->b_transaction ==
     VAR_14->j_committing_transaction);
   if (VAR_10->b_next_transaction)
    FUNC_1(VAR_10, VAR_10->b_next_transaction ==
       VAR_13);
   FUNC_26(VAR_12);
  }





  FUNC_0(VAR_10, "Journalling dirty buffer");
  FUNC_5(VAR_12);
  FUNC_18(VAR_12);
 }

 FUNC_24(VAR_12);

 VAR_15 = -VAR_3;
 if (FUNC_6(VAR_9)) {
  FUNC_14(VAR_12);
  goto out;
 }
 VAR_15 = 0;





 if (VAR_10->b_transaction == VAR_13 ||
     VAR_10->b_next_transaction == VAR_13)
  goto done;





 VAR_10->b_modified = 0;






 if (!VAR_10->b_transaction) {
  FUNC_0(VAR_10, "no transaction");
  FUNC_1(VAR_10, !VAR_10->b_next_transaction);
  FUNC_0(VAR_10, "file as BJ_Reserved");





  FUNC_19();
  FUNC_20(&VAR_14->j_list_lock);
  FUNC_2(VAR_10, VAR_13, VAR_2);
  FUNC_21(&VAR_14->j_list_lock);
  goto done;
 }




 if (VAR_10->b_frozen_data) {
  FUNC_0(VAR_10, "has frozen data");
  FUNC_1(VAR_10, VAR_10->b_next_transaction == ((void*)0));
  goto attach_next;
 }

 FUNC_0(VAR_10, "owned by older transaction");
 FUNC_1(VAR_10, VAR_10->b_next_transaction == ((void*)0));
 FUNC_1(VAR_10, VAR_10->b_transaction == VAR_14->j_committing_transaction);
 if (FUNC_4(VAR_12)) {
  FUNC_0(VAR_10, "on shadow: sleep");
  FUNC_14(VAR_12);
  FUNC_25(&VAR_12->b_state, VAR_0, VAR_6);
  goto repeat;
 }
 if (VAR_10->b_jlist == VAR_1 || VAR_11) {
  FUNC_0(VAR_10, "generate frozen data");
  if (!VAR_16) {
   FUNC_0(VAR_10, "allocate memory for buffer");
   FUNC_14(VAR_12);
   VAR_16 = FUNC_7(FUNC_15(VAR_10)->b_size,
         VAR_4 | VAR_7);
   goto repeat;
  }
  VAR_10->b_frozen_data = VAR_16;
  VAR_16 = ((void*)0);
  FUNC_9(VAR_10);
 }
attach_next:





 FUNC_19();
 VAR_10->b_next_transaction = VAR_13;

done:
 FUNC_14(VAR_12);





 FUNC_10(VAR_9, VAR_10);

out:
 if (FUNC_23(VAR_16))
  FUNC_8(VAR_16, VAR_12->b_size);

 FUNC_0(VAR_10, "exit");
 return VAR_15;
}
