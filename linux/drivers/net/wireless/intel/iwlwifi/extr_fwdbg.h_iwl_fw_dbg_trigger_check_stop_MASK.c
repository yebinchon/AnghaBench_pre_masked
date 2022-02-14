
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wireless_dev {int dummy; } ;
struct iwl_fw_runtime {int dummy; } ;
struct iwl_fw_dbg_trigger_tlv {int id; int trig_dis_ms; } ;


 int FUNC_0 (struct iwl_fw_runtime*,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct iwl_fw_runtime*,int ,int) ;
 int FUNC_2 (struct iwl_fw_runtime*,struct iwl_fw_dbg_trigger_tlv*) ;
 int FUNC_3 (struct iwl_fw_dbg_trigger_tlv*,struct wireless_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline bool
FUNC_6(struct iwl_fw_runtime *VAR_1,
         struct wireless_dev *VAR_2,
         struct iwl_fw_dbg_trigger_tlv *VAR_3)
{
 u32 VAR_4 = FUNC_4(VAR_3->trig_dis_ms) * VAR_0;

 if (VAR_2 && !FUNC_3(VAR_3, VAR_2))
  return 0;

 if (FUNC_1(VAR_1, FUNC_5(VAR_3->id), VAR_4)) {
  FUNC_0(VAR_1, "Trigger %d occurred while no-collect window.\n",
    VAR_3->id);
  return 0;
 }

 return FUNC_2(VAR_1, VAR_3);
}
