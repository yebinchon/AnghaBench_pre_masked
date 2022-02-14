
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct subchannel {int vpm; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_3__* drv; scalar_t__ online; TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_6__ {int (* path_event ) (struct ccw_device*,int*) ;} ;
struct TYPE_5__ {int path_gone_mask; int path_new_mask; int pgid_reset_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccw_device*,int*) ;
 struct subchannel* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ccw_device *VAR_4)
{
 struct subchannel *VAR_5 = FUNC_1(VAR_4->dev.parent);
 int VAR_6[8];
 int VAR_7, VAR_8;

 for (VAR_7 = 0, VAR_8 = 0x80; VAR_7 < 8; VAR_7++, VAR_8 >>= 1) {
  VAR_6[VAR_7] = VAR_0;
  if (VAR_8 & VAR_4->private->path_gone_mask & ~(VAR_5->vpm))
   VAR_6[VAR_7] |= VAR_3;
  if (VAR_8 & VAR_4->private->path_new_mask & VAR_5->vpm)
   VAR_6[VAR_7] |= VAR_2;
  if (VAR_8 & VAR_4->private->pgid_reset_mask & VAR_5->vpm)
   VAR_6[VAR_7] |= VAR_1;
 }
 if (VAR_4->online && VAR_4->drv->path_event)
  VAR_4->drv->path_event(VAR_4, VAR_6);
}
