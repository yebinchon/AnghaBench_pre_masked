
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* check_link ) (struct ixgbe_hw*,int*,int*,int) ;} ;
struct TYPE_8__ {int type; TYPE_1__ ops; } ;
struct TYPE_6__ {int (* check_overtemp ) (struct ixgbe_hw*) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct ixgbe_hw {int device_id; TYPE_4__ mac; TYPE_3__ phy; } ;
struct ixgbe_adapter {int interrupt_event; int flags2; struct ixgbe_hw hw; int state; } ;
typedef int s32 ;





 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_8)
{
 struct ixgbe_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10 = VAR_8->interrupt_event;
 s32 VAR_11;

 if (FUNC_5(VAR_4, &VAR_8->state))
  return;

 if (!(VAR_8->flags2 & VAR_3))
  return;

 VAR_8->flags2 &= ~VAR_3;

 switch (VAR_9->device_id) {
 case 130:







  if (!(VAR_10 & VAR_0) &&
      !(VAR_10 & VAR_1))
   return;

  if (!(VAR_10 & VAR_1) && VAR_9->mac.ops.check_link) {
   u32 VAR_12;
   bool VAR_13 = 0;

   VAR_9->mac.ops.check_link(VAR_9, &VAR_12, &VAR_13, 0);

   if (VAR_13)
    return;
  }


  if (VAR_9->phy.ops.check_overtemp(VAR_9) != VAR_2)
   return;

  break;
 case 129:
 case 128:
  VAR_11 = VAR_9->phy.ops.check_overtemp(VAR_9);
  if (VAR_11 != VAR_2)
   return;
  break;
 default:
  if (VAR_8->hw.mac.type >= VAR_6)
   return;
  if (!(VAR_10 & FUNC_0(VAR_9)))
   return;
  break;
 }
 FUNC_1(VAR_5, "%s\n", VAR_7);

 VAR_8->interrupt_event = 0;
}
