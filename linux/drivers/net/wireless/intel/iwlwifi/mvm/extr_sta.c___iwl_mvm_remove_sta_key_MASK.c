
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_mvm_add_sta_key_cmd_v1 {int dummy; } ;
struct TYPE_4__ {scalar_t__ sta_id; int key_offset; int key_flags; } ;
struct iwl_mvm_add_sta_key_cmd {TYPE_2__ common; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct ieee80211_key_conf {int keyidx; int hw_key_idx; } ;
typedef int __le16 ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iwl_mvm*,int ,int,struct iwl_mvm_add_sta_key_cmd*,int*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_10, u8 VAR_11,
        struct ieee80211_key_conf *VAR_12,
        bool VAR_13)
{
 union {
  struct iwl_mvm_add_sta_key_cmd_v1 cmd_v1;
  struct iwl_mvm_add_sta_key_cmd cmd;
 } VAR_14 = {};
 bool VAR_15 = FUNC_3(&VAR_10->fw->ucode_capa,
      VAR_3);
 __le16 VAR_16;
 int VAR_17, VAR_18;
 u32 VAR_19;


 if (VAR_11 == VAR_2)
  return 0;

 VAR_16 = FUNC_2((VAR_12->keyidx << VAR_5) &
     VAR_4);
 VAR_16 |= FUNC_2(VAR_6 | VAR_7);
 VAR_16 |= FUNC_2(VAR_9);

 if (VAR_13)
  VAR_16 |= FUNC_2(VAR_8);





 VAR_14.cmd.common.key_flags = VAR_16;
 VAR_14.cmd.common.key_offset = VAR_12->hw_key_idx;
 VAR_14.cmd.common.sta_id = VAR_11;

 VAR_18 = VAR_15 ? sizeof(VAR_14.cmd) : sizeof(VAR_14.cmd_v1);

 VAR_19 = 128;
 VAR_17 = FUNC_4(VAR_10, VAR_0, VAR_18, &VAR_14.cmd,
       &VAR_19);

 switch (VAR_19) {
 case 128:
  FUNC_0(VAR_10, "MODIFY_STA: remove sta key passed\n");
  break;
 default:
  VAR_17 = -VAR_1;
  FUNC_1(VAR_10, "MODIFY_STA: remove sta key failed\n");
  break;
 }

 return VAR_17;
}
