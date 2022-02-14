
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_ep {TYPE_1__* udc; struct ep_queue_head* qh; } ;
struct ep_queue_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ ep0_dir; struct ep_queue_head* ep_qh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fsl_ep*) ;

__attribute__((used)) static inline struct ep_queue_head *FUNC_1(struct fsl_ep *VAR_1)
{

 if (FUNC_0(VAR_1) != 0)
  return VAR_1->qh;
 else
  return &VAR_1->udc->ep_qh[(VAR_1->udc->ep0_dir ==
    VAR_0) ? 1 : 0];
}
