
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int (* read_reg_mdi ) (struct ixgbe_hw*,int ,int ,int*) ;int (* write_reg_mdi ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ phy; } ;
typedef int s32 ;


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
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_6 (struct ixgbe_hw*,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_16, u8 VAR_17,
        u8 VAR_18, u8 *VAR_19)
{
 s32 VAR_20 = 0;
 u16 VAR_21 = 0;
 u16 VAR_22 = 0;
 u16 VAR_23 = 0;
 u16 VAR_24;
 u32 VAR_25;

 if (FUNC_0(VAR_16, VAR_12) & VAR_13)
  VAR_24 = VAR_4;
 else
  VAR_24 = VAR_3;

 if (VAR_16->mac.ops.acquire_swfw_sync(VAR_16, VAR_24) != 0)
  return VAR_2;

 if (VAR_16->phy.type == VAR_15) {





  VAR_21 = (VAR_17 << 8) + VAR_18;
  VAR_21 = (VAR_21 | VAR_5);
  VAR_16->phy.ops.write_reg_mdi(VAR_16,
       VAR_9,
       VAR_14,
       VAR_21);


  for (VAR_25 = 0; VAR_25 < 100; VAR_25++) {
   VAR_16->phy.ops.read_reg_mdi(VAR_16,
      VAR_11,
      VAR_14,
      &VAR_23);
   VAR_23 = VAR_23 & VAR_7;
   if (VAR_23 != VAR_6)
    break;
   FUNC_7(10000, 20000);
  }

  if (VAR_23 != VAR_8) {
   FUNC_1(VAR_16, "EEPROM read did not pass.\n");
   VAR_20 = VAR_1;
   goto out;
  }


  VAR_16->phy.ops.read_reg_mdi(VAR_16, VAR_10,
     VAR_14, &VAR_22);

  *VAR_19 = (u8)(VAR_22 >> 8);
 } else {
  VAR_20 = VAR_0;
 }

out:
 VAR_16->mac.ops.release_swfw_sync(VAR_16, VAR_24);
 return VAR_20;
}
