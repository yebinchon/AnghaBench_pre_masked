
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ (* handle_lasi ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct ixgbe_adapter {int flags2; struct ixgbe_hw hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6;

 if (!(VAR_4->flags2 & VAR_1))
  return;

 VAR_4->flags2 &= ~VAR_1;

 if (!VAR_5->phy.ops.handle_lasi)
  return;

 VAR_6 = VAR_5->phy.ops.handle_lasi(&VAR_4->hw);
 if (VAR_6 != VAR_0)
  return;

 FUNC_0(VAR_2, "%s\n", VAR_3);
}
