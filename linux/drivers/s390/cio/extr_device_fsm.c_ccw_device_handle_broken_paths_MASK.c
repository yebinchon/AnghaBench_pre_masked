
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ pam; } ;
struct TYPE_7__ {TYPE_2__ pmcw; } ;
struct subchannel {scalar_t__ opm; scalar_t__ vpm; TYPE_3__ schib; } ;
struct TYPE_5__ {int parent; } ;
struct ccw_device {TYPE_4__* private; TYPE_1__ dev; } ;
struct TYPE_8__ {scalar_t__ path_broken_mask; } ;


 int FUNC_0 () ;
 struct subchannel* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ccw_device *VAR_0)
{
 struct subchannel *VAR_1 = FUNC_1(VAR_0->dev.parent);
 u8 VAR_2 = (VAR_1->schib.pmcw.pam & VAR_1->opm) ^ VAR_1->vpm;

 if (VAR_2 && (VAR_0->private->path_broken_mask != VAR_2))
  FUNC_0();

 VAR_0->private->path_broken_mask = VAR_2;
}
