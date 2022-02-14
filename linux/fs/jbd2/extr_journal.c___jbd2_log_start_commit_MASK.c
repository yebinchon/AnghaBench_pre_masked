
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tid_t ;
struct TYPE_5__ {scalar_t__ j_commit_request; TYPE_1__* j_running_transaction; int j_commit_sequence; int j_wait_commit; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_4__ {scalar_t__ t_tid; int t_requested; } ;


 int FUNC_0 (int,char*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

int FUNC_4(journal_t *VAR_1, tid_t VAR_2)
{

 if (VAR_1->j_commit_request == VAR_2)
  return 0;






 if (VAR_1->j_running_transaction &&
     VAR_1->j_running_transaction->t_tid == VAR_2) {





  VAR_1->j_commit_request = VAR_2;
  FUNC_1(1, "JBD2: requesting commit %u/%u\n",
     VAR_1->j_commit_request,
     VAR_1->j_commit_sequence);
  VAR_1->j_running_transaction->t_requested = VAR_0;
  FUNC_3(&VAR_1->j_wait_commit);
  return 1;
 } else if (!FUNC_2(VAR_1->j_commit_request, VAR_2))



  FUNC_0(1, "JBD2: bad log_start_commit: %u %u %u %u\n",
     VAR_1->j_commit_request,
     VAR_1->j_commit_sequence,
     VAR_2, VAR_1->j_running_transaction ?
     VAR_1->j_running_transaction->t_tid : 0);
 return 0;
}
