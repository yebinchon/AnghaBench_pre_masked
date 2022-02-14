
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {TYPE_1__* dev; } ;
struct ssb_bus {int chip_id; } ;
typedef enum ssb_pmu_ldo_volt_id { ____Placeholder_ssb_pmu_ldo_volt_id } ssb_pmu_ldo_volt_id ;
struct TYPE_2__ {struct ssb_bus* bus; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct ssb_chipcommon*,int,int,int) ;

void FUNC_2(struct ssb_chipcommon *VAR_0,
        enum ssb_pmu_ldo_volt_id VAR_1, u32 VAR_2)
{
 struct ssb_bus *VAR_3 = VAR_0->dev->bus;
 u32 VAR_4, VAR_5, VAR_6;

 switch (VAR_3->chip_id) {
 case 0x4328:
 case 0x5354:
  switch (VAR_1) {
  case 130:
   VAR_4 = 2;
   VAR_5 = 25;
   VAR_6 = 0xF;
   break;
  case 129:
   VAR_4 = 3;
   VAR_5 = 1;
   VAR_6 = 0xF;
   break;
  case 128:
   VAR_4 = 3;
   VAR_5 = 9;
   VAR_6 = 0xF;
   break;
  case 131:
   VAR_4 = 3;
   VAR_5 = 17;
   VAR_6 = 0x3F;
   break;
  default:
   FUNC_0(1);
   return;
  }
  break;
 case 0x4312:
  if (FUNC_0(VAR_1 != 131))
   return;
  VAR_4 = 0;
  VAR_5 = 21;
  VAR_6 = 0x3F;
  break;
 default:
  return;
 }

 FUNC_1(VAR_0, VAR_4, ~(VAR_6 << VAR_5),
      (VAR_2 & VAR_6) << VAR_5);
}
