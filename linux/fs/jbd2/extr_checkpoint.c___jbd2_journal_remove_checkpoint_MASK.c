
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct transaction_chp_stats_s {scalar_t__ cs_chp_time; } ;
struct TYPE_8__ {scalar_t__ t_state; int t_tid; struct transaction_chp_stats_s t_chp_stats; int * t_checkpoint_io_list; int * t_checkpoint_list; TYPE_3__* t_journal; } ;
typedef TYPE_2__ transaction_t ;
struct journal_head {TYPE_2__* b_cp_transaction; } ;
struct TYPE_9__ {TYPE_1__* j_fs_dev; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_7__ {int bd_dev; } ;


 int FUNC_0 (struct journal_head*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct journal_head*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct journal_head*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ,struct transaction_chp_stats_s*) ;

int FUNC_7(struct journal_head *VAR_2)
{
 struct transaction_chp_stats_s *VAR_3;
 transaction_t *VAR_4;
 journal_t *VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_2, "entry");

 if ((VAR_4 = VAR_2->b_cp_transaction) == ((void*)0)) {
  FUNC_0(VAR_2, "not on transaction");
  goto out;
 }
 VAR_5 = VAR_4->t_journal;

 FUNC_0(VAR_2, "removing from transaction");
 FUNC_1(VAR_2);
 VAR_2->b_cp_transaction = ((void*)0);
 FUNC_4(VAR_2);

 if (VAR_4->t_checkpoint_list != ((void*)0) ||
     VAR_4->t_checkpoint_io_list != ((void*)0))
  goto out;
 if (VAR_4->t_state != VAR_0)
  goto out;



 VAR_3 = &VAR_4->t_chp_stats;
 if (VAR_3->cs_chp_time)
  VAR_3->cs_chp_time = FUNC_5(VAR_3->cs_chp_time,
          VAR_1);
 FUNC_6(VAR_5->j_fs_dev->bd_dev,
        VAR_4->t_tid, VAR_3);

 FUNC_2(VAR_5, VAR_4);
 FUNC_3(VAR_4);
 VAR_6 = 1;
out:
 return VAR_6;
}
