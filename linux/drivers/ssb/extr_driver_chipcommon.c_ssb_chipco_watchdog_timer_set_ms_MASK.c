
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {int ticks_per_ms; TYPE_2__* dev; } ;
struct bcm47xx_wdt {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ bustype; } ;


 scalar_t__ VAR_0 ;
 struct ssb_chipcommon* FUNC_0 (struct bcm47xx_wdt*) ;
 int FUNC_1 (struct ssb_chipcommon*,int) ;

u32 FUNC_2(struct bcm47xx_wdt *VAR_1, u32 VAR_2)
{
 struct ssb_chipcommon *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4;

 if (VAR_3->dev->bus->bustype != VAR_0)
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_3->ticks_per_ms * VAR_2);
 return VAR_4 / VAR_3->ticks_per_ms;
}
