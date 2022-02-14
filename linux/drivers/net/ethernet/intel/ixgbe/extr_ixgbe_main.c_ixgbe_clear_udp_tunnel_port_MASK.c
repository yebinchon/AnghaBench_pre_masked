
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags; scalar_t__ geneve_port; scalar_t__ vxlan_port; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_5, u32 VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_5->hw;
 u32 VAR_8;

 if (!(VAR_5->flags & (VAR_1 |
    VAR_0)))
  return;

 VAR_8 = FUNC_0(VAR_7, VAR_2) & ~VAR_6;
 FUNC_1(VAR_7, VAR_2, VAR_8);

 if (VAR_6 & VAR_4)
  VAR_5->vxlan_port = 0;

 if (VAR_6 & VAR_3)
  VAR_5->geneve_port = 0;
}
