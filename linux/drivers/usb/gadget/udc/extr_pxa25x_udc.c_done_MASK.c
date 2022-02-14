
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int length; int actual; } ;
struct pxa25x_request {TYPE_2__ req; int queue; } ;
struct TYPE_4__ {int name; } ;
struct pxa25x_ep {unsigned int stopped; TYPE_1__ ep; } ;


 int FUNC_0 (int ,char*,int ,TYPE_2__*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct pxa25x_ep *VAR_3, struct pxa25x_request *VAR_4, int VAR_5)
{
 unsigned VAR_6 = VAR_3->stopped;

 FUNC_2(&VAR_4->queue);

 if (FUNC_1 (VAR_4->req.status == -VAR_1))
  VAR_4->req.status = VAR_5;
 else
  VAR_5 = VAR_4->req.status;

 if (VAR_5 && VAR_5 != -VAR_2)
  FUNC_0(VAR_0, "complete %s req %p stat %d len %u/%u\n",
   VAR_3->ep.name, &VAR_4->req, VAR_5,
   VAR_4->req.actual, VAR_4->req.length);


 VAR_3->stopped = 1;
 FUNC_3(&VAR_3->ep, &VAR_4->req);
 VAR_3->stopped = VAR_6;
}
