
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct MR_LD_SPAN {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ldSpanMap; } ;
struct MR_DRV_RAID_MAP_ALL {TYPE_3__ raidMap; } ;
struct TYPE_5__ {TYPE_1__* spanBlock; } ;
struct TYPE_4__ {struct MR_LD_SPAN span; } ;



__attribute__((used)) static struct MR_LD_SPAN *FUNC_0(u32 VAR_0, u32 VAR_1,
       struct MR_DRV_RAID_MAP_ALL *VAR_2)
{
 return &VAR_2->raidMap.ldSpanMap[VAR_0].spanBlock[VAR_1].span;
}
