
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int lan_id; } ;
struct TYPE_4__ {scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int) ;scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static s32 FUNC_7(struct ixgbe_hw *VAR_12,
           ixgbe_link_speed VAR_13)
{
 s32 VAR_14;
 u32 VAR_15;

 VAR_14 = VAR_12->mac.ops.read_iosf_sb_reg(VAR_12,
     FUNC_0(VAR_12->bus.lan_id),
     VAR_10, &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_15 |= VAR_2;
 VAR_15 &= ~(VAR_0 |
       VAR_1);


 if (VAR_13 & VAR_8)
  VAR_15 |= VAR_0;


 if (VAR_13 & VAR_9)
  VAR_15 |= VAR_1;

 VAR_14 = VAR_12->mac.ops.write_iosf_sb_reg(VAR_12,
     FUNC_0(VAR_12->bus.lan_id),
     VAR_10, VAR_15);

 if (VAR_12->mac.type == VAR_11) {

  VAR_14 = VAR_12->mac.ops.read_iosf_sb_reg(VAR_12,
    FUNC_1(VAR_12->bus.lan_id),
    VAR_10, &VAR_15);

  if (VAR_14)
   return VAR_14;

  VAR_15 &= ~VAR_7;
  VAR_15 |= VAR_6;
  VAR_15 |= VAR_4;
  VAR_15 &= ~VAR_3;
  VAR_15 &= ~VAR_5;

  VAR_14 = VAR_12->mac.ops.write_iosf_sb_reg(VAR_12,
    FUNC_1(VAR_12->bus.lan_id),
    VAR_10, VAR_15);
 }

 return FUNC_2(VAR_12);
}
