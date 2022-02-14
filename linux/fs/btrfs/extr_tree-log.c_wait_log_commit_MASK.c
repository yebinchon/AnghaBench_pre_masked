
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int log_transid_committed; int * log_commit_wait; int log_mutex; int * log_commit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct btrfs_root *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1);
 int VAR_4 = VAR_3 % 2;






 for (;;) {
  FUNC_5(&VAR_2->log_commit_wait[VAR_4],
    &VAR_1, VAR_0);

  if (!(VAR_2->log_transid_committed < VAR_3 &&
        FUNC_1(&VAR_2->log_commit[VAR_4])))
   break;

  FUNC_4(&VAR_2->log_mutex);
  FUNC_6();
  FUNC_3(&VAR_2->log_mutex);
 }
 FUNC_2(&VAR_2->log_commit_wait[VAR_4], &VAR_1);
}
