
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int status; scalar_t__ length; scalar_t__ actual; int complete; struct dummy* context; int buf; } ;
struct usb_ep {int name; } ;
struct dummy_request {int queue; struct usb_request req; } ;
struct dummy_hcd {int dummy; } ;
struct dummy_ep {int queue; TYPE_1__* desc; } ;
struct dummy {int lock; int fifo_buf; struct dummy_request fifo_req; int driver; int gadget; } ;
typedef int gfp_t ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct dummy_ep*,struct usb_request*,int ,scalar_t__,int ) ;
 int VAR_5 ;
 struct dummy* FUNC_1 (struct dummy_ep*) ;
 int VAR_6 ;
 struct dummy_hcd* FUNC_2 (int *) ;
 int FUNC_3 (struct dummy_hcd*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct dummy*) ;
 struct dummy_ep* FUNC_12 (struct usb_ep*) ;
 int FUNC_13 (struct usb_ep*,struct usb_request*) ;
 struct dummy_request* FUNC_14 (struct usb_request*) ;

__attribute__((used)) static int FUNC_15(struct usb_ep *VAR_7, struct usb_request *VAR_8,
  gfp_t VAR_9)
{
 struct dummy_ep *VAR_10;
 struct dummy_request *VAR_11;
 struct dummy *VAR_12;
 struct dummy_hcd *VAR_13;
 unsigned long VAR_14;

 VAR_11 = FUNC_14(VAR_8);
 if (!VAR_8 || !FUNC_5(&VAR_11->queue) || !VAR_8->complete)
  return -VAR_1;

 VAR_10 = FUNC_12(VAR_7);
 if (!VAR_7 || (!VAR_10->desc && VAR_7->name != VAR_5))
  return -VAR_1;

 VAR_12 = FUNC_1(VAR_10);
 VAR_13 = FUNC_2(&VAR_12->gadget);
 if (!VAR_12->driver || !FUNC_3(VAR_13))
  return -VAR_2;





 VAR_8->status = -VAR_0;
 VAR_8->actual = 0;
 FUNC_8(&VAR_12->lock, VAR_14);


 if (VAR_10->desc && (VAR_10->desc->bEndpointAddress & VAR_4) &&
   FUNC_5(&VAR_12->fifo_req.queue) &&
   FUNC_5(&VAR_10->queue) &&
   VAR_8->length <= VAR_3) {
  VAR_11 = &VAR_12->fifo_req;
  VAR_11->req = *VAR_8;
  VAR_11->req.buf = VAR_12->fifo_buf;
  FUNC_6(VAR_12->fifo_buf, VAR_8->buf, VAR_8->length);
  VAR_11->req.context = VAR_12;
  VAR_11->req.complete = VAR_6;

  FUNC_4(&VAR_11->queue, &VAR_10->queue);
  FUNC_9(&VAR_12->lock);
  VAR_8->actual = VAR_8->length;
  VAR_8->status = 0;
  FUNC_13(VAR_7, VAR_8);
  FUNC_7(&VAR_12->lock);
 } else
  FUNC_4(&VAR_11->queue, &VAR_10->queue);
 FUNC_10(&VAR_12->lock, VAR_14);




 return 0;
}
