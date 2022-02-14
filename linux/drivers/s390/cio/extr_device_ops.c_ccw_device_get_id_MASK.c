
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; } ;
struct ccw_dev_id {int dummy; } ;
struct TYPE_2__ {struct ccw_dev_id dev_id; } ;



void FUNC_0(struct ccw_device *VAR_0, struct ccw_dev_id *VAR_1)
{
 *VAR_1 = VAR_0->private->dev_id;
}
