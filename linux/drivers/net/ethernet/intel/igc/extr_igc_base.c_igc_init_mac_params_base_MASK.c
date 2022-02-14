
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int setup_physical_interface; int release_swfw_sync; int acquire_swfw_sync; int reset_hw; } ;
struct igc_mac_info {int mta_reg_count; scalar_t__ type; TYPE_1__ ops; int rar_entry_count; } ;
struct igc_dev_spec_base {int clear_semaphore_once; } ;
struct TYPE_4__ {struct igc_dev_spec_base _base; } ;
struct igc_hw {struct igc_mac_info mac; TYPE_2__ dev_spec; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static s32 FUNC_0(struct igc_hw *VAR_6)
{
 struct igc_dev_spec_base *VAR_7 = &VAR_6->dev_spec._base;
 struct igc_mac_info *VAR_8 = &VAR_6->mac;


 VAR_8->mta_reg_count = 128;
 VAR_8->rar_entry_count = VAR_0;


 VAR_8->ops.reset_hw = VAR_4;

 VAR_8->ops.acquire_swfw_sync = VAR_1;
 VAR_8->ops.release_swfw_sync = VAR_3;


 if (VAR_8->type == VAR_2)
  VAR_7->clear_semaphore_once = 1;


 VAR_8->ops.setup_physical_interface = VAR_5;

 return 0;
}
