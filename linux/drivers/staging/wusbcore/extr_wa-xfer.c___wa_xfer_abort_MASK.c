
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int bLength; int dwTransferID; int wRPipe; int bRequestType; } ;
struct wa_xfer_abort_buffer {int urb; TYPE_7__ cmd; int wa; } ;
struct wa_xfer {TYPE_5__* wa; TYPE_2__* ep; } ;
struct TYPE_10__ {int wRPipeIndex; } ;
struct wa_rpipe {TYPE_3__ descr; } ;
struct device {int dummy; } ;
struct TYPE_12__ {TYPE_4__* dto_epd; int usb_dev; TYPE_1__* usb_iface; } ;
struct TYPE_11__ {int bEndpointAddress; } ;
struct TYPE_9__ {struct wa_rpipe* hcpriv; } ;
struct TYPE_8__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,struct wa_xfer*,int) ;
 int FUNC_1 (struct wa_xfer_abort_buffer*) ;
 struct wa_xfer_abort_buffer* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int ,int ,TYPE_7__*,int,int ,struct wa_xfer_abort_buffer*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (struct wa_xfer*) ;

__attribute__((used)) static int FUNC_11(struct wa_xfer *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct device *VAR_6 = &VAR_4->wa->usb_iface->dev;
 struct wa_xfer_abort_buffer *VAR_7;
 struct wa_rpipe *VAR_8 = VAR_4->ep->hcpriv;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  goto error_kmalloc;
 VAR_7->cmd.bLength = sizeof(VAR_7->cmd);
 VAR_7->cmd.bRequestType = VAR_2;
 VAR_7->cmd.wRPipe = VAR_8->descr.wRPipeIndex;
 VAR_7->cmd.dwTransferID = FUNC_10(VAR_4);
 VAR_7->wa = FUNC_8(VAR_4->wa);

 FUNC_5(&VAR_7->urb);
 FUNC_4(&VAR_7->urb, VAR_4->wa->usb_dev,
  FUNC_6(VAR_4->wa->usb_dev,
    VAR_4->wa->dto_epd->bEndpointAddress),
  &VAR_7->cmd, sizeof(VAR_7->cmd), VAR_3, VAR_7);
 VAR_5 = FUNC_7(&VAR_7->urb, VAR_1);
 if (VAR_5 < 0)
  goto error_submit;
 return VAR_5;


error_submit:
 FUNC_9(VAR_4->wa);
 if (FUNC_3())
  FUNC_0(VAR_6, "xfer %p: Can't submit abort request: %d\n",
   VAR_4, VAR_5);
 FUNC_1(VAR_7);
error_kmalloc:
 return VAR_5;

}
