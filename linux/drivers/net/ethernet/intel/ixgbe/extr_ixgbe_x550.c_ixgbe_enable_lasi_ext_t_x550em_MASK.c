
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static s32 FUNC_9(struct ixgbe_hw *VAR_13)
{
 u32 VAR_14;
 u16 VAR_15;
 bool VAR_16;


 VAR_14 = FUNC_0(VAR_13, &VAR_16);
 if (VAR_13->mac.type != VAR_12) {
  VAR_14 = VAR_13->phy.ops.read_reg(VAR_13,
         VAR_9,
         VAR_10, &VAR_15);
  if (VAR_14)
   return VAR_14;

  VAR_15 |= VAR_8;

  VAR_14 = VAR_13->phy.ops.write_reg(VAR_13,
         VAR_9,
         VAR_10, VAR_15);
  if (VAR_14)
   return VAR_14;
 }


 VAR_14 = VAR_13->phy.ops.read_reg(VAR_13, VAR_6,
          VAR_11,
          &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_15 |= (VAR_5 |
  VAR_4);

 VAR_14 = VAR_13->phy.ops.write_reg(VAR_13, VAR_6,
           VAR_11,
           VAR_15);
 if (VAR_14)
  return VAR_14;


 VAR_14 = VAR_13->phy.ops.read_reg(VAR_13, VAR_3,
          VAR_11,
          &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_15 |= (VAR_1 |
  VAR_0);

 VAR_14 = VAR_13->phy.ops.write_reg(VAR_13, VAR_3,
           VAR_11,
           VAR_15);
 if (VAR_14)
  return VAR_14;


 VAR_14 = VAR_13->phy.ops.read_reg(VAR_13, VAR_2,
          VAR_11,
          &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_15 |= VAR_7;

 VAR_14 = VAR_13->phy.ops.write_reg(VAR_13, VAR_2,
           VAR_11,
           VAR_15);

 return VAR_14;
}
