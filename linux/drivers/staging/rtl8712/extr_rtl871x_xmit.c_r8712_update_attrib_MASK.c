
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tx_cmd {int txdw1; } ;
struct sta_priv {int dummy; } ;
struct sta_info {int mac_id; scalar_t__ ieee8021x_blocked; } ;
struct security_priv {int hw_decrypted; scalar_t__ sw_encrypt; int busetkipkey; } ;
struct qos_priv {scalar_t__ qos_option; } ;
struct pkt_file {int pkt_len; } ;
struct pkt_attrib {int ether_type; int pctrl; int pktlen; int dhcp_pkt; int mac_id; int pkt_hdrlen; int priority; int iv_len; int icv_len; int bswenc; int encrypt; int subtype; int hdrlen; scalar_t__ ack_policy; struct sta_info* psta; int * ra; int * src; int * ta; int * dst; } ;
struct mlme_priv {int dhcp_timer; struct qos_priv qospriv; } ;
struct ethhdr {int h_source; int h_dest; int h_proto; } ;
struct TYPE_4__ {scalar_t__ power_mgnt; int smart_ps; } ;
struct TYPE_3__ {scalar_t__ pwr_mode; } ;
struct _adapter {struct security_priv securitypriv; TYPE_2__ registrypriv; TYPE_1__ pwrctrlpriv; struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;
typedef int _pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct security_priv*,struct sta_info*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;



