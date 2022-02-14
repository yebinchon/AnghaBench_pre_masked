
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ (* write_reg ) (struct ixgbe_hw*,int ,int ,int ) ;scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int ) ;

s32 FUNC_5(struct ixgbe_hw *VAR_4, bool VAR_5)
{
 u32 VAR_6;
 u16 VAR_7;


 if (VAR_4->mac.ops.get_media_type(VAR_4) != VAR_3)
  return 0;

 if (!VAR_5 && FUNC_1(VAR_4))
  return 0;

 VAR_6 = VAR_4->phy.ops.read_reg(VAR_4, VAR_1, VAR_2, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_5) {
  VAR_7 &= ~VAR_0;
 } else {
  if (FUNC_0(VAR_4))
   return 0;
  VAR_7 |= VAR_0;
 }

 VAR_6 = VAR_4->phy.ops.write_reg(VAR_4, VAR_1, VAR_2, VAR_7);
 return VAR_6;
}
