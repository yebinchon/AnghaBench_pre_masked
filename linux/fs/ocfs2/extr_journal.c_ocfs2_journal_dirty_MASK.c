
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {TYPE_2__* b_bdev; scalar_t__ b_blocknr; } ;
typedef int journal_t ;
struct TYPE_10__ {int h_err; TYPE_1__* h_transaction; } ;
typedef TYPE_3__ handle_t ;
struct TYPE_9__ {struct super_block* bd_super; } ;
struct TYPE_8__ {int * t_journal; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct buffer_head*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct super_block*,char*) ;
 int FUNC_7 (unsigned long long) ;

void FUNC_8(handle_t *VAR_1, struct buffer_head *VAR_2)
{
 int VAR_3;

 FUNC_7((unsigned long long)VAR_2->b_blocknr);

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_5(VAR_3);
  if (!FUNC_0(VAR_1)) {
   journal_t *VAR_4 = VAR_1->h_transaction->t_journal;
   struct super_block *VAR_5 = VAR_2->b_bdev->bd_super;

   FUNC_4(VAR_0, "jbd2_journal_dirty_metadata failed. "
     "Aborting transaction and journal.\n");
   VAR_1->h_err = VAR_3;
   FUNC_2(VAR_1);
   FUNC_1(VAR_4, VAR_3);
   FUNC_6(VAR_5, "Journal already aborted.\n");
  }
 }
}
