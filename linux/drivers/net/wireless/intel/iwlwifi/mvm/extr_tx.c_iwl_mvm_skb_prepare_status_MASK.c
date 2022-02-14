
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iwl_device_cmd {int dummy; } ;
struct ieee80211_tx_info {struct iwl_device_cmd** driver_data; struct iwl_device_cmd* status; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iwl_device_cmd**,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0,
           struct iwl_device_cmd *VAR_1)
{
 struct ieee80211_tx_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->status, 0, sizeof(VAR_2->status));
 FUNC_1(VAR_2->driver_data, 0, sizeof(VAR_2->driver_data));

 VAR_2->driver_data[1] = VAR_1;
}
