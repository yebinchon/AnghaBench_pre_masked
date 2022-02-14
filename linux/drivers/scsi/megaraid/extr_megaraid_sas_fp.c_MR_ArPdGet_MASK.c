
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* arMapInfo; } ;
struct MR_DRV_RAID_MAP_ALL {TYPE_2__ raidMap; } ;
struct TYPE_3__ {int * pd; } ;


 int FUNC_0 (int ) ;

u16 FUNC_1(u32 VAR_0, u32 VAR_1, struct MR_DRV_RAID_MAP_ALL *VAR_2)
{
 return FUNC_0(VAR_2->raidMap.arMapInfo[VAR_0].pd[VAR_1]);
}
