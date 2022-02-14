
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pxa_ep {int lock; } ;
struct TYPE_5__ {int status; int length; int actual; } ;
struct pxa27x_request {TYPE_2__ req; TYPE_1__* udc_usb_ep; } ;
struct TYPE_4__ {int usb_ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pxa_ep*,char*,TYPE_2__*,int,int ,int ) ;
 int FUNC_1 (struct pxa_ep*,struct pxa27x_request*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(struct pxa_ep *VAR_2, struct pxa27x_request *VAR_3, int VAR_4,
 unsigned long *VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(VAR_2, VAR_3);
 if (FUNC_2(VAR_3->req.status == -VAR_0))
  VAR_3->req.status = VAR_4;
 else
  VAR_4 = VAR_3->req.status;

 if (VAR_4 && VAR_4 != -VAR_1)
  FUNC_0(VAR_2, "complete req %p stat %d len %u/%u\n",
   &VAR_3->req, VAR_4,
   VAR_3->req.actual, VAR_3->req.length);

 if (VAR_5)
  FUNC_6(&VAR_2->lock, *VAR_5);
 FUNC_4(VAR_6);
 FUNC_7(&VAR_3->udc_usb_ep->usb_ep, &VAR_3->req);
 FUNC_3(VAR_6);
 if (VAR_5)
  FUNC_5(&VAR_2->lock, *VAR_5);
}
