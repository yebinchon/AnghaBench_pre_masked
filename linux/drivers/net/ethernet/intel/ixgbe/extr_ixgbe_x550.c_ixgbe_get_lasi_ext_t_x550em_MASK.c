
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_16, bool *VAR_17)
{
 u32 VAR_18;
 u16 VAR_19;

 *VAR_17 = 0;


 VAR_18 = VAR_16->phy.ops.read_reg(VAR_16, VAR_8,
          VAR_15,
          &VAR_19);

 if (VAR_18 || !(VAR_19 & VAR_13))
  return VAR_18;


 VAR_18 = VAR_16->phy.ops.read_reg(VAR_16, VAR_11,
          VAR_15,
          &VAR_19);

 if (VAR_18 || !(VAR_19 & (VAR_7 |
    VAR_4)))
  return VAR_18;


 VAR_18 = VAR_16->phy.ops.read_reg(VAR_16, VAR_3,
          VAR_15,
          &VAR_19);

 if (VAR_18)
  return VAR_18;


 if (VAR_19 & VAR_6) {

  FUNC_0(VAR_16, 0);
  return VAR_0;
 }
 if (VAR_19 & VAR_5) {

  VAR_18 = VAR_16->phy.ops.read_reg(VAR_16, VAR_9,
       VAR_15,
       &VAR_19);
  if (VAR_18)
   return VAR_18;


  if (VAR_19 == VAR_10) {

   FUNC_0(VAR_16, 0);
   return VAR_0;
  }
 }


 VAR_18 = VAR_16->phy.ops.read_reg(VAR_16, VAR_8,
          VAR_14, &VAR_19);

 if (VAR_18 || !(VAR_19 & VAR_12))
  return VAR_18;


 VAR_18 = VAR_16->phy.ops.read_reg(VAR_16, VAR_1,
          VAR_14, &VAR_19);

 if (VAR_18)
  return VAR_18;


 if (VAR_19 & VAR_2)
  *VAR_17 = 1;

 return 0;
}
