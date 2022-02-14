
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_tx_resp {int frame_count; } ;
struct iwl_mvm {int dummy; } ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (struct iwl_mvm*,struct iwl_mvm_tx_resp*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline u32 FUNC_2(struct iwl_mvm *VAR_0,
          struct iwl_mvm_tx_resp *VAR_1)
{
 return FUNC_1((__le32 *)FUNC_0(VAR_0, VAR_1) +
       VAR_1->frame_count) & 0xfff;
}
