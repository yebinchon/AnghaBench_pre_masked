
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_priv {int cmd_seq; int sctx_mutex; scalar_t__ rsp_cnt; scalar_t__ cmd_done_cnt; scalar_t__ cmd_issued_cnt; void* rsp_allocated_buf; void* rsp_buf; void* cmd_allocated_buf; void* cmd_buf; int cmd_queue; int terminate_cmdthread_comp; int cmd_queue_comp; } ;
typedef int SIZE_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (scalar_t__) ;

int FUNC_4(struct cmd_priv *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(&VAR_4->cmd_queue_comp);
 FUNC_1(&VAR_4->terminate_cmdthread_comp);

 FUNC_0(&(VAR_4->cmd_queue));



 VAR_4->cmd_seq = 1;

 VAR_4->cmd_allocated_buf = FUNC_3(VAR_2 + VAR_0);

 if (!VAR_4->cmd_allocated_buf) {
  VAR_5 = -VAR_1;
  goto exit;
 }

 VAR_4->cmd_buf = VAR_4->cmd_allocated_buf + VAR_0 - ((SIZE_PTR)(VAR_4->cmd_allocated_buf) & (VAR_0-1));

 VAR_4->rsp_allocated_buf = FUNC_3(VAR_3 + 4);

 if (!VAR_4->rsp_allocated_buf) {
  VAR_5 = -VAR_1;
  goto exit;
 }

 VAR_4->rsp_buf = VAR_4->rsp_allocated_buf + 4 - ((SIZE_PTR)(VAR_4->rsp_allocated_buf) & 3);

 VAR_4->cmd_issued_cnt = VAR_4->cmd_done_cnt = VAR_4->rsp_cnt = 0;

 FUNC_2(&VAR_4->sctx_mutex);
exit:
 return VAR_5;
}
