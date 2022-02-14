
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ vft_size; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; int flags2; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ixgbe_adapter*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8, VAR_9;


 VAR_8 = FUNC_0(VAR_7, VAR_2);
 VAR_8 |= VAR_3;
 FUNC_1(VAR_7, VAR_2, VAR_8);

 if (!(VAR_6->flags & VAR_1) ||
     VAR_7->mac.type == VAR_5)
  return;


 if (!(VAR_6->flags2 & VAR_0))
  return;


 VAR_6->flags2 &= ~VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_7->mac.vft_size; VAR_9 += VAR_4)
  FUNC_2(VAR_6, VAR_9);
}
