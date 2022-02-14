
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; unsigned int actual; } ;
struct qe_req {TYPE_1__ req; } ;
struct qe_frame {int dummy; } ;
struct qe_ep {int last; scalar_t__ sent; TYPE_2__* udc; struct qe_req* tx_req; struct qe_frame* txframe; } ;
struct TYPE_4__ {int dev; int ep0_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,struct qe_req*) ;
 int FUNC_2 (struct qe_frame*) ;
 int FUNC_3 (struct qe_ep*,struct qe_frame*,int) ;

__attribute__((used)) static int FUNC_4(struct qe_ep *VAR_4, unsigned char VAR_5)
{
 struct qe_req *VAR_6 = ((void*)0);
 struct qe_frame *VAR_7 = VAR_4->txframe;

 if ((FUNC_2(VAR_7) & (VAR_3 | VAR_0)) == (VAR_3 | VAR_0)) {
  if (!VAR_5)
   VAR_4->udc->ep0_state = VAR_2;
  else
   FUNC_3(VAR_4, VAR_4->txframe, VAR_1 | VAR_0);
  return 0;
 }

 VAR_6 = VAR_4->tx_req;
 if (VAR_6 != ((void*)0)) {
  if (!VAR_5) {
   int VAR_8 = VAR_4->last;
   VAR_4->sent += VAR_8;
   VAR_4->last -= VAR_8;
  } else {
   VAR_4->last = 0;
  }


  if ((VAR_4->tx_req->req.length - VAR_4->sent) <= 0) {
   VAR_4->tx_req->req.actual = (unsigned int)VAR_4->sent;
   FUNC_1(VAR_4->udc, VAR_4->tx_req);
   VAR_4->tx_req = ((void*)0);
   VAR_4->last = 0;
   VAR_4->sent = 0;
  }
 } else {
  FUNC_0(VAR_4->udc->dev, "the ep0_controller have no req\n");
 }

 return 0;
}
