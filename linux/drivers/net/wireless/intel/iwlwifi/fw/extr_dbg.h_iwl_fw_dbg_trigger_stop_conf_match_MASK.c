
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ conf; } ;
struct iwl_fw_runtime {TYPE_1__ dump; } ;
struct iwl_fw_dbg_trigger_tlv {int mode; int stop_conf_ids; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool
FUNC_2(struct iwl_fw_runtime *VAR_2,
       struct iwl_fw_dbg_trigger_tlv *VAR_3)
{
 return ((VAR_3->mode & VAR_1) &&
  (VAR_2->dump.conf == VAR_0 ||
  (FUNC_0(VAR_2->dump.conf) & FUNC_1(VAR_3->stop_conf_ids))));
}
