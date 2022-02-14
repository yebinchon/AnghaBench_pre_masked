
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int pam; } ;
struct TYPE_8__ {TYPE_2__ pmcw; } ;
struct subchannel {int opm; TYPE_3__ schib; } ;
struct ccw_request {int lpm; int singlepath; int callback; int maxretries; int timeout; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_5__* private; TYPE_1__ dev; } ;
struct TYPE_9__ {scalar_t__ mpath; } ;
struct TYPE_10__ {TYPE_4__ flags; int dev_id; struct ccw_request req; } ;


 int FUNC_0 (int,int *,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ccw_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct ccw_request*,int ,int) ;
 int FUNC_4 (struct ccw_device*,int ) ;
 struct subchannel* FUNC_5 (int ) ;

void FUNC_6(struct ccw_device *VAR_5)
{
 struct subchannel *VAR_6 = FUNC_5(VAR_5->dev.parent);
 struct ccw_request *VAR_7 = &VAR_5->private->req;
 u8 VAR_8;

 FUNC_1(4, "disb");
 FUNC_0(4, &VAR_5->private->dev_id, sizeof(VAR_5->private->dev_id));

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->timeout = VAR_1;
 VAR_7->maxretries = VAR_0;
 VAR_7->lpm = VAR_6->schib.pmcw.pam & VAR_6->opm;
 VAR_7->singlepath = 1;
 VAR_7->callback = VAR_4;
 VAR_8 = VAR_2;
 if (VAR_5->private->flags.mpath)
  VAR_8 |= VAR_3;
 FUNC_4(VAR_5, VAR_8);
 FUNC_2(VAR_5);
}
