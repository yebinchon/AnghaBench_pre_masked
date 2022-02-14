
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_priv {int cmd_queue; int terminate_cmdthread_comp; int cmd_queue_comp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct cmd_priv *VAR_1)
{
 FUNC_1(&VAR_1->cmd_queue_comp);
 FUNC_1(&VAR_1->terminate_cmdthread_comp);

 FUNC_0(&VAR_1->cmd_queue);
 return VAR_0;
}
