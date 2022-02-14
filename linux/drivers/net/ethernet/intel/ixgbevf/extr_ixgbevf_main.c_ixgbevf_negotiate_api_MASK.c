
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* negotiate_api_version ) (struct ixgbe_hw*,int const) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbevf_adapter {int mbx_lock; struct ixgbe_hw hw; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ixgbe_hw*,int const) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_0)
{
 struct ixgbe_hw *VAR_1 = &VAR_0->hw;
 static const int VAR_2[] = {
  129,
  130,
  131,
  132,
  133,
  128
 };
 int VAR_3, VAR_4 = 0;

 FUNC_0(&VAR_0->mbx_lock);

 while (VAR_2[VAR_4] != 128) {
  VAR_3 = VAR_1->mac.ops.negotiate_api_version(VAR_1, VAR_2[VAR_4]);
  if (!VAR_3)
   break;
  VAR_4++;
 }

 FUNC_1(&VAR_0->mbx_lock);
}
