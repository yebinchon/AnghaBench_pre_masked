
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usb_request {int length; scalar_t__ actual; int status; int no_interrupt; int short_not_ok; int zero; scalar_t__ dma; scalar_t__ buf; int complete; } ;
struct usb_ep {int maxpacket; int desc; } ;
struct ast_vhub_req {int active; int last_desc; int queue; scalar_t__ act_count; int internal; } ;
struct TYPE_6__ {scalar_t__ desc_mode; scalar_t__ is_in; int enabled; } ;
struct ast_vhub_ep {TYPE_3__ epn; int queue; TYPE_1__* dev; int d_idx; struct ast_vhub* vhub; } ;
struct ast_vhub {int lock; TYPE_2__* pdev; } ;
typedef int gfp_t ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int gadget; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_vhub_ep*,char*) ;
 int FUNC_1 (struct ast_vhub_ep*,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (struct ast_vhub_ep*,struct ast_vhub_req*) ;
 int FUNC_3 (struct ast_vhub_ep*,struct ast_vhub_req*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct ast_vhub_ep* FUNC_9 (struct usb_ep*) ;
 struct ast_vhub_req* FUNC_10 (struct usb_request*) ;
 int FUNC_11 (int *,struct usb_request*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct usb_ep* VAR_3, struct usb_request *VAR_4,
         gfp_t VAR_5)
{
 struct ast_vhub_req *VAR_6 = FUNC_10(VAR_4);
 struct ast_vhub_ep *VAR_7 = FUNC_9(VAR_3);
 struct ast_vhub *VAR_8 = VAR_7->vhub;
 unsigned long VAR_9;
 bool VAR_10;
 int VAR_11;


 if (!VAR_4 || !VAR_4->complete || !VAR_4->buf) {
  FUNC_4(&VAR_8->pdev->dev, "Bogus EPn request ! u_req=%p\n", VAR_4);
  if (VAR_4) {
   FUNC_4(&VAR_8->pdev->dev, "complete=%p internal=%d\n",
     VAR_4->complete, VAR_6->internal);
  }
  return -VAR_1;
 }


 if (!VAR_7->epn.enabled || !VAR_3->desc || !VAR_7->dev || !VAR_7->d_idx ||
     !VAR_7->dev->enabled) {
  FUNC_0(VAR_7, "Enqueuing request on wrong or disabled EP\n");
  return -VAR_2;
 }
 if (VAR_7->epn.desc_mode ||
     ((((unsigned long)VAR_4->buf & 7) == 0) &&
      (VAR_7->epn.is_in || !(VAR_4->length & (VAR_3->maxpacket - 1))))) {
  VAR_11 = FUNC_11(&VAR_7->dev->gadget, VAR_4,
         VAR_7->epn.is_in);
  if (VAR_11) {
   FUNC_4(&VAR_8->pdev->dev,
     "Request mapping failure %d\n", VAR_11);
   return VAR_11;
  }
 } else
  VAR_4->dma = 0;

 FUNC_1(VAR_7, "enqueue req @%p\n", VAR_6);
 FUNC_1(VAR_7, " l=%d dma=0x%x zero=%d noshort=%d noirq=%d is_in=%d\n",
        VAR_4->length, (u32)VAR_4->dma, VAR_4->zero,
        VAR_4->short_not_ok, VAR_4->no_interrupt,
        VAR_7->epn.is_in);


 VAR_4->status = -VAR_0;
 VAR_4->actual = 0;
 VAR_6->act_count = 0;
 VAR_6->active = 0;
 VAR_6->last_desc = -1;
 FUNC_7(&VAR_8->lock, VAR_9);
 VAR_10 = FUNC_6(&VAR_7->queue);


 FUNC_5(&VAR_6->queue, &VAR_7->queue);
 if (VAR_10) {
  if (VAR_7->epn.desc_mode)
   FUNC_3(VAR_7, VAR_6);
  else
   FUNC_2(VAR_7, VAR_6);
 }
 FUNC_8(&VAR_8->lock, VAR_9);

 return 0;
}
