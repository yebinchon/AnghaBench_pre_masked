
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct megasas_instance {scalar_t__ UnevenSpanSupport; } ;
struct MR_LD_RAID {int rowSize; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;
struct LD_LOAD_BALANCE_INFO {scalar_t__* last_accessed_block; int * scsi_pending_cmds; } ;
struct IO_REQUEST_INFO {scalar_t__ ldStartBlock; int numBlocks; int span_arm; int pd_after_lb; int ldTgtId; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int,struct MR_DRV_RAID_MAP_ALL*) ;
 scalar_t__ VAR_0 ;
 struct MR_LD_RAID* FUNC_2 (scalar_t__,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_3 (scalar_t__,int,struct MR_DRV_RAID_MAP_ALL*) ;
 scalar_t__ FUNC_4 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 scalar_t__ FUNC_5 (int ,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct MR_DRV_RAID_MAP_ALL*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ VAR_4 ;

u8 FUNC_8(struct megasas_instance *VAR_5,
      struct LD_LOAD_BALANCE_INFO *VAR_6,
      struct IO_REQUEST_INFO *VAR_7,
      struct MR_DRV_RAID_MAP_ALL *VAR_8)
{
 struct MR_LD_RAID *VAR_9;
 u16 VAR_10;
 u16 VAR_11, VAR_12, VAR_13;
 u64 VAR_14, VAR_15;
 u8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22;

 u64 VAR_23 = VAR_7->ldStartBlock;
 u32 VAR_24 = VAR_7->numBlocks;

 VAR_19 = ((VAR_7->span_arm & VAR_2)
   >> VAR_3);
 VAR_20 = (VAR_7->span_arm & VAR_1);

 VAR_13 = FUNC_5(VAR_7->ldTgtId, VAR_8);
 VAR_9 = FUNC_2(VAR_13, VAR_8);
 VAR_22 = VAR_5->UnevenSpanSupport ?
   FUNC_6(VAR_8, VAR_13, VAR_19) : VAR_9->rowSize;

 VAR_21 = FUNC_3(VAR_13, VAR_19, VAR_8);
 VAR_17 = FUNC_1(VAR_21, VAR_20, VAR_8);
 VAR_18 = FUNC_1(VAR_21, (VAR_20 + 1) >= VAR_22 ?
  (VAR_20 + 1 - VAR_22) : VAR_20 + 1, VAR_8);



 VAR_10 = FUNC_4(VAR_18, VAR_8);

 if (VAR_10 == VAR_0) {
  VAR_16 = VAR_20;
 } else {

  VAR_11 = FUNC_7(&VAR_6->scsi_pending_cmds[VAR_17]);
  VAR_12 = FUNC_7(&VAR_6->scsi_pending_cmds[VAR_18]);


  VAR_14 = FUNC_0(VAR_23, VAR_6->last_accessed_block[VAR_17]);
  VAR_15 = FUNC_0(VAR_23, VAR_6->last_accessed_block[VAR_18]);
  VAR_16 = (VAR_14 <= VAR_15 ? VAR_20 : VAR_20 ^ 1);




  if ((VAR_16 == VAR_20 && VAR_11 > VAR_12 + VAR_4) ||
      (VAR_16 != VAR_20 && VAR_12 > VAR_11 + VAR_4))
   VAR_16 ^= 1;


  VAR_7->span_arm =
   (VAR_19 << VAR_3) | VAR_16;
  VAR_7->pd_after_lb = (VAR_16 == VAR_20) ? VAR_17 : VAR_18;
 }

 VAR_6->last_accessed_block[VAR_7->pd_after_lb] = VAR_23 + VAR_24 - 1;
 return VAR_7->pd_after_lb;
}
