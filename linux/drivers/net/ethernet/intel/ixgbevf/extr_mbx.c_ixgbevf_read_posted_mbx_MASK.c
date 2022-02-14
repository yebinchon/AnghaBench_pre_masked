
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* read ) (struct ixgbe_hw*,int *,int ) ;} ;
struct ixgbe_mbx_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int *,int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_1, u32 *VAR_2, u16 VAR_3)
{
 struct ixgbe_mbx_info *VAR_4 = &VAR_1->mbx;
 s32 VAR_5 = VAR_0;

 if (!VAR_4->ops.read)
  goto out;

 VAR_5 = FUNC_0(VAR_1);


 if (!VAR_5)
  VAR_5 = VAR_4->ops.read(VAR_1, VAR_2, VAR_3);
out:
 return VAR_5;
}
