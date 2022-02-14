
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct megasas_instance {int dummy; } ;
struct TYPE_2__ {int r56_arm_map; } ;
struct RAID_CONTEXT_G35 {int span_arm; int raid_flags; TYPE_1__ flow_specific; int reg_lock_row_lba; } ;
struct MR_LD_RAID {int rowDataSize; int rowSize; int spanDepth; int level; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;
struct IO_REQUEST_INFO {int pdBlock; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (int ,int,int*,struct MR_DRV_RAID_MAP_ALL*) ;
 struct MR_LD_RAID* FUNC_1 (int ,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct megasas_instance *VAR_6,
       u32 VAR_7, u64 VAR_8,
       struct IO_REQUEST_INFO *VAR_9,
       struct RAID_CONTEXT_G35 *VAR_10,
       struct MR_DRV_RAID_MAP_ALL *VAR_11)
{
 struct MR_LD_RAID *VAR_12 = FUNC_1(VAR_7, VAR_11);
 u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 s8 VAR_18, VAR_19;
 u64 VAR_20;
 u64 *VAR_21 = &VAR_9->pdBlock;

 VAR_14 = VAR_12->rowDataSize;
 VAR_15 = VAR_12->rowSize;

 VAR_20 = FUNC_4(VAR_8, VAR_14);

 VAR_18 = (VAR_15 - 1) - FUNC_5(VAR_20, VAR_15);


 VAR_17 = FUNC_5(VAR_8, VAR_14);

 VAR_16 = FUNC_5((VAR_18 + 1 + VAR_17), VAR_15);

 if (VAR_12->spanDepth == 1) {
  VAR_13 = 0;
 } else {
  VAR_13 = (u8)FUNC_0(VAR_7, VAR_20, VAR_21, VAR_11);
  if (VAR_13 == VAR_5)
   return;
 }

 if (VAR_12->level == 6) {

  VAR_19 = (VAR_15 - 2) - FUNC_5(VAR_20, VAR_15);

  if (VAR_19 < 0)
   VAR_19 += VAR_15;


  VAR_10->flow_specific.r56_arm_map = VAR_18;
  VAR_10->flow_specific.r56_arm_map |=
        (u16)(VAR_19 << VAR_3);
 } else {
  VAR_10->flow_specific.r56_arm_map |=
        (u16)(VAR_18 << VAR_3);
 }

 VAR_10->reg_lock_row_lba = FUNC_3(VAR_20);
 VAR_10->flow_specific.r56_arm_map |=
       (u16)(VAR_17 << VAR_2);
 FUNC_2(&VAR_10->flow_specific.r56_arm_map);
 VAR_10->span_arm = (VAR_13 << VAR_4) | VAR_16;
 VAR_10->raid_flags = (VAR_1 <<
        VAR_0);

 return;
}
