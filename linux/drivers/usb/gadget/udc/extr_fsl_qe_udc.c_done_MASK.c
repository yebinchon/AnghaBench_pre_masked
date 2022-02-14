
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;
struct qe_udc {int lock; int dev; TYPE_2__ gadget; } ;
struct TYPE_9__ {int status; int length; int actual; int dma; } ;
struct qe_req {TYPE_4__ req; scalar_t__ mapped; int queue; } ;
struct TYPE_8__ {int name; } ;
struct qe_ep {unsigned char stopped; TYPE_3__ ep; struct qe_udc* udc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,TYPE_4__*,int,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct qe_ep*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(struct qe_ep *VAR_5, struct qe_req *VAR_6, int VAR_7)
{
 struct qe_udc *VAR_8 = VAR_5->udc;
 unsigned char VAR_9 = VAR_5->stopped;





 FUNC_4(&VAR_6->queue);


 if (VAR_6->req.status == -VAR_3)
  VAR_6->req.status = VAR_7;
 else
  VAR_7 = VAR_6->req.status;

 if (VAR_6->mapped) {
  FUNC_2(VAR_8->gadget.dev.parent,
   VAR_6->req.dma, VAR_6->req.length,
   FUNC_3(VAR_5)
    ? VAR_2
    : VAR_1);
  VAR_6->req.dma = VAR_0;
  VAR_6->mapped = 0;
 } else
  FUNC_1(VAR_8->gadget.dev.parent,
   VAR_6->req.dma, VAR_6->req.length,
   FUNC_3(VAR_5)
    ? VAR_2
    : VAR_1);

 if (VAR_7 && (VAR_7 != -VAR_4))
  FUNC_0(VAR_8->dev, "complete %s req %p stat %d len %u/%u\n",
   VAR_5->ep.name, &VAR_6->req, VAR_7,
   VAR_6->req.actual, VAR_6->req.length);


 VAR_5->stopped = 1;
 FUNC_6(&VAR_8->lock);

 FUNC_7(&VAR_5->ep, &VAR_6->req);

 FUNC_5(&VAR_8->lock);

 VAR_5->stopped = VAR_9;
}
