
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int name; int netdev; } ;
struct sk_buff {scalar_t__ cb; } ;
struct p80211_rxmeta {int hosttime; struct wlandevice* wlandev; } ;
struct p80211_frmmeta {struct p80211_rxmeta* rx; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct p80211_rxmeta* FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct wlandevice *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5 = 0;
 struct p80211_rxmeta *VAR_6;
 struct p80211_frmmeta *VAR_7;


 if (FUNC_3(VAR_4)) {
  FUNC_2(VAR_3->netdev,
      "%s: RXmeta already attached!\n", VAR_3->name);
  VAR_5 = 0;
  goto exit;
 }


 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);

 if (!VAR_6) {
  VAR_5 = 1;
  goto exit;
 }


 VAR_6->wlandev = VAR_3;
 VAR_6->hosttime = VAR_2;


 FUNC_1(VAR_4->cb, 0, sizeof(struct p80211_frmmeta));
 VAR_7 = (struct p80211_frmmeta *)(VAR_4->cb);
 VAR_7->magic = VAR_1;
 VAR_7->rx = VAR_6;
exit:
 return VAR_5;
}
