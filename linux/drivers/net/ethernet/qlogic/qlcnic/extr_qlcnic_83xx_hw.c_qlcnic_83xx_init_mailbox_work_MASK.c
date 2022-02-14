
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_mailbox {int status; int work; int * work_q; int completion; int cmd_q; int aen_lock; int queue_lock; struct qlcnic_adapter* adapter; int * ops; } ;
struct qlcnic_hardware_context {struct qlcnic_mailbox* mailbox; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qlcnic_mailbox*) ;
 struct qlcnic_mailbox* FUNC_5 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct qlcnic_adapter *VAR_5)
{
 struct qlcnic_hardware_context *VAR_6 = VAR_5->ahw;
 struct qlcnic_mailbox *VAR_7;

 VAR_6->mailbox = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_6->mailbox)
  return -VAR_0;

 VAR_7 = VAR_6->mailbox;
 VAR_7->ops = &VAR_4;
 VAR_7->adapter = VAR_5;

 FUNC_7(&VAR_7->queue_lock);
 FUNC_7(&VAR_7->aen_lock);
 FUNC_0(&VAR_7->cmd_q);
 FUNC_3(&VAR_7->completion);

 VAR_7->work_q = FUNC_2("qlcnic_mailbox");
 if (VAR_7->work_q == ((void*)0)) {
  FUNC_4(VAR_7);
  return -VAR_0;
 }

 FUNC_1(&VAR_7->work, VAR_3);
 FUNC_6(VAR_2, &VAR_7->status);
 return 0;
}
