
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eee_speeds_advertised; int eee_speeds_supported; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
struct ixgbe_adapter {int flags2; struct ixgbe_hw hw; } ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;

 switch (VAR_3->device_id) {
 case 129:
 case 128:
  if (!VAR_3->phy.eee_speeds_supported)
   break;
  VAR_2->flags2 |= VAR_0;
  if (!VAR_3->phy.eee_speeds_advertised)
   break;
  VAR_2->flags2 |= VAR_1;
  break;
 default:
  VAR_2->flags2 &= ~VAR_0;
  VAR_2->flags2 &= ~VAR_1;
  break;
 }
}
