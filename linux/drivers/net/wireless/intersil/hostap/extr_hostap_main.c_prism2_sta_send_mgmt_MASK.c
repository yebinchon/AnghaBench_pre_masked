
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {struct net_device* dev; scalar_t__ cb; } ;
struct net_device {int * dev_addr; } ;
struct hostap_skb_tx_data {int iface; int magic; } ;
struct hostap_ieee80211_mgmt {int bssid; int sa; int da; int frame_control; } ;
struct TYPE_3__ {struct net_device* dev; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct hostap_skb_tx_data*,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int *,size_t) ;
 struct hostap_ieee80211_mgmt* FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;

int FUNC_10(local_info_t *VAR_5, u8 *VAR_6, u16 VAR_7,
    u8 *VAR_8, size_t VAR_9)
{
 struct sk_buff *VAR_10;
 struct hostap_ieee80211_mgmt *VAR_11;
 struct hostap_skb_tx_data *VAR_12;
 struct net_device *VAR_13 = VAR_5->dev;

 VAR_10 = FUNC_1(VAR_4 + VAR_9);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_10, VAR_4);
 VAR_11->frame_control = FUNC_0(VAR_3 | VAR_7);
 FUNC_3(VAR_11->da, VAR_6, VAR_1);
 FUNC_3(VAR_11->sa, VAR_13->dev_addr, VAR_1);
 FUNC_3(VAR_11->bssid, VAR_6, VAR_1);
 if (VAR_8)
  FUNC_6(VAR_10, VAR_8, VAR_9);

 VAR_12 = (struct hostap_skb_tx_data *) VAR_10->cb;
 FUNC_4(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->magic = VAR_2;
 VAR_12->iface = FUNC_5(VAR_13);

 VAR_10->dev = VAR_13;
 FUNC_8(VAR_10);
 FUNC_9(VAR_10);
 FUNC_2(VAR_10);

 return 0;
}
