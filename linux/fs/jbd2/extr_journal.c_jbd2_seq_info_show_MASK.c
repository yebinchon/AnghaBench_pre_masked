
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {struct jbd2_stats_proc_session* private; } ;
struct jbd2_stats_proc_session {TYPE_3__* stats; TYPE_1__* journal; } ;
struct TYPE_5__ {int rs_wait; int rs_request_delay; int rs_running; int rs_locked; int rs_flushing; int rs_logging; int rs_handle_count; int rs_blocks; int rs_blocks_logged; } ;
struct TYPE_6__ {int ts_tid; int ts_requested; TYPE_2__ run; } ;
struct TYPE_4__ {int j_average_commit_time; int j_max_transaction_buffers; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct jbd2_stats_proc_session *VAR_3 = VAR_1->private;

 if (VAR_2 != VAR_0)
  return 0;
 FUNC_2(VAR_1, "%lu transactions (%lu requested), "
     "each up to %u blocks\n",
     VAR_3->stats->ts_tid, VAR_3->stats->ts_requested,
     VAR_3->journal->j_max_transaction_buffers);
 if (VAR_3->stats->ts_tid == 0)
  return 0;
 FUNC_2(VAR_1, "average: \n  %ums waiting for transaction\n",
     FUNC_1(VAR_3->stats->run.rs_wait / VAR_3->stats->ts_tid));
 FUNC_2(VAR_1, "  %ums request delay\n",
     (VAR_3->stats->ts_requested == 0) ? 0 :
     FUNC_1(VAR_3->stats->run.rs_request_delay /
        VAR_3->stats->ts_requested));
 FUNC_2(VAR_1, "  %ums running transaction\n",
     FUNC_1(VAR_3->stats->run.rs_running / VAR_3->stats->ts_tid));
 FUNC_2(VAR_1, "  %ums transaction was being locked\n",
     FUNC_1(VAR_3->stats->run.rs_locked / VAR_3->stats->ts_tid));
 FUNC_2(VAR_1, "  %ums flushing data (in ordered mode)\n",
     FUNC_1(VAR_3->stats->run.rs_flushing / VAR_3->stats->ts_tid));
 FUNC_2(VAR_1, "  %ums logging transaction\n",
     FUNC_1(VAR_3->stats->run.rs_logging / VAR_3->stats->ts_tid));
 FUNC_2(VAR_1, "  %lluus average transaction commit time\n",
     FUNC_0(VAR_3->journal->j_average_commit_time, 1000));
 FUNC_2(VAR_1, "  %lu handles per transaction\n",
     VAR_3->stats->run.rs_handle_count / VAR_3->stats->ts_tid);
 FUNC_2(VAR_1, "  %lu blocks per transaction\n",
     VAR_3->stats->run.rs_blocks / VAR_3->stats->ts_tid);
 FUNC_2(VAR_1, "  %lu logged blocks per transaction\n",
     VAR_3->stats->run.rs_blocks_logged / VAR_3->stats->ts_tid);
 return 0;
}
