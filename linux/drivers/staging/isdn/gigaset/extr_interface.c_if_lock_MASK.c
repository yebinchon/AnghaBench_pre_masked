
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {scalar_t__ mstate; int control_state; int waiting; int cmd_result; int waitqueue; int at_state; TYPE_1__* ops; scalar_t__ connected; int minor_index; } ;
struct TYPE_2__ {int (* set_line_ctrl ) (struct cardstate*,int ) ;int (* baud_rate ) (struct cardstate*,int ) ;int (* set_modem_ctrl ) (struct cardstate*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct cardstate*,int *,int ,int *,int,int *) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (struct cardstate*,int ,int) ;
 int FUNC_4 (struct cardstate*,int ) ;
 int FUNC_5 (struct cardstate*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct cardstate *VAR_9, int *VAR_10)
{
 int VAR_11 = *VAR_10;

 FUNC_0(VAR_2, "%u: if_lock (%d)", VAR_9->minor_index, VAR_11);

 if (VAR_11 > 1)
  return -VAR_3;

 if (VAR_11 < 0) {
  *VAR_10 = VAR_9->mstate == VAR_6;
  return 0;
 }

 if (!VAR_11 && VAR_9->mstate == VAR_6 && VAR_9->connected) {
  VAR_9->ops->set_modem_ctrl(VAR_9, 0, VAR_7 | VAR_8);
  VAR_9->ops->baud_rate(VAR_9, VAR_0);
  VAR_9->ops->set_line_ctrl(VAR_9, VAR_1);
  VAR_9->control_state = VAR_7 | VAR_8;
 }

 VAR_9->waiting = 1;
 if (!FUNC_1(VAR_9, &VAR_9->at_state, VAR_5,
          ((void*)0), VAR_11, ((void*)0))) {
  VAR_9->waiting = 0;
  return -VAR_4;
 }
 FUNC_2(VAR_9);

 FUNC_6(VAR_9->waitqueue, !VAR_9->waiting);

 if (VAR_9->cmd_result >= 0) {
  *VAR_10 = VAR_9->cmd_result;
  return 0;
 }

 return VAR_9->cmd_result;
}
