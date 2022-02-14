
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isp1760_udc {scalar_t__ ep0_dir; int lock; TYPE_1__* isp; } ;
struct TYPE_4__ {int status; int (* complete ) (int *,TYPE_2__*) ;} ;
struct isp1760_request {TYPE_2__ req; int * ep; } ;
struct isp1760_ep {scalar_t__ addr; int ep; struct isp1760_udc* udc; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,struct isp1760_request*,int) ;
 int FUNC_1 (struct isp1760_ep*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct isp1760_ep *VAR_1,
      struct isp1760_request *VAR_2,
      int VAR_3)
{
 struct isp1760_udc *VAR_4 = VAR_1->udc;
 unsigned long VAR_5;

 FUNC_0(VAR_1->udc->isp->dev, "completing request %p with status %d\n",
  VAR_2, VAR_3);

 VAR_2->ep = ((void*)0);
 VAR_2->req.status = VAR_3;
 VAR_2->req.complete(&VAR_1->ep, &VAR_2->req);

 FUNC_2(&VAR_4->lock, VAR_5);






 if (VAR_3 == 0 && VAR_1->addr == 0 && VAR_4->ep0_dir == VAR_0)
  FUNC_1(VAR_1, VAR_0);

 FUNC_3(&VAR_4->lock, VAR_5);
}
