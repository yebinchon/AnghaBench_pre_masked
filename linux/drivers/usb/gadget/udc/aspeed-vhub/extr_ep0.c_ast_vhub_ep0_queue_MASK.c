
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_request {int length; scalar_t__ actual; int status; int short_not_ok; int zero; int buf; int complete; } ;
struct usb_ep {int dummy; } ;
struct device {int dummy; } ;
struct ast_vhub_req {int last_desc; int active; int queue; int internal; } ;
struct TYPE_6__ {scalar_t__ state; int ctlstat; scalar_t__ dir_in; } ;
struct ast_vhub_ep {scalar_t__ d_idx; TYPE_3__ ep0; int queue; TYPE_2__* dev; struct ast_vhub* vhub; } ;
struct ast_vhub {int lock; TYPE_1__* pdev; } ;
typedef int gfp_t ;
struct TYPE_5__ {int enabled; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ast_vhub_ep*,struct ast_vhub_req*,int ) ;
 int FUNC_3 (struct ast_vhub_ep*,struct ast_vhub_req*) ;
 int FUNC_4 (struct ast_vhub_ep*) ;
 int FUNC_5 (struct device*,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct ast_vhub_ep* FUNC_10 (struct usb_ep*) ;
 struct ast_vhub_req* FUNC_11 (struct usb_request*) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct usb_ep* VAR_8, struct usb_request *VAR_9,
         gfp_t VAR_10)
{
 struct ast_vhub_req *VAR_11 = FUNC_11(VAR_9);
 struct ast_vhub_ep *VAR_12 = FUNC_10(VAR_8);
 struct ast_vhub *VAR_13 = VAR_12->vhub;
 struct device *VAR_14 = &VAR_13->pdev->dev;
 unsigned long VAR_15;


 if (!VAR_9 || (!VAR_9->complete && !VAR_11->internal)) {
  FUNC_5(VAR_14, "Bogus EP0 request ! u_req=%p\n", VAR_9);
  if (VAR_9) {
   FUNC_5(VAR_14, "complete=%p internal=%d\n",
     VAR_9->complete, VAR_11->internal);
  }
  return -VAR_2;
 }


 if (FUNC_1(VAR_12->d_idx != 0))
  return -VAR_2;


 if (VAR_12->dev && !VAR_12->dev->enabled)
  return -VAR_3;


 if (VAR_9->length && !VAR_9->buf && !VAR_11->internal) {
  FUNC_5(VAR_14, "Request with no buffer !\n");
  return -VAR_2;
 }

 FUNC_0(VAR_12, "enqueue req @%p\n", VAR_11);
 FUNC_0(VAR_12, "  l=%d zero=%d noshort=%d is_in=%d\n",
        VAR_9->length, VAR_9->zero,
        VAR_9->short_not_ok, VAR_12->ep0.dir_in);


 VAR_9->status = -VAR_1;
 VAR_9->actual = 0;
 VAR_11->last_desc = -1;
 VAR_11->active = 0;

 FUNC_8(&VAR_13->lock, VAR_15);


 if (!FUNC_7(&VAR_12->queue) ||
     VAR_12->ep0.state == VAR_7 ||
     VAR_12->ep0.state == VAR_5) {
  FUNC_5(VAR_14, "EP0: Request in wrong state\n");
         FUNC_0(VAR_12, "EP0: list_empty=%d state=%d\n",
         FUNC_7(&VAR_12->queue), VAR_12->ep0.state);
  FUNC_9(&VAR_13->lock, VAR_15);
  return -VAR_0;
 }


 FUNC_6(&VAR_11->queue, &VAR_12->queue);

 if (VAR_12->ep0.dir_in) {

  FUNC_3(VAR_12, VAR_11);
 } else if (VAR_9->length == 0) {

  FUNC_0(VAR_12, "0-length rx completion\n");
  VAR_12->ep0.state = VAR_6;
  FUNC_12(VAR_4, VAR_12->ep0.ctlstat);
  FUNC_2(VAR_12, VAR_11, 0);
 } else {

  FUNC_4(VAR_12);
 }

 FUNC_9(&VAR_13->lock, VAR_15);

 return 0;
}
