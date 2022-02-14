
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* set_vfta ) (struct ixgbe_hw*,int,int ,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags2; int active_vlans; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_adapter*,int) ;
 int FUNC_2 (struct ixgbe_hw*,int,int ,int,int) ;
 int FUNC_3 (struct ixgbe_hw*,int,int ,int,int) ;
 scalar_t__ FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct ixgbe_adapter *VAR_1, int VAR_2, int VAR_3,
        u32 VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_1->hw;
 int VAR_6;






 if (VAR_2 && FUNC_4(VAR_3, VAR_1->active_vlans)) {
  VAR_6 = VAR_5->mac.ops.set_vfta(VAR_5, VAR_3, FUNC_0(0), 1, 0);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = VAR_5->mac.ops.set_vfta(VAR_5, VAR_3, VAR_4, !!VAR_2, 0);

 if (VAR_2 && !VAR_6)
  return VAR_6;





 if (FUNC_4(VAR_3, VAR_1->active_vlans) ||
     (VAR_1->flags2 & VAR_0))
  FUNC_1(VAR_1, VAR_3);

 return VAR_6;
}
