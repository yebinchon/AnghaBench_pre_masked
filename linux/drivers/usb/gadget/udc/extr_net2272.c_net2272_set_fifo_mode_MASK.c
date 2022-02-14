
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int ep_list; } ;
struct net2272 {TYPE_3__* ep; TYPE_2__ gadget; } ;
struct TYPE_4__ {int ep_list; } ;
struct TYPE_6__ {int fifo_size; TYPE_1__ ep; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct net2272*,int ) ;
 int FUNC_3 (struct net2272*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct net2272 *VAR_1, int VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0) & 0x3f;
 VAR_3 |= (VAR_2 << 6);
 FUNC_3(VAR_1, VAR_0, VAR_3);

 FUNC_0(&VAR_1->gadget.ep_list);


 FUNC_1(&VAR_1->ep[1].ep.ep_list, &VAR_1->gadget.ep_list);

 switch (VAR_2) {
 case 0:
  FUNC_1(&VAR_1->ep[2].ep.ep_list, &VAR_1->gadget.ep_list);
  VAR_1->ep[1].fifo_size = VAR_1->ep[2].fifo_size = 512;
  break;
 case 1:
  FUNC_1(&VAR_1->ep[2].ep.ep_list, &VAR_1->gadget.ep_list);
  VAR_1->ep[1].fifo_size = 1024;
  VAR_1->ep[2].fifo_size = 512;
  break;
 case 2:
  FUNC_1(&VAR_1->ep[2].ep.ep_list, &VAR_1->gadget.ep_list);
  VAR_1->ep[1].fifo_size = VAR_1->ep[2].fifo_size = 1024;
  break;
 case 3:
  VAR_1->ep[1].fifo_size = 1024;
  break;
 }


 FUNC_1(&VAR_1->ep[3].ep.ep_list, &VAR_1->gadget.ep_list);
 VAR_1->ep[3].fifo_size = 512;
}
