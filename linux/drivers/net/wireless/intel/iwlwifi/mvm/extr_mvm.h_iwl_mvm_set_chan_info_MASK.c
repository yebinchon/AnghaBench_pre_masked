
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_fw_channel_info_v1 {void* ctrl_pos; void* width; void* band; int channel; } ;
struct iwl_fw_channel_info {void* ctrl_pos; void* width; void* band; int channel; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_mvm *VAR_0,
      struct iwl_fw_channel_info *VAR_1,
      u32 VAR_2, u8 VAR_3, u8 VAR_4,
      u8 VAR_5)
{
 if (FUNC_1(VAR_0)) {
  VAR_1->channel = FUNC_0(VAR_2);
  VAR_1->band = VAR_3;
  VAR_1->width = VAR_4;
  VAR_1->ctrl_pos = VAR_5;
 } else {
  struct iwl_fw_channel_info_v1 *VAR_6 =
     (struct iwl_fw_channel_info_v1 *)VAR_1;

  VAR_6->channel = VAR_2;
  VAR_6->band = VAR_3;
  VAR_6->width = VAR_4;
  VAR_6->ctrl_pos = VAR_5;
 }
}
