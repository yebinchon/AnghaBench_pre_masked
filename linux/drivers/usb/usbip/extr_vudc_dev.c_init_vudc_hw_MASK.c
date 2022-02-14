
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ep_list; TYPE_4__* ep0; } ;
struct TYPE_7__ {int unusable; int reset; int shutdown; } ;
struct usbip_device {TYPE_3__ eh_ops; int side; int status; int lock; } ;
struct vudc {int tx_waitq; int tx_queue; int urb_queue; int lock_tx; int lock; TYPE_2__ gadget; struct vep* ep; struct usbip_device ud; } ;
struct TYPE_5__ {int type_control; int dir_out; int dir_in; int type_iso; int type_int; int type_bulk; } ;
struct TYPE_8__ {int max_streams; int ep_list; TYPE_1__ caps; int * ops; int name; } ;
struct vep {TYPE_4__ ep; int req_queue; TYPE_2__* gadget; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct vep* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int,char*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (struct vudc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct vudc *VAR_9)
{
 int VAR_10;
 struct usbip_device *VAR_11 = &VAR_9->ud;
 struct vep *VAR_12;

 VAR_9->ep = FUNC_2(VAR_4, sizeof(*VAR_9->ep), VAR_1);
 if (!VAR_9->ep)
  goto nomem_ep;

 FUNC_0(&VAR_9->gadget.ep_list);


 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  int VAR_13 = VAR_10 % 2;
  int VAR_14 = (VAR_10 + 1) / 2;

  VAR_12 = &VAR_9->ep[VAR_10];

  FUNC_5(VAR_12->name, "ep%d%s", VAR_14,
   VAR_10 ? (VAR_13 ? "out" : "in") : "");
  VAR_12->ep.name = VAR_12->name;

  VAR_12->ep.ops = &VAR_5;

  FUNC_6(&VAR_12->ep, ~0);
  VAR_12->ep.max_streams = 16;
  VAR_12->gadget = &VAR_9->gadget;
  FUNC_0(&VAR_12->req_queue);

  if (VAR_10 == 0) {

   VAR_12->ep.caps.type_control = 1;
   VAR_12->ep.caps.dir_out = 1;
   VAR_12->ep.caps.dir_in = 1;

   VAR_9->gadget.ep0 = &VAR_12->ep;
  } else {

   VAR_12->ep.caps.type_iso = 1;
   VAR_12->ep.caps.type_int = 1;
   VAR_12->ep.caps.type_bulk = 1;

   if (VAR_13)
    VAR_12->ep.caps.dir_out = 1;
   else
    VAR_12->ep.caps.dir_in = 1;

   FUNC_3(&VAR_12->ep.ep_list, &VAR_9->gadget.ep_list);
  }
 }

 FUNC_4(&VAR_9->lock);
 FUNC_4(&VAR_9->lock_tx);
 FUNC_0(&VAR_9->urb_queue);
 FUNC_0(&VAR_9->tx_queue);
 FUNC_1(&VAR_9->tx_waitq);

 FUNC_4(&VAR_11->lock);
 VAR_11->status = VAR_2;
 VAR_11->side = VAR_3;

 VAR_11->eh_ops.shutdown = VAR_8;
 VAR_11->eh_ops.reset = VAR_6;
 VAR_11->eh_ops.unusable = VAR_7;

 FUNC_7(VAR_9);
 return 0;

nomem_ep:
  return -VAR_0;
}
