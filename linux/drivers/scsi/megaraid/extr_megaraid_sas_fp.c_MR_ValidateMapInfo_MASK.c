
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct megasas_instance {scalar_t__ UnevenSpanSupport; TYPE_1__* pdev; scalar_t__ supportmax256vd; scalar_t__ max_raid_mapsize; struct fusion_context* ctrl_context; } ;
struct fusion_context {int log_to_span; struct LD_LOAD_BALANCE_INFO* load_balance_info; struct MR_DRV_RAID_MAP_ALL** ld_drv_map; } ;
struct MR_LD_SPAN_MAP {int dummy; } ;
struct MR_LD_RAID {int capability; } ;
struct MR_FW_RAID_MAP_EXT {int dummy; } ;
struct MR_FW_RAID_MAP {int dummy; } ;
struct MR_DRV_RAID_MAP {int ldCount; int totalSize; } ;
struct MR_DRV_RAID_MAP_ALL {struct MR_DRV_RAID_MAP raidMap; } ;
struct LD_LOAD_BALANCE_INFO {int dummy; } ;
struct TYPE_2__ {int dev; } ;
typedef int PLD_SPAN_INFO ;


 int VAR_0 ;
 struct MR_LD_RAID* FUNC_0 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 scalar_t__ FUNC_1 (struct megasas_instance*,int) ;
 int FUNC_2 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int*) ;
 int FUNC_8 (struct MR_DRV_RAID_MAP_ALL*,struct LD_LOAD_BALANCE_INFO*) ;
 int FUNC_9 (struct MR_DRV_RAID_MAP_ALL*,int ) ;

u8 FUNC_10(struct megasas_instance *VAR_1, u64 VAR_2)
{
 struct fusion_context *VAR_3;
 struct MR_DRV_RAID_MAP_ALL *VAR_4;
 struct MR_DRV_RAID_MAP *VAR_5;
 struct LD_LOAD_BALANCE_INFO *VAR_6;
 PLD_SPAN_INFO VAR_7;
 struct MR_LD_RAID *VAR_8;
 u16 VAR_9, VAR_10;
 u16 VAR_11;
 u32 VAR_12;

 if (FUNC_1(VAR_1, VAR_2))
  return 0;

 VAR_3 = VAR_1->ctrl_context;
 VAR_4 = VAR_3->ld_drv_map[(VAR_2 & 1)];
 VAR_5 = &VAR_4->raidMap;

 VAR_6 = VAR_3->load_balance_info;
 VAR_7 = VAR_3->log_to_span;

 if (VAR_1->max_raid_mapsize)
  VAR_12 = sizeof(struct MR_DRV_RAID_MAP_ALL);
 else if (VAR_1->supportmax256vd)
  VAR_12 = sizeof(struct MR_FW_RAID_MAP_EXT);
 else
  VAR_12 =
   (sizeof(struct MR_FW_RAID_MAP) - sizeof(struct MR_LD_SPAN_MAP) +
   (sizeof(struct MR_LD_SPAN_MAP) * FUNC_5(VAR_5->ldCount)));

 if (FUNC_6(VAR_5->totalSize) != VAR_12) {
  FUNC_3(&VAR_1->pdev->dev, "megasas: map info structure size 0x%x",
   FUNC_6(VAR_5->totalSize));
  FUNC_3(&VAR_1->pdev->dev, "is not matching expected size 0x%x\n",
   (unsigned int)VAR_12);
  FUNC_4(&VAR_1->pdev->dev, "megasas: span map %x, pDrvRaidMap->totalSize : %x\n",
   (unsigned int)sizeof(struct MR_LD_SPAN_MAP),
   FUNC_6(VAR_5->totalSize));
  return 0;
 }

 if (VAR_1->UnevenSpanSupport)
  FUNC_9(VAR_4, VAR_7);

 if (VAR_6)
  FUNC_8(VAR_4, VAR_6);

 VAR_9 = FUNC_5(VAR_4->raidMap.ldCount);


 for (VAR_10 = 0; (VAR_9 > 0) && (VAR_10 < VAR_0); VAR_10++) {
  VAR_11 = FUNC_2(VAR_10, VAR_4);


  if (VAR_11 >= (VAR_0 - 1))
   continue;

  VAR_8 = FUNC_0(VAR_11, VAR_4);
  FUNC_7((u32 *)&VAR_8->capability);

  VAR_9--;
 }

 return 1;
}
