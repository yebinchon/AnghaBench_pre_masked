
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pam; } ;
struct TYPE_8__ {TYPE_3__ pmcw; } ;
struct subchannel {int opm; TYPE_4__ schib; } ;
struct ccw_request {int lpm; int callback; void* data; int maxretries; int timeout; } ;
struct TYPE_5__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_6__ {int dev_id; struct ccw_request req; } ;


 int FUNC_0 (int,int *,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct ccw_request*,int ,int) ;
 int FUNC_4 (struct ccw_device*,void*,void*) ;
 int VAR_2 ;
 struct subchannel* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ccw_device *VAR_3, void *VAR_4,
       void *VAR_5, void *VAR_6)
{
 struct subchannel *VAR_7 = FUNC_5(VAR_3->dev.parent);
 struct ccw_request *VAR_8 = &VAR_3->private->req;

 FUNC_1(4, "stlck");
 FUNC_0(4, &VAR_3->private->dev_id, sizeof(VAR_3->private->dev_id));

 FUNC_3(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->timeout = VAR_1;
 VAR_8->maxretries = VAR_0;
 VAR_8->lpm = VAR_7->schib.pmcw.pam & VAR_7->opm;
 VAR_8->data = VAR_4;
 VAR_8->callback = VAR_2;
 FUNC_4(VAR_3, VAR_5, VAR_6);
 FUNC_2(VAR_3);
}
