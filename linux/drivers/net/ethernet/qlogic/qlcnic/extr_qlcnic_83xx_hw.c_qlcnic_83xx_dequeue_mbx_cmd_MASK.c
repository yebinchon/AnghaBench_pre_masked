
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_mailbox {int queue_lock; int num_cmds; } ;
struct qlcnic_cmd_args {int list; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_mailbox* mailbox; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_0,
     struct qlcnic_cmd_args *VAR_1)
{
 struct qlcnic_mailbox *VAR_2 = VAR_0->ahw->mailbox;

 FUNC_2(&VAR_2->queue_lock);

 FUNC_0(&VAR_1->list);
 VAR_2->num_cmds--;

 FUNC_3(&VAR_2->queue_lock);

 FUNC_1(VAR_0, VAR_1);
}
