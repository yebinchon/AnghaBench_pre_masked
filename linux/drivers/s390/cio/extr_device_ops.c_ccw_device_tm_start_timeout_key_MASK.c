
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct tcw {int dummy; } ;
struct TYPE_7__ {int ena; } ;
struct TYPE_8__ {TYPE_2__ pmcw; } ;
struct subchannel {int lpm; TYPE_3__ schib; } ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {TYPE_5__* private; TYPE_1__ dev; } ;
struct TYPE_9__ {scalar_t__ fake_irb; } ;
struct TYPE_10__ {scalar_t__ state; unsigned long intparm; TYPE_4__ flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ccw_device*,int) ;
 int FUNC_1 (struct subchannel*,struct tcw*,int ,int ) ;
 struct subchannel* FUNC_2 (int ) ;

int FUNC_3(struct ccw_device *VAR_7, struct tcw *VAR_8,
        unsigned long VAR_9, u8 VAR_10, u8 VAR_11,
        int VAR_12)
{
 struct subchannel *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_2(VAR_7->dev.parent);
 if (!VAR_13->schib.pmcw.ena)
  return -VAR_4;
 if (VAR_7->private->state == VAR_1) {

  if (!VAR_7->private->flags.fake_irb) {
   VAR_7->private->flags.fake_irb = VAR_6;
   VAR_7->private->intparm = VAR_9;
   return 0;
  } else

   return -VAR_3;
 }
 if (VAR_7->private->state != VAR_0)
  return -VAR_5;

 if (VAR_10) {
  VAR_10 &= VAR_13->lpm;
  if (VAR_10 == 0)
   return -VAR_2;
 }
 VAR_14 = FUNC_1(VAR_13, VAR_8, VAR_10, VAR_11);
 if (VAR_14 == 0) {
  VAR_7->private->intparm = VAR_9;
  if (VAR_12)
   FUNC_0(VAR_7, VAR_12);
 }
 return VAR_14;
}
