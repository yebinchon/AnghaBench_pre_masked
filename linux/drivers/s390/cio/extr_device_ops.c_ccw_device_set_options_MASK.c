
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccw_device {TYPE_2__* private; } ;
struct TYPE_3__ {int repall; int fast; int pgroup; int force; int mpath; } ;
struct TYPE_4__ {TYPE_1__ options; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;

int FUNC_0(struct ccw_device *VAR_6, unsigned long VAR_7)
{



 if (((VAR_7 & VAR_3) &&
     (VAR_7 & VAR_4)) ||
     ((VAR_7 & VAR_3) &&
      VAR_6->private->options.repall) ||
     ((VAR_7 & VAR_4) &&
      VAR_6->private->options.fast))
  return -VAR_5;
 VAR_6->private->options.fast |= (VAR_7 & VAR_3) != 0;
 VAR_6->private->options.repall |= (VAR_7 & VAR_4) != 0;
 VAR_6->private->options.pgroup |= (VAR_7 & VAR_2) != 0;
 VAR_6->private->options.force |= (VAR_7 & VAR_0) != 0;
 VAR_6->private->options.mpath |= (VAR_7 & VAR_1) != 0;
 return 0;
}
