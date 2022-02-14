
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct iwl_mvm {int dummy; } ;
struct iwl_fw_channel_info_v1 {int dummy; } ;
struct iwl_fw_channel_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct iwl_mvm*) ;

__attribute__((used)) static inline void *FUNC_1(struct iwl_mvm *VAR_0,
            struct iwl_fw_channel_info *VAR_1)
{
 return (u8 *)VAR_1 + (FUNC_0(VAR_0) ?
      sizeof(struct iwl_fw_channel_info) :
      sizeof(struct iwl_fw_channel_info_v1));
}
