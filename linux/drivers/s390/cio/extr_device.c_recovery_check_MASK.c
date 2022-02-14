
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pam; } ;
struct TYPE_8__ {TYPE_2__ pmcw; } ;
struct subchannel {int opm; int vpm; TYPE_3__ schib; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {int ccwlock; TYPE_5__* private; TYPE_1__ dev; } ;
struct TYPE_9__ {int devno; int ssid; } ;
struct TYPE_10__ {int state; TYPE_4__ dev_id; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;



 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ccw_device* FUNC_4 (struct device*) ;
 struct subchannel* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, void *VAR_2)
{
 struct ccw_device *VAR_3 = FUNC_4(VAR_1);
 struct subchannel *VAR_4;
 int *VAR_5 = VAR_2;

 FUNC_2(VAR_3->ccwlock);
 switch (VAR_3->private->state) {
 case 128:
  VAR_4 = FUNC_5(VAR_3->dev.parent);
  if ((VAR_4->schib.pmcw.pam & VAR_4->opm) == VAR_4->vpm)
   break;

 case 130:
  FUNC_0(3, "recovery: trigger 0.%x.%04x\n",
         VAR_3->private->dev_id.ssid,
         VAR_3->private->dev_id.devno);
  FUNC_1(VAR_3, VAR_0);
  *VAR_5 = 1;
  break;
 case 129:
  *VAR_5 = 1;
  break;
 }
 FUNC_3(VAR_3->ccwlock);

 return 0;
}
