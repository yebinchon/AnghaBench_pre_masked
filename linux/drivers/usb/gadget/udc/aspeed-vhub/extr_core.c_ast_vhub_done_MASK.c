
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int status; scalar_t__ dma; } ;
struct ast_vhub_req {int internal; TYPE_4__ req; int queue; } ;
struct TYPE_7__ {int is_in; } ;
struct ast_vhub_ep {TYPE_3__* vhub; int ep; TYPE_2__ epn; TYPE_1__* dev; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_6__ {int gadget; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,struct ast_vhub_req*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_4__*,int ) ;

void FUNC_7(struct ast_vhub_ep *VAR_1, struct ast_vhub_req *VAR_2,
     int VAR_3)
{
 bool VAR_4 = VAR_2->internal;

 FUNC_0(VAR_1, "completing request @%p, status %d\n", VAR_2, VAR_3);

 FUNC_2(&VAR_2->queue);

 if (VAR_2->req.status == -VAR_0)
  VAR_2->req.status = VAR_3;

 if (VAR_2->req.dma) {
  if (!FUNC_1(!VAR_1->dev))
   FUNC_6(&VAR_1->dev->gadget,
       &VAR_2->req, VAR_1->epn.is_in);
  VAR_2->req.dma = 0;
 }





 if (!VAR_4) {
  FUNC_4(&VAR_1->vhub->lock);
  FUNC_5(&VAR_1->ep, &VAR_2->req);
  FUNC_3(&VAR_1->vhub->lock);
 }
}
