
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_3, bool *VAR_4,
     u32 *VAR_5)
{
 s32 VAR_6;

 *VAR_4 = 0;

 if (FUNC_1(VAR_3)) {
  VAR_6 = VAR_3->mac.ops.acquire_swfw_sync(VAR_3,
     VAR_2);
  if (VAR_6)
   return VAR_1;

  *VAR_4 = 1;
 }

 *VAR_5 = FUNC_0(VAR_3, VAR_0);
 return 0;
}
