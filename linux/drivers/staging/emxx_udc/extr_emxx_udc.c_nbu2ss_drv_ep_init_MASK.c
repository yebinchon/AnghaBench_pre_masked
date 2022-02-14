
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ep_list; TYPE_2__* ep0; } ;
struct nbu2ss_udc {struct nbu2ss_ep* ep; TYPE_1__ gadget; } ;
struct TYPE_5__ {int ep_list; int * ops; int caps; int name; int * driver_data; } ;
struct nbu2ss_ep {TYPE_2__ ep; int queue; int * desc; struct nbu2ss_udc* udc; } ;
struct TYPE_6__ {int caps; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(struct nbu2ss_udc *VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_5->gadget.ep_list);
 VAR_5->gadget.ep0 = &VAR_5->ep[0].ep;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct nbu2ss_ep *VAR_7 = &VAR_5->ep[VAR_6];

  VAR_7->udc = VAR_5;
  VAR_7->desc = ((void*)0);

  VAR_7->ep.driver_data = ((void*)0);
  VAR_7->ep.name = VAR_3[VAR_6].name;
  VAR_7->ep.caps = VAR_3[VAR_6].caps;
  VAR_7->ep.ops = &VAR_4;

  FUNC_3(&VAR_7->ep,
        VAR_6 == 0 ? VAR_0
        : VAR_1);

  FUNC_1(&VAR_7->ep.ep_list, &VAR_5->gadget.ep_list);
  FUNC_0(&VAR_7->queue);
 }

 FUNC_2(&VAR_5->ep[0].ep.ep_list);
}
