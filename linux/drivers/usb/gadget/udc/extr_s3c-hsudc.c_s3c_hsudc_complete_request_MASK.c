
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct s3c_hsudc_req {TYPE_1__ req; int queue; } ;
struct s3c_hsudc_ep {unsigned int stopped; int ep; int bEndpointAddress; struct s3c_hsudc* dev; } ;
struct s3c_hsudc {int lock; int ep0state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s3c_hsudc_ep*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct s3c_hsudc_ep *VAR_2,
    struct s3c_hsudc_req *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_2->stopped;
 struct s3c_hsudc *VAR_6 = VAR_2->dev;

 FUNC_1(&VAR_3->queue);
 VAR_3->req.status = VAR_4;

 if (!FUNC_0(VAR_2)) {
  VAR_6->ep0state = VAR_1;
  VAR_2->bEndpointAddress &= ~VAR_0;
 }

 VAR_2->stopped = 1;
 FUNC_3(&VAR_6->lock);
 FUNC_4(&VAR_2->ep, &VAR_3->req);
 FUNC_2(&VAR_6->lock);
 VAR_2->stopped = VAR_5;
}
