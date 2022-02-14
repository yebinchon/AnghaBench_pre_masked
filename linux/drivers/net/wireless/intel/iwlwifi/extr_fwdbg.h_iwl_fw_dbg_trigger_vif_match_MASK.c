
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct iwl_fw_dbg_trigger_tlv {int vif_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool
FUNC_1(struct iwl_fw_dbg_trigger_tlv *VAR_1,
        struct wireless_dev *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1->vif_type);

 return VAR_3 == VAR_0 ||
        VAR_2->iftype == VAR_3;
}
