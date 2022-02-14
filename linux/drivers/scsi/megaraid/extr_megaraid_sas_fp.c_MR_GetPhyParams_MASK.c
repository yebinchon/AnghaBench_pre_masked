
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct megasas_instance {scalar_t__ adapter_type; struct fusion_context* ctrl_context; } ;
struct fusion_context {int dummy; } ;
struct RAID_CONTEXT_G35 {int span_arm; } ;
struct RAID_CONTEXT {int span_arm; int reg_lock_flags; } ;
struct MR_LD_RAID {scalar_t__ rowDataSize; int level; scalar_t__ rowSize; scalar_t__ modFactor; int spanDepth; int stripeShift; scalar_t__ regTypeReqOnRead; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;
struct IO_REQUEST_INFO {int pdBlock; int pd_interface; int span_arm; int pd_after_lb; void* r1_alt_dev_handle; int isRead; void* devHandle; } ;
typedef void* __le16 ;
struct TYPE_2__ {int startBlk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int,int*,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_2 (int,int,struct MR_DRV_RAID_MAP_ALL*) ;
 struct MR_LD_RAID* FUNC_3 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_4 (int,int,struct MR_DRV_RAID_MAP_ALL*) ;
 TYPE_1__* FUNC_5 (int,int,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_2 ;
 void* FUNC_6 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_7 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;

u8 FUNC_12(struct megasas_instance *VAR_9, u32 VAR_10, u64 VAR_11,
  u16 VAR_12, struct IO_REQUEST_INFO *VAR_13,
  struct RAID_CONTEXT *VAR_14,
  struct MR_DRV_RAID_MAP_ALL *VAR_15)
{
 struct MR_LD_RAID *VAR_16 = FUNC_3(VAR_10, VAR_15);
 u32 VAR_17, VAR_18, VAR_19;
 u8 VAR_20, VAR_21;
 u64 VAR_22;
 u8 VAR_23 = 1;
 u64 *VAR_24 = &VAR_13->pdBlock;
 __le16 *VAR_25 = &VAR_13->devHandle;
 u8 *VAR_26 = &VAR_13->pd_interface;
 struct fusion_context *VAR_27;

 VAR_27 = VAR_9->ctrl_context;
 *VAR_25 = FUNC_8(VAR_1);

 VAR_22 = FUNC_10(VAR_11, VAR_16->rowDataSize);

 if (VAR_16->level == 6) {

  u32 VAR_28 = FUNC_11(VAR_11, VAR_16->rowDataSize);
  u32 VAR_29, VAR_30, VAR_31;

  if (VAR_16->rowSize == 0)
   return 0;

  VAR_29 = FUNC_11(VAR_22, VAR_16->rowSize);
  VAR_30 = VAR_16->rowSize-1-VAR_29;
  VAR_31 = VAR_30+1+VAR_28;
  if (VAR_31 >= VAR_16->rowSize)
   VAR_31 -= VAR_16->rowSize;
  VAR_20 = (u8)VAR_31;
 } else {
  if (VAR_16->modFactor == 0)
   return 0;
  VAR_20 = FUNC_2(VAR_10, FUNC_11(VAR_11,
         VAR_16->modFactor),
       VAR_15);
 }

 if (VAR_16->spanDepth == 1) {
  VAR_21 = 0;
  *VAR_24 = VAR_22 << VAR_16->stripeShift;
 } else {
  VAR_21 = (u8)FUNC_1(VAR_10, VAR_22, VAR_24, VAR_15);
  if (VAR_21 == VAR_6)
   return 0;
 }


 VAR_18 = FUNC_4(VAR_10, VAR_21, VAR_15);
 VAR_17 = FUNC_0(VAR_18, VAR_20, VAR_15);

 if (VAR_17 != VAR_2) {

  *VAR_25 = FUNC_6(VAR_17, VAR_15);
  *VAR_26 = FUNC_7(VAR_17, VAR_15);

  if ((VAR_9->adapter_type >= VAR_8) &&
      (VAR_16->level == 1) &&
      !VAR_13->isRead) {
   VAR_19 = FUNC_0(VAR_18, VAR_20 + 1, VAR_15);
   if (VAR_19 != VAR_2)
    VAR_13->r1_alt_dev_handle =
     FUNC_6(VAR_19, VAR_15);
  }
 } else {
  if ((VAR_16->level >= 5) &&
   ((VAR_9->adapter_type == VAR_7) ||
   ((VAR_9->adapter_type == VAR_0) &&
   (VAR_16->regTypeReqOnRead != VAR_5))))
   VAR_14->reg_lock_flags = VAR_4;
  else if (VAR_16->level == 1) {

   VAR_20 = VAR_20 + 1;
   VAR_17 = FUNC_0(VAR_18, VAR_20, VAR_15);
   if (VAR_17 != VAR_2) {

    *VAR_25 = FUNC_6(VAR_17, VAR_15);
    *VAR_26 = FUNC_7(VAR_17, VAR_15);
   }
  }
 }

 *VAR_24 += VAR_12 + FUNC_9(FUNC_5(VAR_10, VAR_21, VAR_15)->startBlk);
 if (VAR_9->adapter_type >= VAR_8) {
  ((struct RAID_CONTEXT_G35 *)VAR_14)->span_arm =
    (VAR_21 << VAR_3) | VAR_20;
  VAR_13->span_arm =
    (VAR_21 << VAR_3) | VAR_20;
 } else {
  VAR_14->span_arm =
   (VAR_21 << VAR_3) | VAR_20;
  VAR_13->span_arm = VAR_14->span_arm;
 }
 VAR_13->pd_after_lb = VAR_17;
 return VAR_23;
}
