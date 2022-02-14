
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int tid_release_task_busy; int flags; int * tid_release_head; int db_drop_task; int db_full_task; int tid_release_task; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_1)
{
 FUNC_0(&VAR_1->tid_release_task);
 FUNC_0(&VAR_1->db_full_task);
 FUNC_0(&VAR_1->db_drop_task);
 VAR_1->tid_release_task_busy = 0;
 VAR_1->tid_release_head = ((void*)0);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 VAR_1->flags &= ~VAR_0;
}
