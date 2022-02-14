
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int ) ;scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct TYPE_7__ {scalar_t__ (* setup_link_speed ) (struct ixgbe_hw*,int ,int) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int lan_id; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ bus; struct ixgbe_mac_info mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_12(struct ixgbe_hw *VAR_13, ixgbe_link_speed VAR_14,
    bool VAR_15)
{
 struct ixgbe_mac_info *VAR_16 = &VAR_13->mac;
 u32 VAR_17, VAR_18, VAR_19;
 s32 VAR_20;

 VAR_20 = VAR_16->ops.read_iosf_sb_reg(VAR_13,
           FUNC_0(VAR_13->bus.lan_id),
           VAR_12, &VAR_17);
 if (VAR_20)
  return VAR_20;

 VAR_17 &= ~VAR_1;
 VAR_17 &= ~VAR_4;
 VAR_17 |= VAR_2;
 VAR_17 |= VAR_0;
 VAR_17 &= ~VAR_3;
 VAR_20 = VAR_16->ops.write_iosf_sb_reg(VAR_13,
     FUNC_0(VAR_13->bus.lan_id),
     VAR_12, VAR_17);
 if (VAR_20)
  return VAR_20;

 VAR_20 = VAR_16->ops.read_iosf_sb_reg(VAR_13,
           FUNC_2(VAR_13->bus.lan_id),
           VAR_12, &VAR_18);
 if (VAR_20)
  return VAR_20;

 VAR_18 &= ~VAR_11;
 VAR_18 &= ~VAR_10;
 VAR_20 = VAR_16->ops.write_iosf_sb_reg(VAR_13,
     FUNC_2(VAR_13->bus.lan_id),
     VAR_12, VAR_18);
 if (VAR_20)
  return VAR_20;

 VAR_20 = VAR_16->ops.write_iosf_sb_reg(VAR_13,
     FUNC_0(VAR_13->bus.lan_id),
     VAR_12, VAR_17);
 if (VAR_20)
  return VAR_20;

 VAR_20 = VAR_16->ops.read_iosf_sb_reg(VAR_13,
        FUNC_1(VAR_13->bus.lan_id),
        VAR_12, &VAR_19);
 if (VAR_20)
  return VAR_20;

 VAR_19 &= ~VAR_9;
 VAR_19 |= VAR_8;
 VAR_19 &= ~VAR_6;
 VAR_19 |= VAR_7;
 VAR_19 |= VAR_5;

 VAR_20 = VAR_16->ops.write_iosf_sb_reg(VAR_13,
        FUNC_1(VAR_13->bus.lan_id),
        VAR_12, VAR_19);
 if (VAR_20)
  return VAR_20;

 FUNC_3(VAR_13);

 return VAR_13->phy.ops.setup_link_speed(VAR_13, VAR_14, VAR_15);
}
