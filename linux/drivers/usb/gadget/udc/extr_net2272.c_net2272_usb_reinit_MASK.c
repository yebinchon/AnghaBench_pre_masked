
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type_control; int type_iso; int type_bulk; int type_int; int dir_in; int dir_out; } ;
struct TYPE_6__ {int ep_list; TYPE_1__ caps; int name; } ;
struct net2272_ep {int num; int dma; int fifo_size; scalar_t__ stopped; TYPE_3__ ep; scalar_t__ not_empty; struct net2272* dev; } ;
struct TYPE_5__ {TYPE_3__* ep0; } ;
struct net2272 {TYPE_2__ gadget; struct net2272_ep* ep; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct net2272_ep*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct net2272 *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
  struct net2272_ep *VAR_5 = &VAR_3->ep[VAR_4];

  VAR_5->ep.name = VAR_1[VAR_4];
  VAR_5->dev = VAR_3;
  VAR_5->num = VAR_4;
  VAR_5->not_empty = 0;

  if (VAR_2 && VAR_5->num == VAR_0)
   VAR_5->dma = 1;

  if (VAR_4 > 0 && VAR_4 <= 3)
   VAR_5->fifo_size = 512;
  else
   VAR_5->fifo_size = 64;
  FUNC_1(VAR_5);

  if (VAR_4 == 0) {
   VAR_5->ep.caps.type_control = 1;
  } else {
   VAR_5->ep.caps.type_iso = 1;
   VAR_5->ep.caps.type_bulk = 1;
   VAR_5->ep.caps.type_int = 1;
  }

  VAR_5->ep.caps.dir_in = 1;
  VAR_5->ep.caps.dir_out = 1;
 }
 FUNC_2(&VAR_3->ep[0].ep, 64);

 VAR_3->gadget.ep0 = &VAR_3->ep[0].ep;
 VAR_3->ep[0].stopped = 0;
 FUNC_0(&VAR_3->gadget.ep0->ep_list);
}
