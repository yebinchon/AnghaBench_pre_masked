
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_ccw_private {TYPE_1__* sch; } ;
struct subchannel_id {int dummy; } ;
struct TYPE_2__ {struct subchannel_id schid; } ;



inline struct subchannel_id FUNC_0(struct vfio_ccw_private *VAR_0)
{
 return VAR_0->sch->schid;
}
