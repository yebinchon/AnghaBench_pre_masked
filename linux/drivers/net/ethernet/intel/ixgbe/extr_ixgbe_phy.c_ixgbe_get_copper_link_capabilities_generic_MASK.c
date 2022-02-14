
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ speeds_supported; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef int s32 ;
typedef scalar_t__ ixgbe_link_speed ;


 int FUNC_0 (struct ixgbe_hw*) ;

s32 FUNC_1(struct ixgbe_hw *VAR_0,
            ixgbe_link_speed *VAR_1,
            bool *VAR_2)
{
 s32 VAR_3 = 0;

 *VAR_2 = 1;
 if (!VAR_0->phy.speeds_supported)
  VAR_3 = FUNC_0(VAR_0);

 *VAR_1 = VAR_0->phy.speeds_supported;
 return VAR_3;
}
