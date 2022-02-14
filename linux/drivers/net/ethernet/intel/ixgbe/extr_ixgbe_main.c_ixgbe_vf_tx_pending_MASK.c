
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_ring_feature {int mask; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int num_vfs; struct ixgbe_ring_feature* ring_feature; struct ixgbe_hw hw; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 size_t VAR_0 ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_4(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 struct ixgbe_ring_feature *VAR_4 = &VAR_2->ring_feature[VAR_0];
 u32 VAR_5 = FUNC_3(1, ~VAR_4->mask);

 int VAR_6, VAR_7;

 if (!VAR_2->num_vfs)
  return 0;


 if (VAR_3->mac.type >= VAR_1)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_2->num_vfs; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   u32 VAR_8, VAR_9;

   VAR_8 = FUNC_2(VAR_3, FUNC_0(VAR_5, VAR_6, VAR_7));
   VAR_9 = FUNC_2(VAR_3, FUNC_1(VAR_5, VAR_6, VAR_7));

   if (VAR_8 != VAR_9)
    return 1;
  }
 }

 return 0;
}
