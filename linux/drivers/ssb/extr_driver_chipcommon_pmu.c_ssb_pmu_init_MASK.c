
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int rev; } ;
struct ssb_chipcommon {int capabilities; TYPE_2__ pmu; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ssb_chipcommon*,int ,int ) ;
 int FUNC_1 (struct ssb_chipcommon*,int ) ;
 int FUNC_2 (struct ssb_chipcommon*,int ,int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct ssb_chipcommon*) ;
 int FUNC_5 (struct ssb_chipcommon*) ;

void FUNC_6(struct ssb_chipcommon *VAR_5)
{
 u32 VAR_6;

 if (!(VAR_5->capabilities & VAR_0))
  return;

 VAR_6 = FUNC_1(VAR_5, VAR_1);
 VAR_5->pmu.rev = (VAR_6 & VAR_2);

 FUNC_3(VAR_5->dev->dev, "Found rev %u PMU (capabilities 0x%08X)\n",
  VAR_5->pmu.rev, VAR_6);

 if (VAR_5->pmu.rev == 1)
  FUNC_0(VAR_5, VAR_3,
         ~VAR_4);
 else
  FUNC_2(VAR_5, VAR_3,
        VAR_4);
 FUNC_4(VAR_5);
 FUNC_5(VAR_5);
}
