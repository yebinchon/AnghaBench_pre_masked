
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ seq; scalar_t__ dur; int fc; struct wlan_ethhdr* a3; struct wlan_ethhdr* a2; struct wlan_ethhdr* a1; } ;
union p80211_hdr {TYPE_1__ a3; } ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct wlandevice {int macmode; int hostwep; TYPE_2__* netdev; int * bssid; } ;
struct wlan_snap {struct wlan_ethhdr* oui; int type; } ;
struct wlan_llc {int dsap; int ssap; int ctl; } ;
struct wlan_ethhdr {int saddr; int daddr; int type; } ;
struct sk_buff {scalar_t__ len; int * data; } ;
struct p80211_metawep {int * data; int icv; int iv; } ;
typedef int e_hdr ;
typedef int __le16 ;
struct TYPE_5__ {int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (struct wlan_ethhdr*,int *,int) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int * VAR_13 ;
 int * VAR_14 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 void* FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,scalar_t__) ;
 int FUNC_18 (struct wlandevice*,int *,int *,scalar_t__,int,int ,int ) ;

int FUNC_19(struct wlandevice *VAR_15, u32 VAR_16,
   struct sk_buff *VAR_17, union p80211_hdr *VAR_18,
   struct p80211_metawep *VAR_19)
{
 __le16 VAR_20;
 u16 VAR_21;
 struct wlan_ethhdr VAR_22;
 struct wlan_llc *VAR_23;
 struct wlan_snap *VAR_24;
 int VAR_25;

 FUNC_9(&VAR_22, VAR_17->data, sizeof(VAR_22));

 if (VAR_17->len <= 0) {
  FUNC_14("zero-length skb!\n");
  return 1;
 }

 if (VAR_16 == VAR_9) {
  FUNC_14("ENCAP len: %d\n", VAR_17->len);



 } else {

  VAR_21 = FUNC_12(VAR_22.type);
  if (VAR_21 <= VAR_2) {
   FUNC_14("802.3 len: %d\n", VAR_17->len);




   FUNC_15(VAR_17, VAR_3);


   FUNC_17(VAR_17, VAR_21);
  } else {
   FUNC_14("DIXII len: %d\n", VAR_17->len);



   FUNC_15(VAR_17, VAR_3);


   VAR_24 = FUNC_16(VAR_17, sizeof(struct wlan_snap));
   VAR_24->type = FUNC_6(VAR_21);
   if (VAR_16 == VAR_8 &&
       FUNC_13(VAR_21)) {
    FUNC_9(VAR_24->oui, VAR_13,
           VAR_12);
   } else {
    FUNC_9(VAR_24->oui, VAR_14,
           VAR_12);
   }


   VAR_23 = FUNC_16(VAR_17, sizeof(struct wlan_llc));
   VAR_23->dsap = 0xAA;
   VAR_23->ssap = 0xAA;
   VAR_23->ctl = 0x03;
  }
 }



 VAR_20 = FUNC_5(FUNC_2(VAR_11) |
    FUNC_1(VAR_10));

 switch (VAR_15->macmode) {
 case 128:
  FUNC_9(VAR_18->a3.a1, &VAR_22.daddr, VAR_1);
  FUNC_9(VAR_18->a3.a2, VAR_15->netdev->dev_addr, VAR_1);
  FUNC_9(VAR_18->a3.a3, VAR_15->bssid, VAR_1);
  break;
 case 129:
  VAR_20 |= FUNC_5(FUNC_4(1));
  FUNC_9(VAR_18->a3.a1, VAR_15->bssid, VAR_1);
  FUNC_9(VAR_18->a3.a2, VAR_15->netdev->dev_addr, VAR_1);
  FUNC_9(VAR_18->a3.a3, &VAR_22.daddr, VAR_1);
  break;
 case 130:
  VAR_20 |= FUNC_5(FUNC_0(1));
  FUNC_9(VAR_18->a3.a1, &VAR_22.daddr, VAR_1);
  FUNC_9(VAR_18->a3.a2, VAR_15->bssid, VAR_1);
  FUNC_9(VAR_18->a3.a3, &VAR_22.saddr, VAR_1);
  break;
 default:
  FUNC_10(VAR_15->netdev,
      "Error: Converting eth to wlan in unknown mode.\n");
  return 1;
 }

 VAR_19->data = ((void*)0);

 if ((VAR_15->hostwep & VAR_7) &&
     (VAR_15->hostwep & VAR_6)) {


  VAR_19->data = FUNC_8(VAR_17->len, VAR_4);
  if (!VAR_19->data)
   return -VAR_0;
  VAR_25 = FUNC_18(VAR_15, VAR_17->data, VAR_19->data,
      VAR_17->len,
      VAR_15->hostwep & VAR_5,
      VAR_19->iv, VAR_19->icv);
  if (VAR_25) {
   FUNC_11(VAR_15->netdev,
        "Host en-WEP failed, dropping frame (%d).\n",
        VAR_25);
   FUNC_7(VAR_19->data);
   return 2;
  }
  VAR_20 |= FUNC_5(FUNC_3(1));
 }



 VAR_18->a3.fc = VAR_20;
 VAR_18->a3.dur = 0;
 VAR_18->a3.seq = 0;

 return 0;
}
