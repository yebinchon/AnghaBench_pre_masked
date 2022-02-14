
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int ep_list; int caps; int name; } ;
struct net2280_ep {int num; int fifo_size; scalar_t__ stopped; TYPE_3__ ep; int * cfg; int * regs; int * dma; struct net2280* dev; } ;
struct TYPE_5__ {TYPE_3__* ep0; } ;
struct net2280 {TYPE_2__* dep; TYPE_1__ gadget; struct net2280_ep* ep; int regs; int * epregs; int * dma; } ;
struct TYPE_8__ {int caps; int name; } ;
struct TYPE_6__ {int dep_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (int ,struct net2280_ep*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net2280 *VAR_2)
{
 u32 VAR_3;


 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
  struct net2280_ep *VAR_4 = &VAR_2->ep[VAR_3];

  VAR_4->ep.name = VAR_1[VAR_3].name;
  VAR_4->ep.caps = VAR_1[VAR_3].caps;
  VAR_4->dev = VAR_2;
  VAR_4->num = VAR_3;

  if (VAR_3 > 0 && VAR_3 <= 4) {
   VAR_4->fifo_size = 1024;
   VAR_4->dma = &VAR_2->dma[VAR_3 - 1];
  } else
   VAR_4->fifo_size = 64;
  VAR_4->regs = &VAR_2->epregs[VAR_3];
  VAR_4->cfg = &VAR_2->epregs[VAR_3];
  FUNC_1(VAR_2->regs, VAR_4);
 }
 FUNC_2(&VAR_2->ep[0].ep, 64);
 FUNC_2(&VAR_2->ep[5].ep, 64);
 FUNC_2(&VAR_2->ep[6].ep, 64);

 VAR_2->gadget.ep0 = &VAR_2->ep[0].ep;
 VAR_2->ep[0].stopped = 0;
 FUNC_0(&VAR_2->gadget.ep0->ep_list);




 for (VAR_3 = 0; VAR_3 < 5; VAR_3++)
  FUNC_3(VAR_0, &VAR_2->dep[VAR_3].dep_cfg);
}
