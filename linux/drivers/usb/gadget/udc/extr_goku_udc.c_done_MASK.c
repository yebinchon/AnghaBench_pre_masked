
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct goku_udc {int lock; int gadget; } ;
struct TYPE_5__ {int status; int length; int actual; } ;
struct goku_request {TYPE_1__ req; int queue; } ;
struct TYPE_6__ {int name; } ;
struct goku_ep {unsigned int stopped; TYPE_2__ ep; int is_in; scalar_t__ dma; struct goku_udc* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct goku_udc*,char*,int ,TYPE_1__*,int,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_7(struct goku_ep *VAR_2, struct goku_request *VAR_3, int VAR_4)
{
 struct goku_udc *VAR_5;
 unsigned VAR_6 = VAR_2->stopped;

 FUNC_2(&VAR_3->queue);

 if (FUNC_1(VAR_3->req.status == -VAR_0))
  VAR_3->req.status = VAR_4;
 else
  VAR_4 = VAR_3->req.status;

 VAR_5 = VAR_2->dev;

 if (VAR_2->dma)
  FUNC_6(&VAR_5->gadget, &VAR_3->req, VAR_2->is_in);


 if (VAR_4 && VAR_4 != -VAR_1)

  FUNC_0(VAR_5, "complete %s req %p stat %d len %u/%u\n",
   VAR_2->ep.name, &VAR_3->req, VAR_4,
   VAR_3->req.actual, VAR_3->req.length);


 VAR_2->stopped = 1;
 FUNC_4(&VAR_5->lock);
 FUNC_5(&VAR_2->ep, &VAR_3->req);
 FUNC_3(&VAR_5->lock);
 VAR_2->stopped = VAR_6;
}
