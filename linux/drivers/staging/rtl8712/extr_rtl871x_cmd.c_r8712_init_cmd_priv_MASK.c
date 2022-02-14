
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_priv {int cmd_seq; scalar_t__ rsp_cnt; scalar_t__ cmd_done_cnt; scalar_t__ cmd_issued_cnt; void* rsp_allocated_buf; void* rsp_buf; int * cmd_allocated_buf; int * cmd_buf; int cmd_queue; int terminate_cmdthread_comp; int cmd_queue_comp; } ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (scalar_t__,int ) ;

int FUNC_4(struct cmd_priv *VAR_5)
{
 FUNC_1(&VAR_5->cmd_queue_comp);
 FUNC_1(&VAR_5->terminate_cmdthread_comp);

 FUNC_0(&(VAR_5->cmd_queue));


 VAR_5->cmd_seq = 1;
 VAR_5->cmd_allocated_buf = FUNC_3(VAR_3 + VAR_0,
           VAR_2);
 if (!VAR_5->cmd_allocated_buf)
  return -VAR_1;
 VAR_5->cmd_buf = VAR_5->cmd_allocated_buf + VAR_0 -
       ((addr_t)(VAR_5->cmd_allocated_buf) &
       (VAR_0 - 1));
 VAR_5->rsp_allocated_buf = FUNC_3(VAR_4 + 4, VAR_2);
 if (!VAR_5->rsp_allocated_buf) {
  FUNC_2(VAR_5->cmd_allocated_buf);
  VAR_5->cmd_allocated_buf = ((void*)0);
  return -VAR_1;
 }
 VAR_5->rsp_buf = VAR_5->rsp_allocated_buf + 4 -
       ((addr_t)(VAR_5->rsp_allocated_buf) & 3);
 VAR_5->cmd_issued_cnt = 0;
 VAR_5->cmd_done_cnt = 0;
 VAR_5->rsp_cnt = 0;
 return 0;
}
