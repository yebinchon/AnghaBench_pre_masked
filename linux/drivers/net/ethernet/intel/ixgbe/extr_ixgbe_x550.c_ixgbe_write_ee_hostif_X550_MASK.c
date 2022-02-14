
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_2, u16 VAR_3, u16 VAR_4)
{
 s32 VAR_5 = 0;

 if (VAR_2->mac.ops.acquire_swfw_sync(VAR_2, VAR_1) == 0) {
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
  VAR_2->mac.ops.release_swfw_sync(VAR_2, VAR_1);
 } else {
  FUNC_0(VAR_2, "write ee hostif failed to get semaphore");
  VAR_5 = VAR_0;
 }

 return VAR_5;
}
