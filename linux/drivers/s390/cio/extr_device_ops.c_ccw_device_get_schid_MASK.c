
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel_id {int dummy; } ;
struct subchannel {struct subchannel_id schid; } ;
struct TYPE_2__ {int parent; } ;
struct ccw_device {TYPE_1__ dev; } ;


 struct subchannel* FUNC_0 (int ) ;

void FUNC_1(struct ccw_device *VAR_0, struct subchannel_id *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_0(VAR_0->dev.parent);

 *VAR_1 = VAR_2->schid;
}
