
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int buf; int length; int actual; } ;
struct net2272_request {TYPE_1__ req; int queue; } ;
struct TYPE_6__ {int name; } ;
struct net2272_ep {unsigned int stopped; scalar_t__ num; TYPE_2__ ep; int is_in; scalar_t__ dma; struct net2272* dev; } ;
struct net2272 {int lock; int dev; int gadget; scalar_t__ protocol_stall; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net2272_ep*) ;
 int FUNC_1 (int ,char*,int ,TYPE_1__*,int,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net2272_ep*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct net2272_ep *VAR_3, struct net2272_request *VAR_4, int VAR_5)
{
 struct net2272 *VAR_6;
 unsigned VAR_7 = VAR_3->stopped;

 if (VAR_3->num == 0) {
  if (VAR_3->dev->protocol_stall) {
   VAR_3->stopped = 1;
   FUNC_3(VAR_3);
  }
  FUNC_0(VAR_3);
 }

 FUNC_2(&VAR_4->queue);

 if (VAR_4->req.status == -VAR_0)
  VAR_4->req.status = VAR_5;
 else
  VAR_5 = VAR_4->req.status;

 VAR_6 = VAR_3->dev;
 if (VAR_2 && VAR_3->dma)
  FUNC_7(&VAR_6->gadget, &VAR_4->req,
    VAR_3->is_in);

 if (VAR_5 && VAR_5 != -VAR_1)
  FUNC_1(VAR_6->dev, "complete %s req %p stat %d len %u/%u buf %p\n",
   VAR_3->ep.name, &VAR_4->req, VAR_5,
   VAR_4->req.actual, VAR_4->req.length, VAR_4->req.buf);


 VAR_3->stopped = 1;
 FUNC_5(&VAR_6->lock);
 FUNC_6(&VAR_3->ep, &VAR_4->req);
 FUNC_4(&VAR_6->lock);
 VAR_3->stopped = VAR_7;
}
