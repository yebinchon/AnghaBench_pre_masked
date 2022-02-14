
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int error; } ;
struct TYPE_4__ {TYPE_2__* ctrl_handler; } ;
struct ad5820_device {TYPE_2__ ctrls; TYPE_1__ subdev; scalar_t__ focus_ramp_mode; scalar_t__ focus_ramp_time; scalar_t__ focus_absolute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ad5820_device *VAR_2)
{
 FUNC_0(&VAR_2->ctrls, 1);
 FUNC_1(&VAR_2->ctrls, &VAR_1,
     VAR_0, 0, 1023, 1, 0);

 if (VAR_2->ctrls.error)
  return VAR_2->ctrls.error;

 VAR_2->focus_absolute = 0;
 VAR_2->focus_ramp_time = 0;
 VAR_2->focus_ramp_mode = 0;

 VAR_2->subdev.ctrl_handler = &VAR_2->ctrls;

 return 0;
}
