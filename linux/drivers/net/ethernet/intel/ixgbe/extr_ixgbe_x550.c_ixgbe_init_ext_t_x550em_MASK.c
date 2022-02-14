
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_6)
{
 s32 VAR_7;
 u16 VAR_8;

 VAR_7 = VAR_6->phy.ops.read_reg(VAR_6,
          VAR_2,
          VAR_4,
          &VAR_8);
 if (VAR_7)
  return VAR_7;




 if (VAR_8 & VAR_3) {
  VAR_7 = VAR_6->phy.ops.read_reg(VAR_6,
     VAR_0,
     VAR_5,
     &VAR_8);
  if (VAR_7)
   return VAR_7;

  VAR_8 &= ~VAR_1;

  VAR_7 = VAR_6->phy.ops.write_reg(VAR_6,
     VAR_0,
     VAR_5,
     VAR_8);
  if (VAR_7)
   return VAR_7;
 }

 return VAR_7;
}
