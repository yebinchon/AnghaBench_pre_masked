
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
struct subchannel {TYPE_3__ schib; } ;
struct ccw_request {int callback; int lpm; int maxretries; int timeout; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_5__* private; TYPE_1__ dev; } ;
struct ccw_dev_id {int devno; int ssid; } ;
struct TYPE_9__ {scalar_t__ mpath; } ;
struct TYPE_10__ {TYPE_4__ flags; int path_noirq_mask; int pgid_valid_mask; struct ccw_request req; struct ccw_dev_id dev_id; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_request*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (struct ccw_device*,int ) ;
 struct subchannel* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ccw_device *VAR_5)
{
 struct subchannel *VAR_6 = FUNC_4(VAR_5->dev.parent);
 struct ccw_dev_id *VAR_7 = &VAR_5->private->dev_id;
 struct ccw_request *VAR_8 = &VAR_5->private->req;
 u8 VAR_9;

 FUNC_0(2, "wipe: device 0.%x.%04x: pvm=%02x nim=%02x\n",
        VAR_7->ssid, VAR_7->devno, VAR_5->private->pgid_valid_mask,
        VAR_5->private->path_noirq_mask);


 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->timeout = VAR_1;
 VAR_8->maxretries = VAR_0;
 VAR_8->lpm = VAR_6->schib.pmcw.pam;
 VAR_8->callback = VAR_4;
 VAR_9 = VAR_2;
 if (VAR_5->private->flags.mpath)
  VAR_9 |= VAR_3;
 FUNC_3(VAR_5, VAR_9);
 FUNC_1(VAR_5);
}
