
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mv_udc {int gadget; TYPE_4__* dev; scalar_t__ test_mode; struct mv_req* status_req; int ep0_state; int ep0_dir; struct mv_ep* eps; } ;
struct TYPE_10__ {int length; scalar_t__ dma; scalar_t__ buf; int * complete; scalar_t__ actual; int status; } ;
struct mv_req {int mapped; TYPE_5__ req; int queue; scalar_t__ dtd_count; scalar_t__ test_mode; struct mv_ep* ep; } ;
struct mv_ep {int queue; TYPE_3__* udc; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;
struct TYPE_8__ {TYPE_2__ gadget; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_3 (struct mv_ep*) ;
 int FUNC_4 (int *,int *) ;
 int * VAR_6 ;
 int FUNC_5 (struct mv_ep*,struct mv_req*) ;
 int FUNC_6 (struct mv_req*) ;
 int FUNC_7 (int *,TYPE_5__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct mv_udc *VAR_7, u8 VAR_8, u16 VAR_9, bool VAR_10)
{
 int VAR_11 = 0;
 struct mv_req *VAR_12;
 struct mv_ep *VAR_13;

 VAR_13 = &VAR_7->eps[0];
 VAR_7->ep0_dir = VAR_8;
 VAR_7->ep0_state = VAR_5;

 VAR_12 = VAR_7->status_req;


 if (VAR_10 == 0) {
  *((u16 *) VAR_12->req.buf) = FUNC_0(VAR_9);
  VAR_12->req.length = 2;
 } else
  VAR_12->req.length = 0;

 VAR_12->ep = VAR_13;
 VAR_12->req.status = -VAR_3;
 VAR_12->req.actual = 0;
 if (VAR_7->test_mode) {
  VAR_12->req.complete = VAR_6;
  VAR_12->test_mode = VAR_7->test_mode;
  VAR_7->test_mode = 0;
 } else
  VAR_12->req.complete = ((void*)0);
 VAR_12->dtd_count = 0;

 if (VAR_12->req.dma == VAR_0) {
  VAR_12->req.dma = FUNC_2(VAR_13->udc->gadget.dev.parent,
    VAR_12->req.buf, VAR_12->req.length,
    FUNC_3(VAR_13) ? VAR_2 : VAR_1);
  VAR_12->mapped = 1;
 }


 if (!FUNC_6(VAR_12)) {
  VAR_11 = FUNC_5(VAR_13, VAR_12);
  if (VAR_11) {
   FUNC_1(&VAR_7->dev->dev,
    "Failed to queue dtd when prime status\n");
   goto out;
  }
 } else{
  VAR_11 = -VAR_4;
  FUNC_1(&VAR_7->dev->dev,
   "Failed to dma_pool_alloc when prime status\n");
  goto out;
 }

 FUNC_4(&VAR_12->queue, &VAR_13->queue);

 return 0;
out:
 FUNC_7(&VAR_7->gadget, &VAR_12->req, FUNC_3(VAR_13));

 return VAR_11;
}
