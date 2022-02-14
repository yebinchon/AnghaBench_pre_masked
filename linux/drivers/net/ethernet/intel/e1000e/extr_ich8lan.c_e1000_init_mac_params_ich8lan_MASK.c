
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rar_get_count; int setup_physical_interface; int rar_set; int led_off; int led_on; int cleanup_led; int setup_led; int id_led_init; int check_mng_mode; int blink_led; } ;
struct e1000_mac_info {int mta_reg_count; int type; int has_fwsm; int arc_subsystem_valid; int adaptive_ifs; TYPE_2__ ops; scalar_t__ rar_entry_count; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {TYPE_1__ phy; struct e1000_mac_info mac; } ;
typedef int s32 ;


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





 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 int VAR_20 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_21)
{
 struct e1000_mac_info *VAR_22 = &VAR_21->mac;


 VAR_21->phy.media_type = VAR_12;


 VAR_22->mta_reg_count = 32;

 VAR_22->rar_entry_count = VAR_0;
 if (VAR_22->type == 134)
  VAR_22->rar_entry_count--;

 VAR_22->has_fwsm = 1;

 VAR_22->arc_subsystem_valid = 0;

 VAR_22->adaptive_ifs = 1;


 switch (VAR_22->type) {
 case 134:
 case 133:
 case 135:

  VAR_22->ops.check_mng_mode = VAR_3;

  VAR_22->ops.id_led_init = VAR_19;

  VAR_22->ops.blink_led = VAR_18;

  VAR_22->ops.setup_led = VAR_20;

  VAR_22->ops.cleanup_led = VAR_5;

  VAR_22->ops.led_on = VAR_10;
  VAR_22->ops.led_off = VAR_8;
  break;
 case 132:
  VAR_22->rar_entry_count = VAR_1;
  VAR_22->ops.rar_set = VAR_14;

 case 130:
 case 129:
 case 131:
 case 128:

  VAR_22->ops.check_mng_mode = VAR_4;

  VAR_22->ops.id_led_init = VAR_7;

  VAR_22->ops.setup_led = VAR_17;

  VAR_22->ops.cleanup_led = VAR_6;

  VAR_22->ops.led_on = VAR_11;
  VAR_22->ops.led_off = VAR_9;
  break;
 default:
  break;
 }

 if (VAR_22->type >= 130) {
  VAR_22->rar_entry_count = VAR_2;
  VAR_22->ops.rar_set = VAR_15;
  VAR_22->ops.setup_physical_interface =
      VAR_16;
  VAR_22->ops.rar_get_count = VAR_13;
 }


 if (VAR_22->type == 134)
  FUNC_0(VAR_21, 1);

 return 0;
}
