
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2fc_interface {int timer_work_queue; } ;
struct bnx2fc_cmd {int refcount; int timeout_work; TYPE_1__* port; } ;
struct TYPE_2__ {struct bnx2fc_interface* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;

void FUNC_3(struct bnx2fc_cmd *VAR_0,
     unsigned int VAR_1)
{
 struct bnx2fc_interface *VAR_2 = VAR_0->port->priv;

 if (FUNC_2(VAR_2->timer_work_queue,
          &VAR_0->timeout_work,
          FUNC_1(VAR_1)))
  FUNC_0(&VAR_0->refcount);
}
