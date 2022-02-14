
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* check_overtemp ) (struct ixgbe_hw*) ;scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; int reset_if_overtemp; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_8 (int) ;

s32 FUNC_9(struct ixgbe_hw *VAR_11)
{
 u32 VAR_12;
 u16 VAR_13 = 0;
 s32 VAR_14 = 0;

 if (VAR_11->phy.type == VAR_9)
  VAR_14 = FUNC_2(VAR_11);

 if (VAR_14 != 0 || VAR_11->phy.type == VAR_8)
  return VAR_14;


 if (!VAR_11->phy.reset_if_overtemp &&
     (VAR_0 == VAR_11->phy.ops.check_overtemp(VAR_11)))
  return 0;


 if (FUNC_1(VAR_11))
  return 0;





 VAR_11->phy.ops.write_reg(VAR_11, VAR_4,
         VAR_6,
         VAR_5);






 for (VAR_12 = 0; VAR_12 < 30; VAR_12++) {
  FUNC_3(100);
  if (VAR_11->phy.type == VAR_10) {
   VAR_14 = VAR_11->phy.ops.read_reg(VAR_11,
        VAR_2,
        VAR_7, &VAR_13);
   if (VAR_14)
    return VAR_14;

   if (VAR_13 & VAR_3) {
    FUNC_8(2);
    break;
   }
  } else {
   VAR_14 = VAR_11->phy.ops.read_reg(VAR_11, VAR_4,
            VAR_6, &VAR_13);
   if (VAR_14)
    return VAR_14;

   if (!(VAR_13 & VAR_5)) {
    FUNC_8(2);
    break;
   }
  }
 }

 if (VAR_13 & VAR_5) {
  FUNC_0(VAR_11, "PHY reset polling failed to complete.\n");
  return VAR_1;
 }

 return 0;
}
