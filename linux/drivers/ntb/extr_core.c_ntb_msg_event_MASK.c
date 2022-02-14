
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int ctx_lock; int ctx; TYPE_1__* ctx_ops; } ;
struct TYPE_2__ {int (* msg_event ) (int ) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ntb_dev *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->ctx_lock, VAR_1);
 {
  if (VAR_0->ctx_ops && VAR_0->ctx_ops->msg_event)
   VAR_0->ctx_ops->msg_event(VAR_0->ctx);
 }
 FUNC_1(&VAR_0->ctx_lock, VAR_1);
}
