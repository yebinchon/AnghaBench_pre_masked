
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_ba {int tx_bar; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct iwl_fw_dbg_trigger_tlv*,char*,int const*,int ,int ) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct iwl_mvm *VAR_1, const u8 *VAR_2,
     u16 VAR_3, u16 VAR_4)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_5;
 struct iwl_fw_dbg_trigger_ba *VAR_6;

 VAR_5 = FUNC_2(&VAR_1->fwrt, ((void*)0), VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = (void *)VAR_5->data;

 if (!(FUNC_3(VAR_6->tx_bar) & FUNC_0(VAR_3)))
  return;

 FUNC_1(&VAR_1->fwrt, VAR_5,
    "BAR sent to %pM, tid %d, ssn %d",
    VAR_2, VAR_3, VAR_4);
}
