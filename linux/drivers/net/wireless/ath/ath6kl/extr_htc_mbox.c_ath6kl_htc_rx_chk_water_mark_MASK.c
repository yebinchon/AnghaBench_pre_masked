
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_ep_callbacks {scalar_t__ rx_refill_thresh; int (* rx_refill ) (TYPE_1__*,int ) ;} ;
struct htc_endpoint {TYPE_1__* target; int eid; int rx_bufq; struct htc_ep_callbacks ep_cb; } ;
struct TYPE_2__ {int rx_lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct htc_endpoint *VAR_0)
{
 struct htc_ep_callbacks VAR_1 = VAR_0->ep_cb;

 if (VAR_1.rx_refill_thresh > 0) {
  FUNC_1(&VAR_0->target->rx_lock);
  if (FUNC_0(&VAR_0->rx_bufq)
      < VAR_1.rx_refill_thresh) {
   FUNC_2(&VAR_0->target->rx_lock);
   VAR_1.rx_refill(VAR_0->target, VAR_0->eid);
   return;
  }
  FUNC_2(&VAR_0->target->rx_lock);
 }
}
