
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int length; int actual; } ;
struct net2280_request {TYPE_1__ req; int queue; } ;
struct TYPE_6__ {int name; } ;
struct net2280_ep {unsigned int stopped; TYPE_2__ ep; int is_in; scalar_t__ dma; struct net2280* dev; } ;
struct net2280 {int lock; int gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net2280*,char*,int ,TYPE_1__*,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_6(struct net2280_ep *VAR_2, struct net2280_request *VAR_3, int VAR_4)
{
 struct net2280 *VAR_5;
 unsigned VAR_6 = VAR_2->stopped;

 FUNC_1(&VAR_3->queue);

 if (VAR_3->req.status == -VAR_0)
  VAR_3->req.status = VAR_4;
 else
  VAR_4 = VAR_3->req.status;

 VAR_5 = VAR_2->dev;
 if (VAR_2->dma)
  FUNC_5(&VAR_5->gadget, &VAR_3->req, VAR_2->is_in);

 if (VAR_4 && VAR_4 != -VAR_1)
  FUNC_0(VAR_5, "complete %s req %p stat %d len %u/%u\n",
   VAR_2->ep.name, &VAR_3->req, VAR_4,
   VAR_3->req.actual, VAR_3->req.length);


 VAR_2->stopped = 1;
 FUNC_3(&VAR_5->lock);
 FUNC_4(&VAR_2->ep, &VAR_3->req);
 FUNC_2(&VAR_5->lock);
 VAR_2->stopped = VAR_6;
}
