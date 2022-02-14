
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct iwl_fw_runtime {int dummy; } ;
struct iwl_fw_dbg_trigger_tlv {int dummy; } ;


 int FUNC_0 (struct iwl_fw_runtime*,struct iwl_fw_dbg_trigger_tlv*,int *) ;
 int FUNC_1 (struct iwl_fw_runtime*,struct wireless_dev*,struct iwl_fw_dbg_trigger_tlv*) ;

__attribute__((used)) static inline void
FUNC_2(struct iwl_fw_runtime *VAR_0,
    struct wireless_dev *VAR_1,
    struct iwl_fw_dbg_trigger_tlv *VAR_2)
{
 if (!VAR_2)
  return;

 if (!FUNC_1(VAR_0, VAR_1, VAR_2))
  return;

 FUNC_0(VAR_0, VAR_2, ((void*)0));
}
