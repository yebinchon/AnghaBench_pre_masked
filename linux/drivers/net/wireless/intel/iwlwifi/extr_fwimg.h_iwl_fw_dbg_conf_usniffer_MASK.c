
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_fw_dbg_conf_tlv {int usniffer; } ;
struct TYPE_2__ {struct iwl_fw_dbg_conf_tlv** conf_tlv; } ;
struct iwl_fw {TYPE_1__ dbg; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct iwl_fw *VAR_0, u8 VAR_1)
{
 const struct iwl_fw_dbg_conf_tlv *VAR_2 = VAR_0->dbg.conf_tlv[VAR_1];

 if (!VAR_2)
  return 0;

 return VAR_2->usniffer;
}
