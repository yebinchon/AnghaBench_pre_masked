
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int setup_physical_interface; int write_vfta; int release_swfw_sync; int acquire_swfw_sync; int reset_hw; } ;
struct e1000_mac_info {int mta_reg_count; int uta_reg_count; scalar_t__ type; int asf_firmware_present; int arc_subsystem_valid; TYPE_1__ ops; int rar_entry_count; } ;
struct e1000_dev_spec_82575 {int eee_disable; int clear_semaphore_once; int mas_capable; } ;
struct TYPE_6__ {struct e1000_dev_spec_82575 _82575; } ;
struct TYPE_5__ {scalar_t__ media_type; } ;
struct e1000_hw {int device_id; TYPE_3__ dev_spec; TYPE_2__ phy; struct e1000_mac_info mac; } ;
typedef int s32 ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 int const VAR_7 ;


 scalar_t__ VAR_8 ;
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
 int FUNC_0 (int ) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_19)
{
 struct e1000_mac_info *VAR_20 = &VAR_19->mac;
 struct e1000_dev_spec_82575 *VAR_21 = &VAR_19->dev_spec._82575;


 VAR_20->mta_reg_count = 128;

 VAR_20->uta_reg_count = (VAR_19->mac.type == VAR_6) ? 0 : 128;

 switch (VAR_20->type) {
 case 131:
  VAR_20->rar_entry_count = VAR_3;
  break;
 case 130:
  VAR_20->rar_entry_count = VAR_4;
  break;
 case 129:
 case 128:
  VAR_20->rar_entry_count = VAR_5;
  break;
 default:
  VAR_20->rar_entry_count = VAR_2;
  break;
 }

 if (VAR_20->type >= 130)
  VAR_20->ops.reset_hw = VAR_14;
 else
  VAR_20->ops.reset_hw = VAR_13;

 if (VAR_20->type >= VAR_7) {
  VAR_20->ops.acquire_swfw_sync = VAR_10;
  VAR_20->ops.release_swfw_sync = VAR_12;

 } else {
  VAR_20->ops.acquire_swfw_sync = VAR_9;
  VAR_20->ops.release_swfw_sync = VAR_11;
 }

 if ((VAR_19->mac.type == 129) || (VAR_19->mac.type == 128))
  VAR_20->ops.write_vfta = VAR_18;
 else
  VAR_20->ops.write_vfta = VAR_17;


 VAR_20->asf_firmware_present = 1;

 VAR_20->arc_subsystem_valid =
  (FUNC_0(VAR_0) & VAR_1)
   ? 1 : 0;

 if (VAR_20->type >= 129)
  VAR_21->eee_disable = 0;
 else
  VAR_21->eee_disable = 1;

 if (VAR_20->type >= VAR_7)
  VAR_21->clear_semaphore_once = 1;

 VAR_20->ops.setup_physical_interface =
  (VAR_19->phy.media_type == VAR_8)
   ? VAR_15
   : VAR_16;

 if (VAR_20->type == 130 || VAR_20->type == 129) {
  switch (VAR_19->device_id) {

  case 132:
  case 134:
  case 135:
  case 133:
   break;
  default:
   VAR_19->dev_spec._82575.mas_capable = 1;
   break;
  }
 }
 return 0;
}
