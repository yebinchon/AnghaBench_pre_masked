
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ccw_device {TYPE_3__* private; } ;
struct TYPE_5__ {scalar_t__ doverify; int mpath; int pgroup; } ;
struct TYPE_4__ {int mpath; int pgroup; } ;
struct TYPE_6__ {scalar_t__ path_noirq_mask; TYPE_2__ flags; TYPE_1__ options; int dev_id; } ;


 int FUNC_0 (int,int *,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ccw_device*) ;

void FUNC_3(struct ccw_device *VAR_0)
{
 FUNC_1(4, "vrfy");
 FUNC_0(4, &VAR_0->private->dev_id, sizeof(VAR_0->private->dev_id));




 VAR_0->private->flags.pgroup = VAR_0->private->options.pgroup;
 VAR_0->private->flags.mpath = VAR_0->private->options.mpath;
 VAR_0->private->flags.doverify = 0;
 VAR_0->private->path_noirq_mask = 0;
 FUNC_2(VAR_0);
}
