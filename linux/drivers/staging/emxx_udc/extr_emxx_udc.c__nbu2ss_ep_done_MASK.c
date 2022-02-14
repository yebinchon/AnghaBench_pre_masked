
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbu2ss_udc {int lock; } ;
struct TYPE_2__ {int status; scalar_t__ dma; int (* complete ) (int *,TYPE_1__*) ;} ;
struct nbu2ss_req {TYPE_1__ req; int queue; } ;
struct nbu2ss_ep {scalar_t__ direct; scalar_t__ epnum; int ep; int queue; scalar_t__ stalled; struct nbu2ss_udc* udc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nbu2ss_udc*,struct nbu2ss_ep*,struct nbu2ss_req*,scalar_t__) ;
 int FUNC_1 (struct nbu2ss_udc*,struct nbu2ss_ep*) ;
 int FUNC_2 (struct nbu2ss_udc*,struct nbu2ss_ep*) ;
 int FUNC_3 (struct nbu2ss_ep*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(struct nbu2ss_ep *VAR_3,
       struct nbu2ss_req *VAR_4,
       int VAR_5)
{
 struct nbu2ss_udc *VAR_6 = VAR_3->udc;

 FUNC_5(&VAR_4->queue);

 if (VAR_5 == -VAR_0)
  FUNC_2(VAR_6, VAR_3);

 if (FUNC_4(VAR_4->req.status == -VAR_1))
  VAR_4->req.status = VAR_5;

 if (VAR_3->stalled) {
  FUNC_1(VAR_6, VAR_3);
 } else {
  if (!FUNC_6(&VAR_3->queue))
   FUNC_3(VAR_3);
 }







 FUNC_8(&VAR_6->lock);
 VAR_4->req.complete(&VAR_3->ep, &VAR_4->req);
 FUNC_7(&VAR_6->lock);
}
