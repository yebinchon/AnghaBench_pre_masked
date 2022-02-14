
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int sent_timestamp; } ;
struct TYPE_4__ {int state; size_t cur_sta_id; TYPE_1__ peer; } ;
struct iwl_mvm {TYPE_2__ tdls_cs; int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int addr; } ;
typedef enum iwl_tdls_channel_switch_type { ____Placeholder_iwl_tdls_channel_switch_type } iwl_tdls_channel_switch_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_sta*) ;
 int FUNC_1 (struct iwl_mvm*,char*,int,int,int const*,int,int) ;
 size_t VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (int *) ;
 struct ieee80211_sta* FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct iwl_mvm *VAR_6,
     enum iwl_tdls_channel_switch_type VAR_7,
     const u8 *VAR_8, bool VAR_9, u32 VAR_10)
{
 bool VAR_11 = 0;
 int VAR_12 = 0;


 if (VAR_6->tdls_cs.state != 131 &&
     VAR_6->tdls_cs.cur_sta_id != VAR_2) {
  struct ieee80211_sta *VAR_13 = FUNC_4(
    VAR_6->fw_id_to_mac_id[VAR_6->tdls_cs.cur_sta_id],
    FUNC_3(&VAR_6->mutex));
  if (!FUNC_0(VAR_13))
   VAR_11 = FUNC_2(VAR_8, VAR_13->addr);
 }

 switch (VAR_6->tdls_cs.state) {
 case 131:




  if (VAR_7 == VAR_3)
   VAR_12 = -VAR_1;
  break;
 case 129:

  if (!VAR_11)
   VAR_12 = -VAR_0;
  else if (VAR_7 == VAR_5 &&
    !VAR_9)





   VAR_12 = -VAR_0;
  else if (VAR_7 == VAR_4)

   VAR_12 = -VAR_0;
  else if (VAR_10 <= VAR_6->tdls_cs.peer.sent_timestamp)

   VAR_12 = -VAR_1;
  break;
 case 128:




  VAR_12 = -VAR_0;
  break;
 case 130:

  if (VAR_7 == VAR_4) {
   if (!VAR_11)
    VAR_12 = -VAR_0;
   else if (VAR_9)
    VAR_12 = -VAR_0;
  } else if (VAR_7 == VAR_3) {
   VAR_12 = -VAR_1;
  }
  break;
 case 132:




  if (VAR_7 != VAR_3 || !VAR_11)
   VAR_12 = -VAR_0;
  break;
 }

 if (VAR_12)
  FUNC_1(VAR_6,
          "Invalid TDLS action %d state %d peer %pM same_peer %d initiator %d\n",
          VAR_7, VAR_6->tdls_cs.state, VAR_8, VAR_11,
          VAR_9);

 return VAR_12;
}
