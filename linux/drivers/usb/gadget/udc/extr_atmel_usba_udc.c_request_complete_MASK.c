
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usba_udc {int lock; int gadget; } ;
struct TYPE_4__ {int status; int actual; } ;
struct usba_request {TYPE_1__ req; scalar_t__ using_dma; int queue; } ;
struct TYPE_5__ {int name; } ;
struct usba_ep {TYPE_2__ ep; int is_in; struct usba_udc* udc; } ;


 int FUNC_0 (int,char*,int ,struct usba_request*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_7(struct usba_ep *VAR_3, struct usba_request *VAR_4, int VAR_5)
{
 struct usba_udc *VAR_6 = VAR_3->udc;

 FUNC_1(!FUNC_2(&VAR_4->queue));

 if (VAR_4->req.status == -VAR_2)
  VAR_4->req.status = VAR_5;

 if (VAR_4->using_dma)
  FUNC_6(&VAR_6->gadget, &VAR_4->req, VAR_3->is_in);

 FUNC_0(VAR_0 | VAR_1,
  "%s: req %p complete: status %d, actual %u\n",
  VAR_3->ep.name, VAR_4, VAR_4->req.status, VAR_4->req.actual);

 FUNC_4(&VAR_6->lock);
 FUNC_5(&VAR_3->ep, &VAR_4->req);
 FUNC_3(&VAR_6->lock);
}
