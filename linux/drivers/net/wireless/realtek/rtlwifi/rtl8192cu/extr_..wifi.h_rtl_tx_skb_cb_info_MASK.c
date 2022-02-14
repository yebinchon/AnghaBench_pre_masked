
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtlwifi_tx_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ status_driver_data; } ;
struct ieee80211_tx_info {TYPE_1__ status; } ;


 int FUNC_0 (int) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline struct rtlwifi_tx_info *FUNC_2(struct sk_buff *VAR_0)
{
 struct ieee80211_tx_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(sizeof(struct rtlwifi_tx_info) >
       sizeof(VAR_1->status.status_driver_data));

 return (struct rtlwifi_tx_info *)(VAR_1->status.status_driver_data);
}
