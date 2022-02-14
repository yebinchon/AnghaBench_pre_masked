
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mii_bus {struct ixgbe_adapter* priv; } ;
struct TYPE_2__ {int phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*,int,int,int ,int ) ;

__attribute__((used)) static s32 FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2,
          u16 VAR_3)
{
 struct ixgbe_adapter *VAR_4 = VAR_0->priv;
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6 = VAR_5->phy.phy_semaphore_mask;

 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_6);
}
