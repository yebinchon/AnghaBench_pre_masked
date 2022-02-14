
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pam; scalar_t__ dev; } ;
struct TYPE_7__ {TYPE_1__ pmcw; } ;
struct subchannel {int lpm; int opm; int schid; TYPE_2__ schib; } ;
struct TYPE_10__ {int parent; } ;
struct ccw_device {TYPE_4__* private; TYPE_5__ dev; } ;
struct TYPE_8__ {scalar_t__ devno; } ;
struct TYPE_9__ {scalar_t__ state; TYPE_3__ dev_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 scalar_t__ FUNC_1 (struct subchannel*) ;
 scalar_t__ FUNC_2 (struct subchannel*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct subchannel*) ;
 struct subchannel* FUNC_5 (int ) ;

void FUNC_6(struct ccw_device *VAR_1)
{
 struct subchannel *VAR_2;

 if (VAR_1->private->state != VAR_0)
  return;

 VAR_2 = FUNC_5(VAR_1->dev.parent);

 if (FUNC_2(VAR_2))
  return;




 VAR_2->lpm = VAR_2->schib.pmcw.pam & VAR_2->opm;




 FUNC_4(VAR_2);
 if (FUNC_1(VAR_2))
  return;



 if (VAR_2->schib.pmcw.dev != VAR_1->private->dev_id.devno)
  FUNC_3(VAR_2->schid);
 else
  FUNC_0(VAR_1, 0);
}
