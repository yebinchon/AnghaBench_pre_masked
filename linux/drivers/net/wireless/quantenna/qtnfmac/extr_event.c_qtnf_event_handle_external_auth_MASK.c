
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wiphy {int registered; } ;
struct qtnf_vif {TYPE_3__* netdev; TYPE_2__* mac; } ;
struct qlink_event_external_auth {int action; int bssid; int akm_suite; int ssid_len; int ssid; } ;
struct TYPE_4__ {int ssid_len; int ssid; } ;
struct cfg80211_external_auth_params {int key_mgmt_suite; int action; int bssid; TYPE_1__ ssid; int member_0; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct cfg80211_external_auth_params*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;
 int FUNC_6 (char*) ;
 struct wiphy* FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(struct qtnf_vif *VAR_2,
    const struct qlink_event_external_auth *VAR_3,
    u16 VAR_4)
{
 struct cfg80211_external_auth_params VAR_5 = {0};
 struct wiphy *VAR_6 = FUNC_7(VAR_2->mac);
 int VAR_7;

 if (VAR_4 < sizeof(*VAR_3)) {
  FUNC_4("MAC%u: payload is too short\n", VAR_2->mac->macid);
  return -VAR_0;
 }

 if (!VAR_6->registered || !VAR_2->netdev)
  return 0;

 if (VAR_3->ssid_len) {
  FUNC_3(VAR_5.ssid.ssid, VAR_3->ssid, VAR_3->ssid_len);
  VAR_5.ssid.ssid_len = VAR_3->ssid_len;
 }

 VAR_5.key_mgmt_suite = FUNC_2(VAR_3->akm_suite);
 FUNC_1(VAR_5.bssid, VAR_3->bssid);
 VAR_5.action = VAR_3->action;

 FUNC_5("%s: external auth bss=%pM action=%u akm=%u\n",
  VAR_2->netdev->name, VAR_5.bssid, VAR_5.action,
  VAR_5.key_mgmt_suite);

 VAR_7 = FUNC_0(VAR_2->netdev, &VAR_5, VAR_1);
 if (VAR_7)
  FUNC_6("failed to offload external auth request\n");

 return VAR_7;
}