 int FUNC_1 (int *,struct pkt_file*) ;
 int FUNC_2 (struct pkt_file*,...) ;
 scalar_t__ FUNC_3 (struct mlme_priv*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (struct mlme_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int ) ;
 struct sta_info* FUNC_10 (struct _adapter*) ;
 struct sta_info* FUNC_11 (struct sta_priv*,int *) ;
 int FUNC_12 (struct _adapter*,scalar_t__,int ) ;
 int FUNC_13 (struct pkt_file*,struct pkt_attrib*) ;

int FUNC_14(struct _adapter *VAR_15, _pkt *VAR_16,
   struct pkt_attrib *VAR_17)
{
 struct pkt_file VAR_18;
 struct sta_info *VAR_19 = ((void*)0);
 struct ethhdr VAR_20;

 struct tx_cmd VAR_21;

 bool VAR_22;
 struct sta_priv *VAR_23 = &VAR_15->stapriv;
 struct security_priv *VAR_24 = &VAR_15->securitypriv;
 struct mlme_priv *VAR_25 = &VAR_15->mlmepriv;
 struct qos_priv *VAR_26 = &VAR_25->qospriv;

 FUNC_1(VAR_16, &VAR_18);

 FUNC_2(&VAR_18, (unsigned char *)&VAR_20, VAR_3);

 VAR_17->ether_type = FUNC_9(VAR_20.h_proto);





 if (VAR_17->ether_type == 0x0806) {
  if (VAR_15->pwrctrlpriv.pwr_mode !=
      VAR_15->registrypriv.power_mgnt) {
   FUNC_4(&VAR_25->dhcp_timer);
   FUNC_12(VAR_15,
       VAR_15->registrypriv.power_mgnt,
       VAR_15->registrypriv.smart_ps);
  }
 }

 FUNC_8(VAR_17->dst, &VAR_20.h_dest, VAR_2);
 FUNC_8(VAR_17->src, &VAR_20.h_source, VAR_2);
 VAR_17->pctrl = 0;
 if (FUNC_3(VAR_25, VAR_8) ||
     FUNC_3(VAR_25, VAR_7)) {
  FUNC_8(VAR_17->ra, VAR_17->dst, VAR_2);
  FUNC_8(VAR_17->ta, VAR_17->src, VAR_2);
 } else if (FUNC_3(VAR_25, VAR_12)) {
  FUNC_8(VAR_17->ra, FUNC_5(VAR_25), VAR_2);
  FUNC_8(VAR_17->ta, VAR_17->src, VAR_2);
 } else if (FUNC_3(VAR_25, VAR_9)) {
  FUNC_8(VAR_17->ra, VAR_17->dst, VAR_2);
  FUNC_8(VAR_17->ta, FUNC_5(VAR_25), VAR_2);
 } else if (FUNC_3(VAR_25, VAR_11)) {

  if (VAR_17->ether_type != 0x8712)
   return -VAR_0;




  FUNC_2(&VAR_18, (u8 *)&VAR_21, VAR_6);
  FUNC_8(VAR_17->ra, VAR_17->dst, VAR_2);
  FUNC_8(VAR_17->ta, VAR_17->src, VAR_2);
  VAR_17->pctrl = 1;
 }

 VAR_17->pktlen = VAR_18.pkt_len;
 if (VAR_17->ether_type == VAR_4) {




  u8 VAR_27[24];

  FUNC_2(&VAR_18, &VAR_27[0], 24);
  VAR_17->dhcp_pkt = 0;
  if (VAR_18.pkt_len > 282) {
   if (VAR_17->ether_type == VAR_4) {
    if (((VAR_27[21] == 68) && (VAR_27[23] == 67)) ||
     ((VAR_27[21] == 67) && (VAR_27[23] == 68))) {




     VAR_17->dhcp_pkt = 1;
    }
   }
  }
 }
 VAR_22 = FUNC_6(VAR_17->ra);

 if (VAR_22) {
  VAR_19 = FUNC_10(VAR_15);
  VAR_17->mac_id = 4;
 } else {
  if (FUNC_3(VAR_25, VAR_11)) {
   VAR_19 = FUNC_11(VAR_23,
       FUNC_5(VAR_25));
   VAR_17->mac_id = 5;
  } else {
   VAR_19 = FUNC_11(VAR_23, VAR_17->ra);
   if (VAR_19 == ((void*)0))
    return -VAR_1;
   if (FUNC_3(VAR_25, VAR_12))
    VAR_17->mac_id = 5;
   else
    VAR_17->mac_id = VAR_19->mac_id;
  }
 }

 if (VAR_19) {
  VAR_17->psta = VAR_19;
 } else {

  return -VAR_1;
 }

 VAR_17->ack_policy = 0;

 VAR_17->pkt_hdrlen = VAR_3;

 if (VAR_26->qos_option) {
  FUNC_13(&VAR_18, VAR_17);
 } else {
  VAR_17->hdrlen = VAR_13;
  VAR_17->subtype = VAR_10;
  VAR_17->priority = 0;
 }
 if (VAR_19->ieee8021x_blocked) {
  VAR_17->encrypt = 0;
  if ((VAR_17->ether_type != 0x888e) &&
      !FUNC_3(VAR_25, VAR_11))
   return -VAR_0;
 } else {
  FUNC_0(VAR_24, VAR_19, VAR_17->encrypt, VAR_22);
 }
 switch (VAR_17->encrypt) {
 case 128:
 case 129:
  VAR_17->iv_len = 4;
  VAR_17->icv_len = 4;
  break;
 case 130:
  VAR_17->iv_len = 8;
  VAR_17->icv_len = 4;
  if (VAR_15->securitypriv.busetkipkey == VAR_14)
   return -VAR_0;
  break;
 case 131:
  VAR_17->iv_len = 8;
  VAR_17->icv_len = 8;
  break;
 default:
  VAR_17->iv_len = 0;
  VAR_17->icv_len = 0;
  break;
 }

 if (VAR_17->encrypt &&
     (VAR_15->securitypriv.sw_encrypt ||
     !VAR_24->hw_decrypted))
  VAR_17->bswenc = 1;
 else
  VAR_17->bswenc = 0;



 if (FUNC_3(VAR_25, VAR_11))
  VAR_17->priority =
      (FUNC_7(VAR_21.txdw1) >> VAR_5) & 0x1f;
 return 0;
}
