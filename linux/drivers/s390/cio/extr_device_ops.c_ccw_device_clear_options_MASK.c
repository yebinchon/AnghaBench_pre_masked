
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccw_device {TYPE_2__* private; } ;
struct TYPE_3__ {int fast; int repall; int pgroup; int force; int mpath; } ;
struct TYPE_4__ {TYPE_1__ options; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

void FUNC_0(struct ccw_device *VAR_5, unsigned long VAR_6)
{
 VAR_5->private->options.fast &= (VAR_6 & VAR_3) == 0;
 VAR_5->private->options.repall &= (VAR_6 & VAR_4) == 0;
 VAR_5->private->options.pgroup &= (VAR_6 & VAR_2) == 0;
 VAR_5->private->options.force &= (VAR_6 & VAR_0) == 0;
 VAR_5->private->options.mpath &= (VAR_6 & VAR_1) == 0;
}
