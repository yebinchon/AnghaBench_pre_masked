
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int *) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_2, u16 VAR_3, u16 *VAR_4)
{
 s32 VAR_5;

 if (VAR_2->mac.ops.acquire_swfw_sync(VAR_2, VAR_1))
  return VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 VAR_2->mac.ops.release_swfw_sync(VAR_2, VAR_1);
 return VAR_5;
}
