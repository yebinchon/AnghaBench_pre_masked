
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ requested_mode; void* current_mode; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

s32 FUNC_1(struct ixgbe_hw *VAR_5, u32 VAR_6, u32 VAR_7,
         u32 VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 if ((!(VAR_6)) || (!(VAR_7)))
  return VAR_0;

 if ((VAR_6 & VAR_8) && (VAR_7 & VAR_10)) {







  if (VAR_5->fc.requested_mode == VAR_1) {
   VAR_5->fc.current_mode = VAR_1;
   FUNC_0(VAR_5, "Flow Control = FULL.\n");
  } else {
   VAR_5->fc.current_mode = VAR_3;
   FUNC_0(VAR_5, "Flow Control=RX PAUSE frames only\n");
  }
 } else if (!(VAR_6 & VAR_8) && (VAR_6 & VAR_9) &&
     (VAR_7 & VAR_10) && (VAR_7 & VAR_11)) {
  VAR_5->fc.current_mode = VAR_4;
  FUNC_0(VAR_5, "Flow Control = TX PAUSE frames only.\n");
 } else if ((VAR_6 & VAR_8) && (VAR_6 & VAR_9) &&
     !(VAR_7 & VAR_10) && (VAR_7 & VAR_11)) {
  VAR_5->fc.current_mode = VAR_3;
  FUNC_0(VAR_5, "Flow Control = RX PAUSE frames only.\n");
 } else {
  VAR_5->fc.current_mode = VAR_2;
  FUNC_0(VAR_5, "Flow Control = NONE.\n");
 }
 return 0;
}
