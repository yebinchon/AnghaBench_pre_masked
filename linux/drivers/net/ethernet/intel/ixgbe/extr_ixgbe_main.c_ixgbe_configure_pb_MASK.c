
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int (* set_rxpba ) (struct ixgbe_hw*,int ,int,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; int fdir_pballoc; int hw_tcs; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 int VAR_5;
 u8 VAR_6 = VAR_3->hw_tcs;

 if (VAR_3->flags & VAR_0 ||
     VAR_3->flags & VAR_1)
  VAR_5 = 32 << VAR_3->fdir_pballoc;
 else
  VAR_5 = 0;

 VAR_4->mac.ops.set_rxpba(VAR_4, VAR_6, VAR_5, VAR_2);
 FUNC_0(VAR_3);
}
