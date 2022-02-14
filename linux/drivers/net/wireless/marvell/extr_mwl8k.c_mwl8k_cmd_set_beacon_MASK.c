
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_set_beacon {TYPE_1__ header; int beacon; void* beacon_len; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_set_beacon*) ;
 struct mwl8k_cmd_set_beacon* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_vif*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_3,
    struct ieee80211_vif *VAR_4, u8 *VAR_5, int VAR_6)
{
 struct mwl8k_cmd_set_beacon *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7) + VAR_6, VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->header.code = FUNC_0(VAR_2);
 VAR_7->header.length = FUNC_0(sizeof(*VAR_7) + VAR_6);
 VAR_7->beacon_len = FUNC_0(VAR_6);
 FUNC_3(VAR_7->beacon, VAR_5, VAR_6);

 VAR_8 = FUNC_4(VAR_3, VAR_4, &VAR_7->header);
 FUNC_1(VAR_7);

 return VAR_8;
}
