
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsl_udc {scalar_t__ ep0_state; struct fsl_ep* eps; int ep0_dir; struct fsl_req* status_req; } ;
struct TYPE_4__ {int complete; scalar_t__ actual; int status; scalar_t__ length; } ;
struct fsl_req {int queue; TYPE_2__ req; scalar_t__ dtd_count; struct fsl_ep* ep; } ;
struct fsl_ep {int queue; TYPE_1__* udc; } ;
struct TYPE_3__ {int gadget; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct fsl_ep*) ;
 int VAR_8 ;
 int FUNC_1 (struct fsl_ep*,struct fsl_req*) ;
 scalar_t__ FUNC_2 (struct fsl_req*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct fsl_udc *VAR_9, int VAR_10)
{
 struct fsl_req *VAR_11 = VAR_9->status_req;
 struct fsl_ep *VAR_12;
 int VAR_13;

 if (VAR_10 == VAR_3)
  VAR_9->ep0_dir = VAR_5;
 else
  VAR_9->ep0_dir = VAR_6;

 VAR_12 = &VAR_9->eps[0];
 if (VAR_9->ep0_state != VAR_0)
  VAR_9->ep0_state = VAR_7;

 VAR_11->ep = VAR_12;
 VAR_11->req.length = 0;
 VAR_11->req.status = -VAR_1;
 VAR_11->req.actual = 0;
 VAR_11->req.complete = VAR_8;
 VAR_11->dtd_count = 0;

 VAR_13 = FUNC_4(&VAR_12->udc->gadget, &VAR_11->req, FUNC_0(VAR_12));
 if (VAR_13)
  return VAR_13;

 if (FUNC_2(VAR_11, VAR_4) == 0)
  FUNC_1(VAR_12, VAR_11);
 else
  return -VAR_2;

 FUNC_3(&VAR_11->queue, &VAR_12->queue);

 return 0;
}
