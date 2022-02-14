
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_update_encryption {TYPE_1__ header; int encr_type; int mac_addr; int action; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_cmd_update_encryption*) ;
 struct mwl8k_cmd_update_encryption* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct ieee80211_hw*,struct ieee80211_vif*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_5,
           struct ieee80211_vif *VAR_6,
           u8 *VAR_7,
           u8 VAR_8)
{
 struct mwl8k_cmd_update_encryption *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_9->header.code = FUNC_0(VAR_3);
 VAR_9->header.length = FUNC_0(sizeof(*VAR_9));
 VAR_9->action = FUNC_1(VAR_4);
 FUNC_4(VAR_9->mac_addr, VAR_7, VAR_1);
 VAR_9->encr_type = VAR_8;

 VAR_10 = FUNC_5(VAR_5, VAR_6, &VAR_9->header);
 FUNC_2(VAR_9);

 return VAR_10;
}
