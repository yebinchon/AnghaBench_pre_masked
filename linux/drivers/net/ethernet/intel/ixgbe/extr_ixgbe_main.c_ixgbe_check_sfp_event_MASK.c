
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; int state; struct ixgbe_hw hw; scalar_t__ sfp_poll_time; int flags2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_7, u32 VAR_8)
{
 struct ixgbe_hw *VAR_9 = &VAR_7->hw;
 u32 VAR_10 = FUNC_1(VAR_9);

 if (!FUNC_3(VAR_9))
  return;


 if (VAR_9->mac.type >= VAR_6)
  VAR_10 = VAR_1;

 if (VAR_8 & VAR_10) {

  FUNC_2(VAR_9, VAR_0, VAR_10);
  if (!FUNC_5(VAR_4, &VAR_7->state)) {
   VAR_7->flags2 |= VAR_2;
   VAR_7->sfp_poll_time = 0;
   FUNC_4(VAR_7);
  }
 }

 if (VAR_7->hw.mac.type == VAR_5 &&
     (VAR_8 & FUNC_0(VAR_9))) {

  FUNC_2(VAR_9, VAR_0, FUNC_0(VAR_9));
  if (!FUNC_5(VAR_4, &VAR_7->state)) {
   VAR_7->flags |= VAR_3;
   FUNC_4(VAR_7);
  }
 }
}
