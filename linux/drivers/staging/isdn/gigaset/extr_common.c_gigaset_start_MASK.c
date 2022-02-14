
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {int connected; scalar_t__ mstate; int control_state; int waiting; int mutex; int waitqueue; int at_state; TYPE_1__* ops; int lock; } ;
struct TYPE_2__ {int (* set_line_ctrl ) (struct cardstate*,int ) ;int (* baud_rate ) (struct cardstate*,int ) ;int (* set_modem_ctrl ) (struct cardstate*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cardstate*,int *,int ,int *,int ,int *) ;
 int FUNC_1 (struct cardstate*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct cardstate*,int ,int) ;
 int FUNC_7 (struct cardstate*,int ) ;
 int FUNC_8 (struct cardstate*,int ) ;
 int FUNC_9 (int ,int) ;

int FUNC_10(struct cardstate *VAR_8)
{
 unsigned long VAR_9;

 if (FUNC_2(&VAR_8->mutex))
  return -VAR_2;

 FUNC_4(&VAR_8->lock, VAR_9);
 VAR_8->connected = 1;
 FUNC_5(&VAR_8->lock, VAR_9);

 if (VAR_8->mstate != VAR_5) {
  VAR_8->ops->set_modem_ctrl(VAR_8, 0, VAR_6 | VAR_7);
  VAR_8->ops->baud_rate(VAR_8, VAR_0);
  VAR_8->ops->set_line_ctrl(VAR_8, VAR_1);
  VAR_8->control_state = VAR_6 | VAR_7;
 }

 VAR_8->waiting = 1;

 if (!FUNC_0(VAR_8, &VAR_8->at_state, VAR_4, ((void*)0), 0, ((void*)0))) {
  VAR_8->waiting = 0;
  goto error;
 }
 FUNC_1(VAR_8);

 FUNC_9(VAR_8->waitqueue, !VAR_8->waiting);

 FUNC_3(&VAR_8->mutex);
 return 0;

error:
 FUNC_3(&VAR_8->mutex);
 return -VAR_3;
}
