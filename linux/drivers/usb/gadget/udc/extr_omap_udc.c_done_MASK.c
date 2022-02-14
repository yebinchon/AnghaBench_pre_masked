
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct omap_udc {int lock; int gadget; } ;
struct TYPE_5__ {int status; int length; int actual; } ;
struct omap_req {TYPE_1__ req; int queue; } ;
struct TYPE_6__ {int name; } ;
struct omap_ep {unsigned int stopped; int bEndpointAddress; struct omap_udc* udc; TYPE_2__ ep; scalar_t__ has_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,TYPE_1__*,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_6(struct omap_ep *VAR_4, struct omap_req *VAR_5, int VAR_6)
{
 struct omap_udc *VAR_7 = VAR_4->udc;
 unsigned VAR_8 = VAR_4->stopped;

 FUNC_1(&VAR_5->queue);

 if (VAR_5->req.status == -VAR_0)
  VAR_5->req.status = VAR_6;
 else
  VAR_6 = VAR_5->req.status;

 if (VAR_3 && VAR_4->has_dma)
  FUNC_5(&VAR_7->gadget, &VAR_5->req,
    (VAR_4->bEndpointAddress & VAR_2));


 if (VAR_6 && VAR_6 != -VAR_1)

  FUNC_0("complete %s req %p stat %d len %u/%u\n",
   VAR_4->ep.name, &VAR_5->req, VAR_6,
   VAR_5->req.actual, VAR_5->req.length);


 VAR_4->stopped = 1;
 FUNC_3(&VAR_4->udc->lock);
 FUNC_4(&VAR_4->ep, &VAR_5->req);
 FUNC_2(&VAR_4->udc->lock);
 VAR_4->stopped = VAR_8;
}
