
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int ep_list; TYPE_1__* ep0; } ;
struct lpc32xx_udc {int ep0state; TYPE_2__ gadget; struct lpc32xx_ep* ep; } ;
struct TYPE_6__ {int ep_list; } ;
struct lpc32xx_ep {scalar_t__ req_pending; int queue; int maxpacket; TYPE_3__ ep; } ;
struct TYPE_4__ {int ep_list; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_3(struct lpc32xx_udc *VAR_2)
{
 u32 VAR_3;

 FUNC_0(&VAR_2->gadget.ep_list);
 FUNC_0(&VAR_2->gadget.ep0->ep_list);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct lpc32xx_ep *VAR_4 = &VAR_2->ep[VAR_3];

  if (VAR_3 != 0)
   FUNC_1(&VAR_4->ep.ep_list, &VAR_2->gadget.ep_list);
  FUNC_2(&VAR_4->ep, VAR_4->maxpacket);
  FUNC_0(&VAR_4->queue);
  VAR_4->req_pending = 0;
 }

 VAR_2->ep0state = VAR_1;
}
