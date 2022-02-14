
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ixgbe_mbx_info {TYPE_1__* ops; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;
struct TYPE_2__ {int (* check_for_ack ) (struct ixgbe_hw*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;

s32 FUNC_1(struct ixgbe_hw *VAR_1, u16 VAR_2)
{
 struct ixgbe_mbx_info *VAR_3 = &VAR_1->mbx;

 if (!VAR_3->ops)
  return VAR_0;

 return VAR_3->ops->check_for_ack(VAR_1, VAR_2);
}
