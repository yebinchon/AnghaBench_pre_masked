
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct subchannel {int opm; } ;
struct TYPE_11__ {scalar_t__ state1; scalar_t__ state3; } ;
struct TYPE_12__ {TYPE_5__ ps; } ;
struct pgid {TYPE_6__ inf; } ;
struct TYPE_7__ {int parent; } ;
struct ccw_device {TYPE_4__* private; TYPE_1__ dev; } ;
struct TYPE_9__ {scalar_t__ mpath; } ;
struct TYPE_10__ {int pgid_valid_mask; TYPE_3__ flags; TYPE_2__* dma_area; } ;
struct TYPE_8__ {struct pgid* pgid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct subchannel* FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct ccw_device *VAR_4)
{
 struct subchannel *VAR_5 = FUNC_0(VAR_4->dev.parent);
 struct pgid *VAR_6;
 int VAR_7;
 int VAR_8;
 u8 VAR_9 = 0;


 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_8 = 0x80 >> VAR_7;
  if ((VAR_4->private->pgid_valid_mask & VAR_8) == 0)
   continue;
  VAR_6 = &VAR_4->private->dma_area->pgid[VAR_7];
  if (VAR_5->opm & VAR_8) {
   if (VAR_6->inf.ps.state1 != VAR_0)
    continue;
  } else {
   if (VAR_6->inf.ps.state1 != VAR_1)
    continue;
  }
  if (VAR_4->private->flags.mpath) {
   if (VAR_6->inf.ps.state3 != VAR_2)
    continue;
  } else {
   if (VAR_6->inf.ps.state3 != VAR_3)
    continue;
  }
  VAR_9 |= VAR_8;
 }

 return VAR_9;
}
