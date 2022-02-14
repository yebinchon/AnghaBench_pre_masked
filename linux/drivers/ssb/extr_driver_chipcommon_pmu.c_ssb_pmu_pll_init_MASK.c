
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rev; } ;
struct ssb_chipcommon {TYPE_2__* dev; TYPE_1__ pmu; } ;
struct ssb_bus {scalar_t__ bustype; int chip_id; } ;
typedef int buf ;
struct TYPE_4__ {int dev; struct ssb_bus* bus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (struct ssb_chipcommon*,int) ;
 int FUNC_5 (struct ssb_chipcommon*,int) ;

__attribute__((used)) static void FUNC_6(struct ssb_chipcommon *VAR_3)
{
 struct ssb_bus *VAR_4 = VAR_3->dev->bus;
 u32 VAR_5 = 0;

 if (VAR_4->bustype == VAR_0) {





 }

 switch (VAR_4->chip_id) {
 case 0x4312:
 case 0x4325:
  FUNC_5(VAR_3, VAR_5);
  break;
 case 0x4328:
  FUNC_4(VAR_3, VAR_5);
  break;
 case 0x5354:
  if (VAR_5 == 0)
   VAR_5 = 25000;
  FUNC_4(VAR_3, VAR_5);
  break;
 case 0x4322:
  if (VAR_3->pmu.rev == 2) {
   FUNC_1(VAR_3, VAR_1, 0x0000000A);
   FUNC_1(VAR_3, VAR_2, 0x380005C0);
  }
  break;
 case 43222:
  break;
 default:
  FUNC_2(VAR_3->dev->dev, "ERROR: PLL init unknown for device %04X\n",
   VAR_4->chip_id);
 }
}
