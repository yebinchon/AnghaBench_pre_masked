
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {int pam; } ;
struct TYPE_10__ {TYPE_4__ pmcw; } ;
struct subchannel {int opm; TYPE_5__ schib; } ;
struct senseid {int dummy; } ;
struct ccw_request {int lpm; int callback; int check; int maxretries; int timeout; struct ccw1* cp; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_1__ dev; } ;
struct ccw1 {int count; int flags; scalar_t__ cda; int cmd_code; } ;
typedef scalar_t__ addr_t ;
struct TYPE_8__ {TYPE_2__* dma_area; int dev_id; struct ccw_request req; } ;
struct TYPE_7__ {int senseid; struct ccw1* iccws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct ccw_request*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ccw_device*) ;
 struct subchannel* FUNC_5 (int ) ;

void FUNC_6(struct ccw_device *VAR_6)
{
 struct subchannel *VAR_7 = FUNC_5(VAR_6->dev.parent);
 struct ccw_request *VAR_8 = &VAR_6->private->req;
 struct ccw1 *VAR_9 = VAR_6->private->dma_area->iccws;

 FUNC_1(4, "snsid");
 FUNC_0(4, &VAR_6->private->dev_id, sizeof(VAR_6->private->dev_id));

 FUNC_4(VAR_6);

 VAR_9->cmd_code = VAR_0;
 VAR_9->cda = (u32) (addr_t) &VAR_6->private->dma_area->senseid;
 VAR_9->count = sizeof(struct senseid);
 VAR_9->flags = VAR_1;

 FUNC_3(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->cp = VAR_9;
 VAR_8->timeout = VAR_3;
 VAR_8->maxretries = VAR_2;
 VAR_8->lpm = VAR_7->schib.pmcw.pam & VAR_7->opm;
 VAR_8->check = VAR_5;
 VAR_8->callback = VAR_4;
 FUNC_2(VAR_6);
}
