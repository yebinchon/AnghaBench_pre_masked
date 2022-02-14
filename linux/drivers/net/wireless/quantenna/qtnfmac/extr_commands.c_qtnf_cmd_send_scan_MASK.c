
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qtnf_wmac {int bus; int macid; struct cfg80211_scan_request* scan_req; } ;
struct qlink_cmd {int dummy; } ;
struct ieee80211_channel {int flags; int center_freq; int hw_value; } ;
struct cfg80211_scan_request {int n_ssids; scalar_t__ ie_len; int n_channels; int flags; int mac_addr_mask; int mac_addr; struct ieee80211_channel** channels; int ie; TYPE_1__* ssids; } ;
struct TYPE_2__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct sk_buff*,struct ieee80211_channel*) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct qtnf_wmac*,struct sk_buff*) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int ,int ,scalar_t__) ;

int FUNC_11(struct qtnf_wmac *VAR_9)
{
 struct sk_buff *VAR_10;
 struct ieee80211_channel *VAR_11;
 struct cfg80211_scan_request *VAR_12 = VAR_9->scan_req;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 VAR_10 = FUNC_3(VAR_9->macid, VAR_6,
         VAR_4,
         sizeof(struct qlink_cmd));
 if (!VAR_10)
  return -VAR_0;

 FUNC_1(VAR_9->bus);

 if (VAR_12->n_ssids != 0) {
  while (VAR_14 < VAR_12->n_ssids) {
   FUNC_8(VAR_10, VAR_8,
    VAR_12->ssids[VAR_14].ssid,
    VAR_12->ssids[VAR_14].ssid_len);
   VAR_14++;
  }
 }

 if (VAR_12->ie_len != 0)
  FUNC_10(VAR_10, VAR_5,
     VAR_12->ie, VAR_12->ie_len);

 if (VAR_12->n_channels) {
  VAR_13 = VAR_12->n_channels;
  VAR_14 = 0;

  while (VAR_13 != 0) {
   VAR_11 = VAR_12->channels[VAR_14];
   if (VAR_11->flags & VAR_1) {
    VAR_13--;
    continue;
   }

   FUNC_0("MAC%u: scan chan=%d, freq=%d, flags=%#x\n",
     VAR_9->macid, VAR_11->hw_value, VAR_11->center_freq,
     VAR_11->flags);

   FUNC_4(VAR_10, VAR_11);
   VAR_13--;
   VAR_14++;
  }
 }

 FUNC_6(VAR_9, VAR_10);

 if (VAR_12->flags & VAR_3) {
  FUNC_0("MAC%u: scan with random addr=%pM, mask=%pM\n",
    VAR_9->macid,
    VAR_12->mac_addr, VAR_12->mac_addr_mask);

  FUNC_5(VAR_10, VAR_12->mac_addr,
      VAR_12->mac_addr_mask);
 }

 if (VAR_12->flags & VAR_2) {
  FUNC_0("MAC%u: flush cache before scan\n", VAR_9->macid);

  FUNC_9(VAR_10, VAR_7);
 }

 VAR_15 = FUNC_7(VAR_9->bus, VAR_10);
 if (VAR_15)
  goto out;

out:
 FUNC_2(VAR_9->bus);

 return VAR_15;
}
