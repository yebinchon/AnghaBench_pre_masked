
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int get_info; int get_cable_length; int force_speed_duplex; int check_polarity; int commit; int power_down; int power_up; int write_reg_page; int write_reg_locked; int write_reg; void* set_d3_lplu_state; void* set_d0_lplu_state; int read_reg_page; int read_reg_locked; int read_reg; int set_page; } ;
struct e1000_phy_info {int addr; int reset_delay_us; scalar_t__ id; int type; TYPE_2__ ops; int autoneg_mask; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;







 int VAR_7 ;

 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int VAR_20 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_23)
{
 struct e1000_phy_info *VAR_24 = &VAR_23->phy;
 s32 VAR_25;

 VAR_24->addr = 1;
 VAR_24->reset_delay_us = 100;

 VAR_24->ops.set_page = VAR_15;
 VAR_24->ops.read_reg = VAR_11;
 VAR_24->ops.read_reg_locked = VAR_12;
 VAR_24->ops.read_reg_page = VAR_13;
 VAR_24->ops.set_d0_lplu_state = VAR_14;
 VAR_24->ops.set_d3_lplu_state = VAR_14;
 VAR_24->ops.write_reg = VAR_16;
 VAR_24->ops.write_reg_locked = VAR_17;
 VAR_24->ops.write_reg_page = VAR_18;
 VAR_24->ops.power_up = VAR_10;
 VAR_24->ops.power_down = VAR_9;
 VAR_24->autoneg_mask = VAR_0;

 VAR_24->id = VAR_8;

 VAR_25 = FUNC_0(VAR_23);
 if (VAR_25)
  return VAR_25;

 if (VAR_24->id == VAR_8)
  switch (VAR_23->mac.type) {
  default:
   VAR_25 = FUNC_2(VAR_23);
   if (VAR_25)
    return VAR_25;
   if ((VAR_24->id != 0) && (VAR_24->id != VAR_2))
    break;

  case 135:
  case 133:
  case 132:
  case 134:



   VAR_25 = FUNC_1(VAR_23);
   if (VAR_25)
    return VAR_25;
   VAR_25 = FUNC_2(VAR_23);
   if (VAR_25)
    return VAR_25;
   break;
  }
 VAR_24->type = FUNC_3(VAR_24->id);

 switch (VAR_24->type) {
 case 131:
 case 129:
 case 128:
  VAR_24->ops.check_polarity = VAR_3;
  VAR_24->ops.force_speed_duplex =
      VAR_7;
  VAR_24->ops.get_cable_length = VAR_5;
  VAR_24->ops.get_info = VAR_6;
  VAR_24->ops.commit = VAR_22;
  break;
 case 130:
  VAR_24->ops.check_polarity = VAR_4;
  VAR_24->ops.force_speed_duplex = VAR_21;
  VAR_24->ops.get_cable_length = VAR_19;
  VAR_24->ops.get_info = VAR_20;
  break;
 default:
  VAR_25 = -VAR_1;
  break;
 }

 return VAR_25;
}
