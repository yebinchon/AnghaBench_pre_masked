
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef unsigned int u32 ;
typedef scalar_t__ u16 ;
struct megasas_instance {scalar_t__ adapter_type; struct fusion_context* ctrl_context; } ;
struct fusion_context {int dummy; } ;
struct RAID_CONTEXT_G35 {int span_arm; } ;
struct RAID_CONTEXT {int span_arm; int reg_lock_flags; } ;
struct MR_LD_RAID {int level; scalar_t__ regTypeReqOnRead; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;
struct IO_REQUEST_INFO {int pd_interface; int start_span; int span_arm; unsigned int pd_after_lb; void* r1_alt_dev_handle; int isRead; int start_row; void* devHandle; int pdBlock; } ;
typedef void* __le16 ;
struct TYPE_2__ {int startBlk; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_1 ;
 struct MR_LD_RAID* FUNC_1 (unsigned int,struct MR_DRV_RAID_MAP_ALL*) ;
 unsigned int FUNC_2 (unsigned int,int,struct MR_DRV_RAID_MAP_ALL*) ;
 TYPE_1__* FUNC_3 (unsigned int,int,struct MR_DRV_RAID_MAP_ALL*) ;
 unsigned int VAR_2 ;
 void* FUNC_4 (unsigned int,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_5 (unsigned int,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_6 (struct MR_DRV_RAID_MAP_ALL*,unsigned int,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct megasas_instance*,unsigned int,int,int ,struct MR_DRV_RAID_MAP_ALL*) ;
 unsigned int FUNC_9 (struct megasas_instance*,unsigned int,int ,struct MR_DRV_RAID_MAP_ALL*) ;
 scalar_t__ FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ,unsigned int) ;

__attribute__((used)) static u8 FUNC_12(struct megasas_instance *VAR_8, u32 VAR_9,
  u64 VAR_10, u16 VAR_11, struct IO_REQUEST_INFO *VAR_12,
  struct RAID_CONTEXT *VAR_13,
  struct MR_DRV_RAID_MAP_ALL *VAR_14)
{
 struct MR_LD_RAID *VAR_15 = FUNC_1(VAR_9, VAR_14);
 u32 VAR_16, VAR_17, VAR_18;
 u8 VAR_19, VAR_20;
 u64 VAR_21;
 u8 VAR_22 = 1;
 u64 *VAR_23 = &VAR_12->pdBlock;
 __le16 *VAR_24 = &VAR_12->devHandle;
 u8 *VAR_25 = &VAR_12->pd_interface;
 u32 VAR_26, VAR_27, VAR_28, VAR_29;
 struct fusion_context *VAR_30;

 VAR_30 = VAR_8->ctrl_context;
 *VAR_24 = FUNC_7(VAR_1);


 VAR_21 = VAR_12->start_row;
 VAR_20 = VAR_12->start_span;


 if (VAR_15->level == 6) {
  VAR_26 = FUNC_9(VAR_8, VAR_9, VAR_10, VAR_14);
  if (VAR_26 == -1U)
   return 0;
  VAR_27 = FUNC_11(VAR_21, FUNC_6(VAR_14, VAR_9, VAR_20));
  VAR_28 = FUNC_6(VAR_14, VAR_9, VAR_20) - 1 - VAR_27;
  VAR_29 = VAR_28 + 1 + VAR_26;
  if (VAR_29 >= FUNC_6(VAR_14, VAR_9, VAR_20))
   VAR_29 -= FUNC_6(VAR_14, VAR_9, VAR_20);
  VAR_19 = (u8)VAR_29;
 } else

  VAR_19 = FUNC_8(VAR_8, VAR_9, VAR_20, VAR_10, VAR_14);
 if (VAR_19 == 0xFF)
  return 0;

 VAR_17 = FUNC_2(VAR_9, VAR_20, VAR_14);
 VAR_16 = FUNC_0(VAR_17, VAR_19, VAR_14);

 if (VAR_16 != VAR_2) {
  *VAR_24 = FUNC_4(VAR_16, VAR_14);
  *VAR_25 = FUNC_5(VAR_16, VAR_14);

  if ((VAR_8->adapter_type >= VAR_7) &&
      (VAR_15->level == 1) &&
      !VAR_12->isRead) {
   VAR_18 = FUNC_0(VAR_17, VAR_19 + 1, VAR_14);
   if (VAR_18 != VAR_2)
    VAR_12->r1_alt_dev_handle =
    FUNC_4(VAR_18, VAR_14);
  }
 } else {
  if ((VAR_15->level >= 5) &&
   ((VAR_8->adapter_type == VAR_6) ||
   ((VAR_8->adapter_type == VAR_0) &&
   (VAR_15->regTypeReqOnRead != VAR_5))))
   VAR_13->reg_lock_flags = VAR_4;
  else if (VAR_15->level == 1) {
   VAR_19 = VAR_19 + 1;
   VAR_16 = FUNC_0(VAR_17, VAR_19, VAR_14);
   if (VAR_16 != VAR_2) {
    *VAR_24 = FUNC_4(VAR_16, VAR_14);
    *VAR_25 = FUNC_5(VAR_16, VAR_14);
   }
  }
 }

 *VAR_23 += VAR_11 + FUNC_10(FUNC_3(VAR_9, VAR_20, VAR_14)->startBlk);
 if (VAR_8->adapter_type >= VAR_7) {
  ((struct RAID_CONTEXT_G35 *)VAR_13)->span_arm =
   (VAR_20 << VAR_3) | VAR_19;
  VAR_12->span_arm =
   (VAR_20 << VAR_3) | VAR_19;
 } else {
  VAR_13->span_arm =
   (VAR_20 << VAR_3) | VAR_19;
  VAR_12->span_arm = VAR_13->span_arm;
 }
 VAR_12->pd_after_lb = VAR_16;
 return VAR_22;
}
