
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int link_up; int link_speed; int state; scalar_t__ last_reset; int mbx_lock; struct ixgbe_hw hw; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int *,int*,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ixgbevf_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5 = VAR_3->link_speed;
 bool VAR_6 = VAR_3->link_up;
 s32 VAR_7;

 FUNC_1(&VAR_3->mbx_lock);

 VAR_7 = VAR_4->mac.ops.check_link(VAR_4, &VAR_5, &VAR_6, 0);

 FUNC_2(&VAR_3->mbx_lock);


 if (VAR_7 && FUNC_4(VAR_2, VAR_3->last_reset + (10 * VAR_0))) {
  FUNC_0(VAR_1, &VAR_3->state);
  VAR_6 = 0;
 }

 VAR_3->link_up = VAR_6;
 VAR_3->link_speed = VAR_5;
}
