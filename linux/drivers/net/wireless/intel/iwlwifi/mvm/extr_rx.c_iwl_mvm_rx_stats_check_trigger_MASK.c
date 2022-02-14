
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_stats {int stop_threshold; int stop_offset; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct iwl_fw_dbg_trigger_tlv*,int *) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (struct iwl_rx_packet*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static inline void
FUNC_6(struct iwl_mvm *VAR_1, struct iwl_rx_packet *VAR_2)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_3;
 struct iwl_fw_dbg_trigger_stats *VAR_4;
 u32 VAR_5, VAR_6;

 VAR_3 = FUNC_2(&VAR_1->fwrt, ((void*)0), VAR_0);
 if (!VAR_3)
  return;

 VAR_4 = (void *)VAR_3->data;

 VAR_5 = FUNC_4(VAR_4->stop_offset);
 VAR_6 = FUNC_4(VAR_4->stop_threshold);

 if (FUNC_0(VAR_5 >= FUNC_3(VAR_2)))
  return;

 if (FUNC_5((__le32 *) (VAR_2->data + VAR_5)) < VAR_6)
  return;

 FUNC_1(&VAR_1->fwrt, VAR_3, ((void*)0));
}
