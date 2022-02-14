
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ep_list; } ;
struct net2280 {TYPE_4__ gadget; TYPE_3__* ep; TYPE_1__* regs; } ;
struct TYPE_6__ {int ep_list; } ;
struct TYPE_7__ {int fifo_size; TYPE_2__ ep; } ;
struct TYPE_5__ {int fifoctl; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct net2280 *VAR_1, int VAR_2)
{

 FUNC_2((0xffff << VAR_0) | VAR_2, &VAR_1->regs->fifoctl);


 FUNC_0(&VAR_1->gadget.ep_list);
 FUNC_1(&VAR_1->ep[1].ep.ep_list, &VAR_1->gadget.ep_list);
 FUNC_1(&VAR_1->ep[2].ep.ep_list, &VAR_1->gadget.ep_list);
 switch (VAR_2) {
 case 0:
  FUNC_1(&VAR_1->ep[3].ep.ep_list, &VAR_1->gadget.ep_list);
  FUNC_1(&VAR_1->ep[4].ep.ep_list, &VAR_1->gadget.ep_list);
  VAR_1->ep[1].fifo_size = VAR_1->ep[2].fifo_size = 1024;
  break;
 case 1:
  VAR_1->ep[1].fifo_size = VAR_1->ep[2].fifo_size = 2048;
  break;
 case 2:
  FUNC_1(&VAR_1->ep[3].ep.ep_list, &VAR_1->gadget.ep_list);
  VAR_1->ep[1].fifo_size = 2048;
  VAR_1->ep[2].fifo_size = 1024;
  break;
 }

 FUNC_1(&VAR_1->ep[5].ep.ep_list, &VAR_1->gadget.ep_list);
 FUNC_1(&VAR_1->ep[6].ep.ep_list, &VAR_1->gadget.ep_list);
}
