
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {TYPE_1__* dev; } ;
struct ssb_bus {int chip_id; } ;
struct TYPE_2__ {int dev; struct ssb_bus* bus; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ssb_chipcommon*) ;

u32 FUNC_2(struct ssb_chipcommon *VAR_0)
{
 struct ssb_bus *VAR_1 = VAR_0->dev->bus;

 switch (VAR_1->chip_id) {
 case 0x5354:
  return FUNC_1(VAR_0);
 default:
  FUNC_0(VAR_0->dev->dev, "ERROR: PMU alp clock unknown for device %04X\n",
   VAR_1->chip_id);
  return 0;
 }
}
