
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_6__ {TYPE_2__* ldSpanMap; } ;
struct MR_DRV_RAID_MAP_ALL {TYPE_3__ raidMap; } ;
struct TYPE_4__ {int targetId; } ;
struct TYPE_5__ {TYPE_1__ ldRaid; } ;


 int FUNC_0 (int ) ;

u16 FUNC_1(u32 VAR_0, struct MR_DRV_RAID_MAP_ALL *VAR_1)
{
 return FUNC_0(VAR_1->raidMap.ldSpanMap[VAR_0].ldRaid.targetId);
}
