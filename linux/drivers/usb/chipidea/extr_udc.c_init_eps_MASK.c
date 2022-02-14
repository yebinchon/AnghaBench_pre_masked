
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type_control; int type_iso; int type_bulk; int type_int; int dir_in; int dir_out; } ;
struct TYPE_8__ {int ep_list; TYPE_1__ caps; int * ops; int name; } ;
struct TYPE_6__ {int * ptr; int dma; int queue; } ;
struct ci_hw_ep {TYPE_4__ ep; TYPE_2__ qh; int name; int td_pool; int * lock; struct ci_hdrc* ci; } ;
struct TYPE_7__ {int ep_list; } ;
struct ci_hdrc {int hw_ep_max; TYPE_3__ gadget; struct ci_hw_ep* ep0in; struct ci_hw_ep* ep0out; int qh_pool; int td_pool; int lock; struct ci_hw_ep* ci_hw_ep; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int,char*,int,char*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_4__*,unsigned short) ;

__attribute__((used)) static int FUNC_5(struct ci_hdrc *VAR_6)
{
 int VAR_7 = 0, VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6->hw_ep_max/2; VAR_8++)
  for (VAR_9 = VAR_3; VAR_9 <= VAR_4; VAR_9++) {
   int VAR_10 = VAR_8 + VAR_9 * VAR_6->hw_ep_max/2;
   struct ci_hw_ep *VAR_11 = &VAR_6->ci_hw_ep[VAR_10];

   FUNC_3(VAR_11->name, sizeof(VAR_11->name), "ep%i%s", VAR_8,
     (VAR_9 == VAR_4) ? "in" : "out");

   VAR_11->ci = VAR_6;
   VAR_11->lock = &VAR_6->lock;
   VAR_11->td_pool = VAR_6->td_pool;

   VAR_11->ep.name = VAR_11->name;
   VAR_11->ep.ops = &VAR_5;

   if (VAR_8 == 0) {
    VAR_11->ep.caps.type_control = 1;
   } else {
    VAR_11->ep.caps.type_iso = 1;
    VAR_11->ep.caps.type_bulk = 1;
    VAR_11->ep.caps.type_int = 1;
   }

   if (VAR_9 == VAR_4)
    VAR_11->ep.caps.dir_in = 1;
   else
    VAR_11->ep.caps.dir_out = 1;






   FUNC_4(&VAR_11->ep, (unsigned short)~0);

   FUNC_0(&VAR_11->qh.queue);
   VAR_11->qh.ptr = FUNC_1(VAR_6->qh_pool, VAR_2,
             &VAR_11->qh.dma);
   if (VAR_11->qh.ptr == ((void*)0))
    VAR_7 = -VAR_1;





   if (VAR_8 == 0) {
    if (VAR_9 == VAR_3)
     VAR_6->ep0out = VAR_11;
    else
     VAR_6->ep0in = VAR_11;

    FUNC_4(&VAR_11->ep, VAR_0);
    continue;
   }

   FUNC_2(&VAR_11->ep.ep_list, &VAR_6->gadget.ep_list);
  }

 return VAR_7;
}
