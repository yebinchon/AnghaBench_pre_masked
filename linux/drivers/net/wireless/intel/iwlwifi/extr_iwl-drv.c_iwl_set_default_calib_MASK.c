
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_6__ {int event_trigger; int flow_trigger; } ;
struct iwl_tlv_calib_data {TYPE_3__ calib; int ucode_type; } ;
struct TYPE_5__ {TYPE_1__* default_calib; } ;
struct iwl_drv {TYPE_2__ fw; } ;
struct TYPE_4__ {int event_trigger; int flow_trigger; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_drv*,char*,size_t) ;
 size_t VAR_1 ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_drv *VAR_2, const u8 *VAR_3)
{
 struct iwl_tlv_calib_data *VAR_4 =
     (struct iwl_tlv_calib_data *)VAR_3;
 u32 VAR_5 = FUNC_1(VAR_4->ucode_type);
 if (VAR_5 >= VAR_1) {
  FUNC_0(VAR_2, "Wrong ucode_type %u for default calibration.\n",
   VAR_5);
  return -VAR_0;
 }
 VAR_2->fw.default_calib[VAR_5].flow_trigger =
  VAR_4->calib.flow_trigger;
 VAR_2->fw.default_calib[VAR_5].event_trigger =
  VAR_4->calib.event_trigger;

 return 0;
}
