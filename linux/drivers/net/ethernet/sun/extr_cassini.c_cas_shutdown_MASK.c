
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {int cas_flags; int reset_task_pending; int reset_task_pending_all; int reset_task_pending_spare; int reset_task_pending_mtu; int link_timer; scalar_t__ hw_running; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct cas*,unsigned long) ;
 int FUNC_2 (struct cas*) ;
 int FUNC_3 (struct cas*,int ) ;
 int FUNC_4 (struct cas*,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct cas *VAR_1)
{
 unsigned long VAR_2;


 VAR_1->hw_running = 0;

 FUNC_5(&VAR_1->link_timer);
 while (FUNC_0(&VAR_1->reset_task_pending))
  FUNC_6();


 FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_1, 0);
 if (VAR_1->cas_flags & VAR_0)
  FUNC_2(VAR_1);
 FUNC_4(VAR_1, VAR_2);
}
