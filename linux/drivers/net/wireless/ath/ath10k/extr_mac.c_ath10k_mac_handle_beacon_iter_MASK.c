
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;
struct ieee80211_mgmt {int bssid; } ;
struct ath10k_vif {int connection_loss_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u8 *VAR_2,
       struct ieee80211_vif *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_1;
 struct ieee80211_mgmt *VAR_5 = (void *)VAR_4->data;
 struct ath10k_vif *VAR_6 = (void *)VAR_3->drv_priv;

 if (VAR_3->type != VAR_0)
  return;

 if (!FUNC_1(VAR_5->bssid, VAR_3->bss_conf.bssid))
  return;

 FUNC_0(&VAR_6->connection_loss_work);
}
