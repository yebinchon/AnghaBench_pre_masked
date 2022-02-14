
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct TYPE_12__ {int autoneg_advertised; TYPE_3__ ops; } ;
struct TYPE_10__ {scalar_t__ (* setup_link ) (struct ixgbe_hw*,scalar_t__,int) ;} ;
struct TYPE_11__ {TYPE_4__ ops; } ;
struct TYPE_7__ {scalar_t__ (* read ) (struct ixgbe_hw*,int ,int*) ;} ;
struct TYPE_8__ {int ctrl_word_3; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_6__ phy; TYPE_5__ mac; scalar_t__ wol_enabled; TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,scalar_t__,int) ;

__attribute__((used)) static s32 FUNC_11(struct ixgbe_hw *VAR_13)
{
 u16 VAR_14, VAR_15, VAR_16;
 s32 VAR_17;
 ixgbe_link_speed VAR_18;
 u32 VAR_19;
 bool VAR_20;


 if (FUNC_0(VAR_13))
  return 0;

 VAR_17 = FUNC_1(VAR_13, &VAR_20);
 if (VAR_17)
  return VAR_17;

 VAR_17 = VAR_13->eeprom.ops.read(VAR_13, VAR_11,
         &VAR_13->eeprom.ctrl_word_3);
 if (VAR_17)
  return VAR_17;





 if (!VAR_20 || !(VAR_13->eeprom.ctrl_word_3 & VAR_12) ||
     !(VAR_13->wol_enabled || FUNC_3(VAR_13)))
  return FUNC_4(VAR_13, 0);


 VAR_17 = FUNC_2(VAR_13, &VAR_18);
 if (VAR_17)
  return VAR_17;


 if (VAR_18 == VAR_2)
  return FUNC_4(VAR_13, 0);

 VAR_17 = VAR_13->phy.ops.read_reg(VAR_13, VAR_3,
          VAR_10,
          &VAR_16);
 if (VAR_17)
  return VAR_17;


 VAR_17 = FUNC_1(VAR_13, &VAR_20);
 if (VAR_17)
  return FUNC_4(VAR_13, 0);


 VAR_16 &= VAR_7;


 if (((VAR_16 == VAR_5) &&
      (VAR_18 == VAR_1)) ||
     ((VAR_16 == VAR_4) &&
      (VAR_18 == VAR_0)))
  return VAR_17;


 VAR_17 = VAR_13->phy.ops.read_reg(VAR_13, VAR_6,
          VAR_10,
          &VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = VAR_13->phy.ops.read_reg(VAR_13, VAR_9,
          VAR_10,
          &VAR_14);
 if (VAR_17)
  return VAR_17;

 VAR_17 = VAR_13->phy.ops.read_reg(VAR_13,
          VAR_8,
          VAR_10,
          &VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_19 = VAR_13->phy.autoneg_advertised;


 VAR_17 = VAR_13->mac.ops.setup_link(VAR_13, VAR_18, 0);


 VAR_13->phy.autoneg_advertised = VAR_19;

 return VAR_17;
}
