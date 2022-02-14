
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
struct TYPE_10__ {void* blink_led; void* led_on; void* check_mng_mode; void* set_lan_id; void* get_link_up_info; int check_for_link; void* setup_physical_interface; } ;
struct e1000_mac_info {int mta_reg_count; int adaptive_ifs; int type; int has_fwsm; int arc_subsystem_valid; TYPE_4__ ops; int rar_entry_count; } ;
struct TYPE_11__ {scalar_t__ smb_counter; } ;
struct TYPE_12__ {TYPE_5__ e82571; } ;
struct TYPE_9__ {int media_type; } ;
struct e1000_hw {TYPE_6__ dev_spec; struct e1000_mac_info mac; TYPE_3__ phy; TYPE_2__* adapter; } ;
typedef int s32 ;
struct TYPE_8__ {TYPE_1__* pdev; } ;
struct TYPE_7__ {int device; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_23)
{
 struct e1000_mac_info *VAR_24 = &VAR_23->mac;
 u32 VAR_25 = 0;
 u32 VAR_26 = 0;
 bool VAR_27 = 0;


 switch (VAR_23->adapter->pdev->device) {
 case 139:
 case 134:
 case 138:
  VAR_23->phy.media_type = VAR_11;
  VAR_24->ops.setup_physical_interface =
      VAR_15;
  VAR_24->ops.check_for_link = VAR_18;
  VAR_24->ops.get_link_up_info =
      VAR_21;
  break;
 case 137:
 case 136:
 case 135:
 case 133:
  VAR_23->phy.media_type = VAR_12;
  VAR_24->ops.setup_physical_interface =
      VAR_15;
  VAR_24->ops.check_for_link = VAR_7;
  VAR_24->ops.get_link_up_info =
      VAR_21;
  break;
 default:
  VAR_23->phy.media_type = VAR_10;
  VAR_24->ops.setup_physical_interface =
      VAR_14;
  VAR_24->ops.check_for_link = VAR_17;
  VAR_24->ops.get_link_up_info = VAR_20;
  break;
 }


 VAR_24->mta_reg_count = 128;

 VAR_24->rar_entry_count = VAR_1;

 VAR_24->adaptive_ifs = 1;


 switch (VAR_23->mac.type) {
 case 130:
  VAR_24->ops.set_lan_id = VAR_13;
  VAR_24->ops.check_mng_mode = VAR_19;
  VAR_24->ops.led_on = VAR_22;
  VAR_24->ops.blink_led = VAR_16;


  VAR_24->has_fwsm = 1;



  VAR_24->arc_subsystem_valid = !!(FUNC_1(VAR_4) &
           VAR_0);
  break;
 case 129:
 case 128:
  VAR_24->ops.set_lan_id = VAR_13;
  VAR_24->ops.check_mng_mode = VAR_8;
  VAR_24->ops.led_on = VAR_9;
  break;
 default:
  VAR_24->ops.check_mng_mode = VAR_19;
  VAR_24->ops.led_on = VAR_22;
  VAR_24->ops.blink_led = VAR_16;


  VAR_24->has_fwsm = 1;
  break;
 }







 switch (VAR_23->mac.type) {
 case 132:
 case 131:
  VAR_26 = FUNC_1(VAR_6);

  if (!(VAR_26 & VAR_2)) {

   FUNC_2(VAR_6, VAR_26 | VAR_2);
   VAR_27 = 1;
  } else {
   VAR_27 = 0;
  }
  break;
 default:
  VAR_27 = 1;
  break;
 }

 if (VAR_27) {

  VAR_25 = FUNC_1(VAR_5);
  if (VAR_25 & VAR_3) {




   FUNC_0("Please update your 82571 Bootagent\n");
  }
  FUNC_2(VAR_5, VAR_25 & ~VAR_3);
 }


 VAR_23->dev_spec.e82571.smb_counter = 0;

 return 0;
}
