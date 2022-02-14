
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_update_stadb {TYPE_1__ header; int peer_addr; int action; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_cmd_update_stadb*) ;
 struct mwl8k_cmd_update_stadb* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_5,
          struct ieee80211_vif *VAR_6, u8 *VAR_7)
{
 struct mwl8k_cmd_update_stadb *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->header.code = FUNC_0(VAR_3);
 VAR_8->header.length = FUNC_0(sizeof(*VAR_8));
 VAR_8->action = FUNC_1(VAR_4);
 FUNC_4(VAR_8->peer_addr, VAR_7, VAR_1);

 VAR_9 = FUNC_5(VAR_5, &VAR_8->header);
 FUNC_2(VAR_8);

 return VAR_9;
}
