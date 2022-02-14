
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union p80211_hdr {int * data; } ;
struct wlandevice {scalar_t__ state; int macmode; int (* txframe ) (struct wlandevice*,struct sk_buff*,union p80211_hdr*,union p80211_hdr*) ;int netdev; int ethconv; } ;
struct sk_buff {int * data; scalar_t__ len; int protocol; } ;
struct p80211_metawep {int * data; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; struct wlandevice* ml_priv; } ;
typedef int p80211_wep ;
typedef int p80211_hdr ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;



 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (union p80211_hdr*,int *,int) ;
 int FUNC_5 (union p80211_hdr*,int ,int) ;
 int FUNC_6 (struct net_device*,char*,...) ;
 int FUNC_7 (struct net_device*,char*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct wlandevice*,int ,struct sk_buff*,union p80211_hdr*,union p80211_hdr*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct wlandevice*,struct sk_buff*,union p80211_hdr*,union p80211_hdr*) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_5,
       struct net_device *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = -1;
 struct wlandevice *VAR_9 = VAR_6->ml_priv;
 union p80211_hdr VAR_10;
 struct p80211_metawep VAR_11;

 VAR_11.data = ((void*)0);

 if (!VAR_5)
  return VAR_3;

 if (VAR_9->state != VAR_4) {
  VAR_7 = 1;
  goto failed;
 }

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 FUNC_5(&VAR_11, 0, sizeof(VAR_11));

 if (FUNC_8(VAR_6)) {
  FUNC_6(VAR_6, "called when queue stopped.\n");
  VAR_7 = 1;
  goto failed;
 }

 FUNC_10(VAR_6);


 switch (VAR_9->macmode) {
 case 128:
 case 129:
 case 130:
  break;
 default:




  if (FUNC_0(VAR_5->protocol) != VAR_1) {
   FUNC_9(VAR_9->netdev);
   FUNC_7(VAR_6, "Tx attempt prior to association, frame dropped.\n");
   VAR_6->stats.tx_dropped++;
   VAR_7 = 0;
   goto failed;
  }
  break;
 }


 if (FUNC_0(VAR_5->protocol) == VAR_1) {
  if (!FUNC_1(VAR_0)) {
   VAR_7 = 1;
   goto failed;
  }

  FUNC_4(&VAR_10, VAR_5->data, sizeof(VAR_10));
  FUNC_14(VAR_5, sizeof(VAR_10));
 } else {
  if (FUNC_13
      (VAR_9, VAR_9->ethconv, VAR_5, &VAR_10,
       &VAR_11) != 0) {

   FUNC_6(VAR_6, "ether_to_80211(%d) failed.\n",
       VAR_9->ethconv);
   VAR_7 = 1;
   goto failed;
  }
 }
 if (!VAR_9->txframe) {
  VAR_7 = 1;
  goto failed;
 }

 FUNC_11(VAR_6);

 VAR_6->stats.tx_packets++;

 VAR_6->stats.tx_bytes += VAR_5->len;

 VAR_8 = VAR_9->txframe(VAR_9, VAR_5, &VAR_10, &VAR_11);

 if (VAR_8 == 0) {


  FUNC_12(VAR_9->netdev);
  VAR_7 = VAR_3;
 } else if (VAR_8 == 1) {

  FUNC_6(VAR_6, "txframe success, no more bufs\n");


  VAR_7 = VAR_3;
 } else if (VAR_8 == 2) {

  FUNC_6(VAR_6, "txframe returned alloc_fail\n");
  VAR_7 = VAR_2;
 } else {

  FUNC_6(VAR_6, "txframe returned full or busy\n");
  VAR_7 = VAR_2;
 }

failed:

 if ((VAR_11.data) && (VAR_11.data != VAR_5->data))
  FUNC_3(VAR_11.data);


 if (!VAR_7)
  FUNC_2(VAR_5);

 return VAR_7;
}
