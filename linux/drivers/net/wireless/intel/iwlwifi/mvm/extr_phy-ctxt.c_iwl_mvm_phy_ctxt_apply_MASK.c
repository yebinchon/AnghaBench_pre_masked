
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct iwl_phy_context_cmd {int dummy; } ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_phy_context_cmd*,struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_3 (struct iwl_mvm_phy_ctxt*,struct iwl_phy_context_cmd*,int ,int ) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,scalar_t__,struct iwl_phy_context_cmd*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_1,
      struct iwl_mvm_phy_ctxt *VAR_2,
      struct cfg80211_chan_def *VAR_3,
      u8 VAR_4, u8 VAR_5,
      u32 VAR_6, u32 VAR_7)
{
 struct iwl_phy_context_cmd VAR_8;
 int VAR_9;
 u16 VAR_10 = sizeof(VAR_8) - FUNC_1(VAR_1);


 FUNC_3(VAR_2, &VAR_8, VAR_6, VAR_7);


 FUNC_2(VAR_1, &VAR_8, VAR_3,
      VAR_4, VAR_5);

 VAR_9 = FUNC_4(VAR_1, VAR_0, 0, VAR_10, &VAR_8);
 if (VAR_9)
  FUNC_0(VAR_1, "PHY ctxt cmd error. ret=%d\n", VAR_9);
 return VAR_9;
}
