
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int wait; } ;
struct mwifiex_adapter {TYPE_1__ cmd_wait_q; } ;
struct cmd_ctrl_node {int * condition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct mwifiex_adapter *VAR_3,
    struct cmd_ctrl_node *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_2(VAR_3->cmd_wait_q.wait,
        *(VAR_4->condition),
        (12 * VAR_2));
 if (VAR_5 <= 0) {
  if (VAR_5 == 0)
   VAR_5 = -VAR_1;
  FUNC_1(VAR_3, VAR_0, "cmd_wait_q terminated: %d\n",
       VAR_5);
  FUNC_0(VAR_3);
  return VAR_5;
 }

 VAR_5 = VAR_3->cmd_wait_q.status;
 VAR_3->cmd_wait_q.status = 0;

 return VAR_5;
}
