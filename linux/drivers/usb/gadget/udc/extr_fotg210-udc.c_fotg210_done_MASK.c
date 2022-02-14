
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; } ;
struct fotg210_request {TYPE_2__ req; int queue; } ;
struct fotg210_ep {TYPE_3__* fotg210; int queue; scalar_t__ epnum; int ep; } ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct TYPE_6__ {int lock; TYPE_1__ gadget; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fotg210_ep*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct fotg210_ep *VAR_2, struct fotg210_request *VAR_3,
   int VAR_4)
{
 FUNC_2(&VAR_3->queue);


 if (VAR_2->fotg210->gadget.speed == VAR_1)
  VAR_3->req.status = -VAR_0;
 else
  VAR_3->req.status = VAR_4;

 FUNC_5(&VAR_2->fotg210->lock);
 FUNC_6(&VAR_2->ep, &VAR_3->req);
 FUNC_4(&VAR_2->fotg210->lock);

 if (VAR_2->epnum) {
  if (FUNC_3(&VAR_2->queue))
   FUNC_0(VAR_2);
 } else {
  FUNC_1(VAR_2->fotg210);
 }
}
