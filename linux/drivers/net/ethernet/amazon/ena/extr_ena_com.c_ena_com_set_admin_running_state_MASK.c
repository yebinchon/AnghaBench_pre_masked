
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_admin_queue {int running_state; int q_lock; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct ena_com_dev *VAR_0, bool VAR_1)
{
 struct ena_com_admin_queue *VAR_2 = &VAR_0->admin_queue;
 unsigned long VAR_3 = 0;

 FUNC_0(&VAR_2->q_lock, VAR_3);
 VAR_0->admin_queue.running_state = VAR_1;
 FUNC_1(&VAR_2->q_lock, VAR_3);
}
