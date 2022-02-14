
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct iwl_fw_runtime {int fw; int trans; } ;
struct iwl_fw_dbg_trigger_tlv {int dummy; } ;
typedef enum iwl_fw_dbg_trigger { ____Placeholder_iwl_fw_dbg_trigger } iwl_fw_dbg_trigger ;


 struct iwl_fw_dbg_trigger_tlv* FUNC_0 (int ,int const) ;
 int FUNC_1 (struct iwl_fw_runtime*,struct wireless_dev*,struct iwl_fw_dbg_trigger_tlv*) ;
 int FUNC_2 (int ,int const) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline struct iwl_fw_dbg_trigger_tlv*
FUNC_4(struct iwl_fw_runtime *VAR_0,
         struct wireless_dev *VAR_1,
         const enum iwl_fw_dbg_trigger VAR_2)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_3;

 if (FUNC_3(VAR_0->trans))
  return ((void*)0);

 if (!FUNC_2(VAR_0->fw, VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_0->fw, VAR_2);

 if (!FUNC_1(VAR_0, VAR_1, VAR_3))
  return ((void*)0);

 return VAR_3;
}
