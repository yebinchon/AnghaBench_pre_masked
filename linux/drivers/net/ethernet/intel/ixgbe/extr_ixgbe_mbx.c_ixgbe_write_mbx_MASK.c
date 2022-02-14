
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_mbx_info {scalar_t__ size; TYPE_1__* ops; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;
struct TYPE_2__ {int (* write ) (struct ixgbe_hw*,int *,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int *,scalar_t__,scalar_t__) ;

s32 FUNC_1(struct ixgbe_hw *VAR_1, u32 *VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct ixgbe_mbx_info *VAR_5 = &VAR_1->mbx;

 if (VAR_3 > VAR_5->size)
  return VAR_0;

 if (!VAR_5->ops)
  return VAR_0;

 return VAR_5->ops->write(VAR_1, VAR_2, VAR_3, VAR_4);
}
