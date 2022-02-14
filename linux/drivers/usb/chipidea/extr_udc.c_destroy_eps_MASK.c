
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma; int ptr; } ;
struct ci_hw_ep {TYPE_1__ qh; scalar_t__ pending_td; } ;
struct ci_hdrc {int hw_ep_max; int qh_pool; struct ci_hw_ep* ci_hw_ep; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ci_hw_ep*) ;

__attribute__((used)) static void FUNC_2(struct ci_hdrc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->hw_ep_max; VAR_1++) {
  struct ci_hw_ep *VAR_2 = &VAR_0->ci_hw_ep[VAR_1];

  if (VAR_2->pending_td)
   FUNC_1(VAR_2);
  FUNC_0(VAR_0->qh_pool, VAR_2->qh.ptr, VAR_2->qh.dma);
 }
}
