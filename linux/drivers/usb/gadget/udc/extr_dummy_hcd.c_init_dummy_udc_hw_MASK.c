
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int max_streams; int ep_list; int * ops; int caps; scalar_t__ name; } ;
struct dummy_ep {TYPE_3__ ep; int queue; int * desc; TYPE_2__* gadget; int last_io; scalar_t__ setup_stage; scalar_t__ already_seen; scalar_t__ wedged; scalar_t__ halted; } ;
struct TYPE_6__ {int is_otg; TYPE_3__* ep0; int ep_list; } ;
struct TYPE_5__ {int queue; } ;
struct dummy {TYPE_2__ gadget; TYPE_1__ fifo_req; struct dummy_ep* ep; } ;
struct TYPE_8__ {int caps; scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(struct dummy *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->gadget.ep_list);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct dummy_ep *VAR_6 = &VAR_4->ep[VAR_5];

  if (!VAR_2[VAR_5].name)
   break;
  VAR_6->ep.name = VAR_2[VAR_5].name;
  VAR_6->ep.caps = VAR_2[VAR_5].caps;
  VAR_6->ep.ops = &VAR_1;
  FUNC_1(&VAR_6->ep.ep_list, &VAR_4->gadget.ep_list);
  VAR_6->halted = VAR_6->wedged = VAR_6->already_seen =
    VAR_6->setup_stage = 0;
  FUNC_3(&VAR_6->ep, ~0);
  VAR_6->ep.max_streams = 16;
  VAR_6->last_io = VAR_3;
  VAR_6->gadget = &VAR_4->gadget;
  VAR_6->desc = ((void*)0);
  FUNC_0(&VAR_6->queue);
 }

 VAR_4->gadget.ep0 = &VAR_4->ep[0].ep;
 FUNC_2(&VAR_4->ep[0].ep.ep_list);
 FUNC_0(&VAR_4->fifo_req.queue);




}
