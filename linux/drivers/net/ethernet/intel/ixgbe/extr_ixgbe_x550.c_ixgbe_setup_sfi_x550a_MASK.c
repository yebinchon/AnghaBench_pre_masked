
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int ) ;scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_3__ {int lan_id; } ;
struct ixgbe_hw {TYPE_1__ bus; struct ixgbe_mac_info mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_8, ixgbe_link_speed *VAR_9)
{
 struct ixgbe_mac_info *VAR_10 = &VAR_8->mac;
 s32 VAR_11;
 u32 VAR_12;


 VAR_11 = VAR_10->ops.read_iosf_sb_reg(VAR_8,
    FUNC_0(VAR_8->bus.lan_id),
    VAR_7, &VAR_12);
 if (VAR_11)
  return VAR_11;

 VAR_12 &= ~VAR_2;
 VAR_12 &= ~VAR_1;
 VAR_12 &= ~VAR_3;
 VAR_12 &= ~VAR_6;


 switch (*VAR_9) {
 case 129:
  VAR_12 |= VAR_4;
  break;
 case 128:
  VAR_12 |= VAR_5;
  break;
 default:

  return VAR_0;
 }

 VAR_11 = VAR_10->ops.write_iosf_sb_reg(VAR_8,
    FUNC_0(VAR_8->bus.lan_id),
    VAR_7, VAR_12);


 VAR_11 = FUNC_1(VAR_8);

 return VAR_11;
}
