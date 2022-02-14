
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned char u8 ;
struct wpa_eapol_key {int key_info; } ;
struct sk_buff {unsigned int len; unsigned char* data; } ;
struct TYPE_8__ {int stop; scalar_t__ failure; } ;
struct TYPE_10__ {scalar_t__ pairwise_suite; TYPE_3__ mic_failure; TYPE_4__* key; scalar_t__ rsn_enabled; } ;
struct TYPE_7__ {int status; } ;
struct ks_wlan_private {int connect_status; TYPE_5__ wpa; int net_dev; int * eth_addr; TYPE_2__ psstatus; } ;
struct ieee802_1x_hdr {scalar_t__ type; } ;
struct TYPE_6__ {void* event; void* size; } ;
struct hostif_data_request {TYPE_1__ header; void* auth_type; int * data; } ;
struct ethhdr {unsigned short h_source; } ;
struct ether_hdr {int h_proto; } ;
typedef int mic ;
struct TYPE_9__ {scalar_t__ key_len; int tx_mic_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned short VAR_17 ;
 unsigned short VAR_18 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,unsigned short) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ks_wlan_private*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct hostif_data_request*) ;
 struct hostif_data_request* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct ks_wlan_private*,struct hostif_data_request*,int ,int ,struct sk_buff*) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;
 int FUNC_11 (int ,int *,unsigned int,int ,unsigned char*) ;
 int FUNC_12 (int ,char*,unsigned short) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 unsigned short FUNC_16 (int ) ;
 int VAR_19 ;

int FUNC_17(struct ks_wlan_private *VAR_20, struct sk_buff *VAR_21)
{
 unsigned int VAR_22 = 0;
 unsigned char *VAR_23 = ((void*)0);
 unsigned int VAR_24 = 0;
 struct hostif_data_request *VAR_25;
 unsigned char *VAR_26;
 unsigned short VAR_27;
 struct ether_hdr *VAR_28;
 unsigned short VAR_29 = 0;
 struct ieee802_1x_hdr *VAR_30;
 struct wpa_eapol_key *VAR_31;
 struct ethhdr *VAR_32;
 size_t VAR_33;
 int VAR_34;

 VAR_22 = VAR_21->len;
 if (VAR_22 > VAR_4) {
  FUNC_12(VAR_20->net_dev, "bad length skb_len=%d\n", VAR_22);
  VAR_34 = -VAR_2;
  goto err_kfree_skb;
 }

 if (FUNC_6(VAR_20->connect_status) ||
     (VAR_20->connect_status & VAR_6) ||
     VAR_20->wpa.mic_failure.stop) {
  if (FUNC_13(VAR_20->net_dev))
   FUNC_15(VAR_20->net_dev);

  FUNC_2(VAR_21);

  return 0;
 }


 if (FUNC_0(&VAR_20->psstatus.status) == VAR_13) {
  if (!FUNC_13(VAR_20->net_dev))
   FUNC_14(VAR_20->net_dev);
 }

 VAR_33 = sizeof(*VAR_25) + 6 + VAR_22 + 8;
 VAR_25 = FUNC_8(FUNC_4(VAR_33), VAR_7);
 if (!VAR_25) {
  VAR_34 = -VAR_0;
  goto err_kfree_skb;
 }

 VAR_26 = (unsigned char *)VAR_25->data;

 VAR_23 = VAR_21->data;
 VAR_24 = VAR_21->len;


 VAR_32 = (struct ethhdr *)VAR_21->data;
 if (!FUNC_3(&VAR_20->eth_addr[0], VAR_32->h_source)) {
  FUNC_12(VAR_20->net_dev,
      "Invalid mac address: ethernet->h_source=%pM\n",
      VAR_32->h_source);
  VAR_34 = -VAR_1;
  goto err_kfree;
 }


 VAR_33 = VAR_3 * 2;
 FUNC_10(VAR_26, VAR_23, VAR_33);
 VAR_26 += VAR_33;
 VAR_23 += VAR_33;
 VAR_24 -= VAR_33;


 if (*(VAR_23 + 1) + (*VAR_23 << 8) > 1500) {


  *VAR_26++ = 0xAA;
  *VAR_26++ = 0xAA;
  *VAR_26++ = 0x03;
  *VAR_26++ = 0x00;
  *VAR_26++ = 0x00;
  *VAR_26++ = 0x00;
  VAR_22 += 6;
 } else {

  VAR_23 += 2;
  VAR_24 -= 2;
  VAR_22 -= 2;
 }


 FUNC_10(VAR_26, VAR_23, VAR_24);

 VAR_26 += VAR_24;


 VAR_28 = (struct ether_hdr *)&VAR_25->data[0];
 VAR_27 = FUNC_16(VAR_28->h_proto);


 if (VAR_27 == VAR_5 &&
     VAR_20->wpa.mic_failure.failure > 0) {
  VAR_30 = (struct ieee802_1x_hdr *)(VAR_28 + 1);
  if (VAR_30->type == VAR_9) {
   VAR_31 = (struct wpa_eapol_key *)(VAR_30 + 1);
   VAR_29 = FUNC_16(VAR_31->key_info);
  }
 }

 if (VAR_20->wpa.rsn_enabled && VAR_20->wpa.key[0].key_len) {

  if (VAR_27 == VAR_5 &&
      VAR_20->wpa.key[1].key_len == 0 &&
      VAR_20->wpa.key[2].key_len == 0 &&
      VAR_20->wpa.key[3].key_len == 0) {
   VAR_25->auth_type = FUNC_1(VAR_15);
  } else {
   if (VAR_20->wpa.pairwise_suite == VAR_11) {
    u8 VAR_35[VAR_12];

    VAR_34 = FUNC_11(VAR_20->wpa.key[0].tx_mic_key,
        &VAR_25->data[0], VAR_22,
        0, VAR_35);
    if (VAR_34 < 0)
     goto err_kfree;

    FUNC_10(VAR_26, VAR_35, sizeof(VAR_35));
    VAR_24 += sizeof(VAR_35);
    VAR_22 += sizeof(VAR_35);
    VAR_26 += sizeof(VAR_35);
    VAR_25->auth_type =
        FUNC_1(VAR_16);
   } else if (VAR_20->wpa.pairwise_suite ==
       VAR_10) {
    VAR_25->auth_type =
        FUNC_1(VAR_16);
   }
  }
 } else {
  if (VAR_27 == VAR_5)
   VAR_25->auth_type = FUNC_1(VAR_15);
  else
   VAR_25->auth_type = FUNC_1(VAR_16);
 }


 VAR_25->header.size =
     FUNC_1((sizeof(*VAR_25) - sizeof(VAR_25->header.size) + VAR_22));
 VAR_25->header.event = FUNC_1(VAR_8);


 VAR_34 = FUNC_9(VAR_20, VAR_25, FUNC_4(sizeof(*VAR_25) + VAR_22),
       VAR_19, VAR_21);


 if (VAR_27 == VAR_5 &&
     VAR_20->wpa.mic_failure.failure > 0) {
  if (VAR_29 & VAR_17 &&
      VAR_29 & VAR_18) {
   FUNC_12(VAR_20->net_dev,
       "MIC ERROR Report SET : %04X\n", VAR_29);
   FUNC_5(VAR_20, VAR_14);
  }
  if (VAR_20->wpa.mic_failure.failure == 2)
   VAR_20->wpa.mic_failure.stop = 1;
 }

 return VAR_34;

err_kfree:
 FUNC_7(VAR_25);
err_kfree_skb:
 FUNC_2(VAR_21);

 return VAR_34;
}
