
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_mac_ctx_cmd {int protection_flags; } ;
struct TYPE_3__ {int width; } ;
struct TYPE_4__ {int ht_operation_mode; TYPE_1__ chandef; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;


 int VAR_0 ;




 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_4,
      struct ieee80211_vif *VAR_5,
      struct iwl_mac_ctx_cmd *VAR_6)
{

 u8 VAR_7 = VAR_5->bss_conf.ht_operation_mode &
     VAR_0;

 u32 VAR_8 = VAR_2 | VAR_1;

 FUNC_0(VAR_4, "protection mode set to %d\n", VAR_7);




 switch (VAR_7) {
 case 130:
  break;
 case 128:
 case 129:
  VAR_6->protection_flags |= FUNC_2(VAR_8);
  break;
 case 131:

  if (VAR_5->bss_conf.chandef.width > VAR_3)
   VAR_6->protection_flags |= FUNC_2(VAR_8);
  break;
 default:
  FUNC_1(VAR_4, "Illegal protection mode %d\n",
   VAR_7);
  break;
 }
}
