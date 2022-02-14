
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpc32xx_udc {int lock; int gadget; } ;
struct TYPE_4__ {int status; } ;
struct lpc32xx_request {TYPE_1__ req; int dd_desc_ptr; int queue; } ;
struct TYPE_5__ {int name; } ;
struct lpc32xx_ep {TYPE_2__ ep; scalar_t__ req_pending; int is_in; scalar_t__ lep; struct lpc32xx_udc* udc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpc32xx_ep*,char*,int ,struct lpc32xx_request*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lpc32xx_udc*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_7(struct lpc32xx_ep *VAR_2, struct lpc32xx_request *VAR_3, int VAR_4)
{
 struct lpc32xx_udc *VAR_5 = VAR_2->udc;

 FUNC_1(&VAR_3->queue);
 if (VAR_3->req.status == -VAR_0)
  VAR_3->req.status = VAR_4;
 else
  VAR_4 = VAR_3->req.status;

 if (VAR_2->lep) {
  FUNC_6(&VAR_5->gadget, &VAR_3->req, VAR_2->is_in);


  FUNC_4(VAR_5, VAR_3->dd_desc_ptr);
 }

 if (VAR_4 && VAR_4 != -VAR_1)
  FUNC_0(VAR_2, "%s done %p, status %d\n", VAR_2->ep.name, VAR_3, VAR_4);

 VAR_2->req_pending = 0;
 FUNC_3(&VAR_5->lock);
 FUNC_5(&VAR_2->ep, &VAR_3->req);
 FUNC_2(&VAR_5->lock);
}
