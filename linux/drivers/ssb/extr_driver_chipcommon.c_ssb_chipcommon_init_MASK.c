
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ssb_chipcommon {int ticks_per_ms; int max_timer_ms; TYPE_3__* dev; int status; int gpio_lock; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_6__ {TYPE_2__* bus; TYPE_1__ id; int dev; } ;
struct TYPE_5__ {scalar_t__ bustype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ssb_chipcommon*) ;
 int FUNC_1 (struct ssb_chipcommon*) ;
 int FUNC_2 (struct ssb_chipcommon*,int ) ;
 int FUNC_3 (struct ssb_chipcommon*,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ssb_chipcommon*,int ) ;
 int FUNC_7 (struct ssb_chipcommon*) ;
 int FUNC_8 (struct ssb_chipcommon*) ;
 int FUNC_9 (struct ssb_chipcommon*) ;

void FUNC_10(struct ssb_chipcommon *VAR_5)
{
 if (!VAR_5->dev)
  return;

 FUNC_5(&VAR_5->gpio_lock);

 if (VAR_5->dev->id.revision >= 11)
  VAR_5->status = FUNC_2(VAR_5, VAR_1);
 FUNC_4(VAR_5->dev->dev, "chipcommon status is 0x%x\n", VAR_5->status);

 if (VAR_5->dev->id.revision >= 20) {
  FUNC_3(VAR_5, VAR_3, 0);
  FUNC_3(VAR_5, VAR_2, 0);
 }

 FUNC_9(VAR_5);
 FUNC_1(VAR_5);
 FUNC_6(VAR_5, VAR_4);
 FUNC_0(VAR_5);

 if (VAR_5->dev->bus->bustype == VAR_0) {
  VAR_5->ticks_per_ms = FUNC_8(VAR_5);
  VAR_5->max_timer_ms = FUNC_7(VAR_5) / VAR_5->ticks_per_ms;
 }
}
