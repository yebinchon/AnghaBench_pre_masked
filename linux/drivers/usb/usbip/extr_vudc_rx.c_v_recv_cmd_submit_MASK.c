
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int dev; } ;
struct vudc {int lock; int urb_queue; int ud; TYPE_3__ gadget; TYPE_1__* pdev; } ;
struct TYPE_13__ {unsigned int transfer_buffer_length; unsigned int number_of_packets; } ;
struct TYPE_14__ {TYPE_4__ cmd_submit; } ;
struct TYPE_11__ {scalar_t__ direction; int seqnum; int ep; } ;
struct usbip_header {TYPE_5__ u; TYPE_2__ base; } ;
struct urbp {int type; int new; int urb_entry; TYPE_7__* urb; TYPE_6__* ep; int seqnum; } ;
struct TYPE_16__ {int pipe; int status; } ;
struct TYPE_15__ {int type; int desc; } ;
struct TYPE_10__ {int dev; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_7__**,struct usbip_header*,int) ;
 struct urbp* FUNC_2 () ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct urbp*) ;
 int VAR_12 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 unsigned int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,TYPE_7__*) ;
 int FUNC_14 (int *,TYPE_7__*) ;
 int FUNC_15 (struct vudc*,int ) ;
 TYPE_6__* FUNC_16 (struct vudc*,int ) ;

__attribute__((used)) static int FUNC_17(struct vudc *VAR_13,
     struct usbip_header *VAR_14)
{
 int VAR_15 = 0;
 struct urbp *VAR_16;
 u8 VAR_17;
 unsigned long VAR_18;

 VAR_16 = FUNC_2();
 if (!VAR_16) {
  FUNC_12(&VAR_13->ud, VAR_10);
  return -VAR_2;
 }


 VAR_17 = VAR_14->base.ep;
 if (VAR_14->base.direction == VAR_8)
  VAR_17 |= VAR_9;

 FUNC_6(&VAR_13->lock);
 VAR_16->ep = FUNC_16(VAR_13, VAR_17);
 if (!VAR_16->ep) {

  FUNC_3(&VAR_13->pdev->dev, "request to nonexistent endpoint");
  FUNC_8(&VAR_13->lock);
  FUNC_12(&VAR_13->ud, VAR_11);
  VAR_15 = -VAR_3;
  goto free_urbp;
 }
 VAR_16->type = VAR_16->ep->type;
 FUNC_8(&VAR_13->lock);

 VAR_16->new = 1;
 VAR_16->seqnum = VAR_14->base.seqnum;

 if (VAR_16->ep->type == 128) {

  unsigned int VAR_19, VAR_20, VAR_21;

  VAR_19 = FUNC_10(VAR_16->ep->desc);
  VAR_19 *= FUNC_11(VAR_16->ep->desc);
  VAR_21 = VAR_14->u.cmd_submit.transfer_buffer_length;
  VAR_20 = FUNC_0(VAR_21, VAR_19);

  if (VAR_14->u.cmd_submit.number_of_packets < 0 ||
      VAR_14->u.cmd_submit.number_of_packets > VAR_20) {
   FUNC_3(&VAR_13->gadget.dev,
    "CMD_SUBMIT: isoc invalid num packets %d\n",
    VAR_14->u.cmd_submit.number_of_packets);
   VAR_15 = -VAR_1;
   goto free_urbp;
  }
 }

 VAR_15 = FUNC_1(&VAR_16->urb, VAR_14, VAR_16->ep->type);
 if (VAR_15) {
  FUNC_12(&VAR_13->ud, VAR_10);
  VAR_15 = -VAR_2;
  goto free_urbp;
 }

 VAR_16->urb->status = -VAR_0;


 VAR_16->urb->pipe &= ~(3 << 30);
 switch (VAR_16->ep->type) {
 case 131:
  VAR_16->urb->pipe |= (VAR_4 << 30);
  break;
 case 129:
  VAR_16->urb->pipe |= (VAR_6 << 30);
  break;
 case 130:
  VAR_16->urb->pipe |= (VAR_5 << 30);
  break;
 case 128:
  VAR_16->urb->pipe |= (VAR_7 << 30);
  break;
 }
 VAR_15 = FUNC_14(&VAR_13->ud, VAR_16->urb);
 if (VAR_15 < 0)
  goto free_urbp;

 VAR_15 = FUNC_13(&VAR_13->ud, VAR_16->urb);
 if (VAR_15 < 0)
  goto free_urbp;

 FUNC_7(&VAR_13->lock, VAR_18);
 FUNC_15(VAR_13, VAR_12);
 FUNC_5(&VAR_16->urb_entry, &VAR_13->urb_queue);
 FUNC_9(&VAR_13->lock, VAR_18);

 return 0;

free_urbp:
 FUNC_4(VAR_16);
 return VAR_15;
}
