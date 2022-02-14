
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ iftype; } ;
struct wil6210_vif {TYPE_2__ wdev; } ;
struct wil6210_priv {int max_assoc_sta; TYPE_1__* sta; struct wil6210_vif** vifs; } ;
struct vring_rx_desc {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_hdr_3addr {unsigned char* addr2; } ;
struct TYPE_3__ {scalar_t__ status; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,unsigned char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct wil6210_priv*,char*,...) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (struct vring_rx_desc*) ;
 int FUNC_6 (struct vring_rx_desc*) ;
 int FUNC_7 (struct vring_rx_desc*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 struct vring_rx_desc* FUNC_9 (struct sk_buff*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_10(struct wil6210_priv *VAR_8, struct sk_buff *VAR_9)
{
 struct vring_rx_desc *VAR_10 = FUNC_9(VAR_9);
 int VAR_11 = FUNC_7(VAR_10);
 struct wil6210_vif *VAR_12 = VAR_8->vifs[VAR_11];




 int VAR_13 = FUNC_5(VAR_10);
 unsigned int VAR_14 = FUNC_4();
 struct ieee80211_hdr_3addr *VAR_15;
 int VAR_16;
 unsigned char *VAR_17;
 u8 VAR_18;


 if (VAR_12->wdev.iftype == VAR_4)
  return VAR_13;

 VAR_18 = FUNC_6(VAR_10) << 2;
 if (FUNC_1(VAR_18 == VAR_2)) {
  if (FUNC_2(VAR_9->len < VAR_1 + VAR_14)) {
   FUNC_3(VAR_8,
         "Short data frame, len = %d\n",
         VAR_9->len);
   return -VAR_0;
  }
  VAR_17 = FUNC_8(VAR_9);
 } else {
  if (FUNC_2(VAR_9->len < sizeof(struct ieee80211_hdr_3addr))) {
   FUNC_3(VAR_8, "Short frame, len = %d\n",
         VAR_9->len);
   return -VAR_0;
  }
  VAR_15 = (void *)VAR_9->data;
  VAR_17 = VAR_15->addr2;
 }

 if (VAR_8->max_assoc_sta <= VAR_6)
  return VAR_13;





 if (VAR_12->wdev.iftype != VAR_5 &&
     VAR_12->wdev.iftype != VAR_3)
  return VAR_13;





 for (VAR_16 = VAR_13; VAR_16 < VAR_8->max_assoc_sta; VAR_16 += VAR_6) {
  if (VAR_8->sta[VAR_16].status != VAR_7 &&
      FUNC_0(VAR_8->sta[VAR_16].addr, VAR_17)) {
   VAR_13 = VAR_16;
   break;
  }
 }
 if (VAR_16 >= VAR_8->max_assoc_sta) {
  FUNC_3(VAR_8, "Could not find cid for frame with transmit addr = %pM, iftype = %d, frametype = %d, len = %d\n",
        VAR_17, VAR_12->wdev.iftype, VAR_18, VAR_9->len);
  VAR_13 = -VAR_0;
 }

 return VAR_13;
}
