
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_mailbox {unsigned long num_cmds; int queue_lock; int work; int work_q; int cmd_q; int status; } ;
struct qlcnic_cmd_args {unsigned long total_cmds; int list; int rsp_opcode; int completion; int rsp_status; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {struct qlcnic_mailbox* mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_5,
           struct qlcnic_cmd_args *VAR_6,
           unsigned long *VAR_7)
{
 struct qlcnic_mailbox *VAR_8 = VAR_5->ahw->mailbox;

 if (FUNC_6(VAR_1, &VAR_8->status)) {
  FUNC_0(&VAR_6->rsp_status, VAR_3);
  FUNC_1(&VAR_6->completion);
  VAR_6->rsp_opcode = VAR_2;

  FUNC_4(&VAR_8->queue_lock);

  FUNC_2(&VAR_6->list, &VAR_8->cmd_q);
  VAR_8->num_cmds++;
  VAR_6->total_cmds = VAR_8->num_cmds;
  *VAR_7 = VAR_6->total_cmds * VAR_4;
  FUNC_3(VAR_8->work_q, &VAR_8->work);

  FUNC_5(&VAR_8->queue_lock);

  return 0;
 }

 return -VAR_0;
}
