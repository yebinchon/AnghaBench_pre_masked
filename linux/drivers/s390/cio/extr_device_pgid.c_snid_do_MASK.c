
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pam; } ;
struct TYPE_6__ {TYPE_1__ pmcw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct ccw_request {int lpm; } ;
struct TYPE_8__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_4__ dev; } ;
struct TYPE_7__ {int path_noirq_mask; scalar_t__ pgid_valid_mask; struct ccw_request req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct ccw_device*,int) ;
 struct subchannel* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ccw_device *VAR_2)
{
 struct subchannel *VAR_3 = FUNC_4(VAR_2->dev.parent);
 struct ccw_request *VAR_4 = &VAR_2->private->req;
 int VAR_5;

 VAR_4->lpm = FUNC_1(VAR_4->lpm, VAR_3->schib.pmcw.pam &
         ~VAR_2->private->path_noirq_mask);
 if (!VAR_4->lpm)
  goto out_nopath;
 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 return;

out_nopath:
 if (VAR_2->private->pgid_valid_mask)
  VAR_5 = 0;
 else if (VAR_2->private->path_noirq_mask)
  VAR_5 = -VAR_1;
 else
  VAR_5 = -VAR_0;
 FUNC_3(VAR_2, VAR_5);
}
