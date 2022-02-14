
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * a4; int * a3; } ;
struct TYPE_5__ {int * a2; int * a3; int * a1; int fc; } ;
union p80211_hdr {TYPE_2__ a4; TYPE_1__ a3; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_7__ {int decrypt; int decrypt_err; } ;
struct wlandevice {int hostwep; scalar_t__ spy_number; TYPE_3__ rx; struct net_device* netdev; } ;
struct wlan_snap {void* type; int oui; } ;
struct wlan_llc {int dsap; int ssap; int ctl; } ;
struct wlan_ethhdr {void* type; int * saddr; int * daddr; } ;
struct sk_buff {unsigned int len; int protocol; scalar_t__ data; } ;
struct net_device {unsigned int mtu; } ;
struct TYPE_8__ {int h_source; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (void*) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 void* FUNC_8 (unsigned int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct net_device*,char*,...) ;
 int FUNC_12 (struct wlandevice*,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (char*,unsigned int) ;
 int FUNC_17 (struct sk_buff*,unsigned int) ;
 struct wlan_ethhdr* FUNC_18 (struct sk_buff*,unsigned int) ;
 int FUNC_19 (struct sk_buff*,unsigned int) ;
 int FUNC_20 (struct wlandevice*,scalar_t__,unsigned int,int,scalar_t__,scalar_t__) ;

int FUNC_21(struct wlandevice *VAR_10, u32 VAR_11,
   struct sk_buff *VAR_12)
{
 struct net_device *VAR_13 = VAR_10->netdev;
 u16 VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 u8 VAR_17[VAR_0];
 u8 VAR_18[VAR_0];
 union p80211_hdr *VAR_19;
 struct wlan_ethhdr *VAR_20;
 struct wlan_llc *VAR_21;
 struct wlan_snap *VAR_22;

 int VAR_23;

 VAR_15 = VAR_12->len - VAR_6 - VAR_4;
 VAR_16 = VAR_6;

 VAR_19 = (union p80211_hdr *)VAR_12->data;


 VAR_14 = FUNC_9(VAR_19->a3.fc);
 if ((FUNC_2(VAR_14) == 0) && (FUNC_0(VAR_14) == 0)) {
  FUNC_6(VAR_17, VAR_19->a3.a1);
  FUNC_6(VAR_18, VAR_19->a3.a2);
 } else if ((FUNC_2(VAR_14) == 0) &&
     (FUNC_0(VAR_14) == 1)) {
  FUNC_6(VAR_17, VAR_19->a3.a1);
  FUNC_6(VAR_18, VAR_19->a3.a3);
 } else if ((FUNC_2(VAR_14) == 1) &&
     (FUNC_0(VAR_14) == 0)) {
  FUNC_6(VAR_17, VAR_19->a3.a3);
  FUNC_6(VAR_18, VAR_19->a3.a2);
 } else {
  VAR_16 = VAR_7;
  if (VAR_15 < VAR_7 - VAR_6) {
   FUNC_11(VAR_13, "A4 frame too short!\n");
   return 1;
  }
  VAR_15 -= (VAR_7 - VAR_6);
  FUNC_6(VAR_17, VAR_19->a4.a3);
  FUNC_6(VAR_18, VAR_19->a4.a4);
 }


 if ((VAR_10->hostwep & VAR_3) &&
     FUNC_1(VAR_14) &&
     (VAR_10->hostwep & VAR_2)) {
  if (VAR_15 <= 8) {
   FUNC_11(VAR_13,
       "WEP frame too short (%u).\n", VAR_12->len);
   return 1;
  }
  VAR_23 = FUNC_20(VAR_10, VAR_12->data + VAR_16 + 4,
      VAR_15 - 8, -1,
      VAR_12->data + VAR_16,
      VAR_12->data + VAR_16 +
      VAR_15 - 4);
  if (VAR_23) {

   FUNC_16("Host de-WEP failed, dropping frame (%d).\n",
     VAR_23);
   VAR_10->rx.decrypt_err++;
   return 2;
  }


  VAR_15 -= 8;

  FUNC_17(VAR_12, 4);

  FUNC_19(VAR_12, VAR_12->len - 4);

  VAR_10->rx.decrypt++;
 }

 VAR_20 = (struct wlan_ethhdr *)(VAR_12->data + VAR_16);

 VAR_21 = (struct wlan_llc *)(VAR_12->data + VAR_16);
 VAR_22 =
     (struct wlan_snap *)(VAR_12->data + VAR_16 +
  sizeof(struct wlan_llc));


 if ((VAR_15 >= sizeof(struct wlan_ethhdr)) &&
     (VAR_21->dsap != 0xaa || VAR_21->ssap != 0xaa) &&
     ((!FUNC_7(VAR_17, VAR_20->daddr)) ||
      (!FUNC_7(VAR_18, VAR_20->saddr)))) {
  FUNC_16("802.3 ENCAP len: %d\n", VAR_15);


  if (VAR_15 > (VAR_13->mtu + VAR_1)) {


   FUNC_11(VAR_13, "ENCAP frame too large (%d > %d)\n",
       VAR_15, VAR_13->mtu + VAR_1);
   return 1;
  }


  FUNC_17(VAR_12, VAR_16);

  FUNC_19(VAR_12, VAR_12->len - VAR_4);

 } else if ((VAR_15 >= sizeof(struct wlan_llc) +
  sizeof(struct wlan_snap)) &&
  (VAR_21->dsap == 0xaa) &&
  (VAR_21->ssap == 0xaa) &&
  (VAR_21->ctl == 0x03) &&
     (((FUNC_10(VAR_22->oui, VAR_9,
     VAR_8) == 0) &&
     (VAR_11 == VAR_5) &&
     (FUNC_13(FUNC_3(VAR_22->type)))) ||
     (FUNC_10(VAR_22->oui, VAR_9, VAR_8) !=
   0))) {
  FUNC_16("SNAP+RFC1042 len: %d\n", VAR_15);




  if (VAR_15 > VAR_13->mtu) {


   FUNC_11(VAR_13, "SNAP frame too large (%d > %d)\n",
       VAR_15, VAR_13->mtu);
   return 1;
  }


  FUNC_17(VAR_12, VAR_16);


  VAR_20 = FUNC_18(VAR_12, VAR_1);
  FUNC_6(VAR_20->daddr, VAR_17);
  FUNC_6(VAR_20->saddr, VAR_18);
  VAR_20->type = FUNC_8(VAR_15);


  FUNC_19(VAR_12, VAR_12->len - VAR_4);

 } else if ((VAR_15 >= sizeof(struct wlan_llc) +
  sizeof(struct wlan_snap)) &&
  (VAR_21->dsap == 0xaa) &&
  (VAR_21->ssap == 0xaa) &&
  (VAR_21->ctl == 0x03)) {
  FUNC_16("802.1h/RFC1042 len: %d\n", VAR_15);





  if ((VAR_15 - sizeof(struct wlan_llc) -
   sizeof(struct wlan_snap))
   > VAR_13->mtu) {


   FUNC_11(VAR_13, "DIXII frame too large (%ld > %d)\n",
       (long)(VAR_15 -
       sizeof(struct wlan_llc) -
       sizeof(struct wlan_snap)), VAR_13->mtu);
   return 1;
  }


  FUNC_17(VAR_12, VAR_16);


  FUNC_17(VAR_12, sizeof(struct wlan_llc));


  FUNC_17(VAR_12, sizeof(struct wlan_snap));


  VAR_20 = FUNC_18(VAR_12, VAR_1);
  VAR_20->type = VAR_22->type;
  FUNC_6(VAR_20->daddr, VAR_17);
  FUNC_6(VAR_20->saddr, VAR_18);


  FUNC_19(VAR_12, VAR_12->len - VAR_4);
 } else {
  FUNC_16("NON-ENCAP len: %d\n", VAR_15);






  if (VAR_15 > VAR_13->mtu) {


   FUNC_11(VAR_13, "OTHER frame too large (%d > %d)\n",
       VAR_15, VAR_13->mtu);
   return 1;
  }


  FUNC_17(VAR_12, VAR_16);


  VAR_20 = FUNC_18(VAR_12, VAR_1);
  FUNC_6(VAR_20->daddr, VAR_17);
  FUNC_6(VAR_20->saddr, VAR_18);
  VAR_20->type = FUNC_8(VAR_15);


  FUNC_19(VAR_12, VAR_12->len - VAR_4);
 }
 VAR_12->protocol = FUNC_5(VAR_12, VAR_13);



 if (VAR_10->spy_number)
  FUNC_12(VAR_10, FUNC_4(VAR_12)->h_source,
       FUNC_14(VAR_12));


 FUNC_15(VAR_12);

 return 0;
}
