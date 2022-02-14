
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int quirk_altset_not_supp; int ep_list; TYPE_1__* ep0; } ;
struct pxa_udc {TYPE_3__* udc_usb_ep; TYPE_2__ gadget; struct pxa_ep* pxa_ep; } ;
struct pxa_ep {int lock; int queue; int enabled; } ;
struct TYPE_8__ {int maxpacket; int ep_list; } ;
struct TYPE_7__ {TYPE_4__ usb_ep; struct pxa_ep* pxa_ep; } ;
struct TYPE_5__ {int ep_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pxa_udc*) ;
 int FUNC_2 (struct pxa_ep*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_6(struct pxa_udc *VAR_2)
{
 int VAR_3;
 struct pxa_ep *VAR_4;


 FUNC_0(&VAR_2->gadget.ep_list);
 FUNC_0(&VAR_2->gadget.ep0->ep_list);
 VAR_2->udc_usb_ep[0].pxa_ep = &VAR_2->pxa_ep[0];
 VAR_2->gadget.quirk_altset_not_supp = 1;
 FUNC_1(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_2->pxa_ep[VAR_3];

  VAR_4->enabled = FUNC_2(VAR_4);
  FUNC_0(&VAR_4->queue);
  FUNC_4(&VAR_4->lock);
 }


 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
  FUNC_3(&VAR_2->udc_usb_ep[VAR_3].usb_ep.ep_list,
    &VAR_2->gadget.ep_list);
  FUNC_5(&VAR_2->udc_usb_ep[VAR_3].usb_ep,
        VAR_2->udc_usb_ep[VAR_3].usb_ep.maxpacket);
 }
}
