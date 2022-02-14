
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xmit_priv {int dummy; } ;
struct pkt_attrib {int pktlen; int last_txcmdsz; } ;
struct xmit_frame {scalar_t__ buf_addr; struct pkt_attrib attrib; } ;
struct ndis_802_11_ssid {int SsidLength; int* Ssid; } ;
struct mlme_priv {scalar_t__ wps_probe_req_ie_len; unsigned char* wps_probe_req_ie; } ;
struct mlme_ext_priv {int mgnt_seq; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {unsigned char* addr1; unsigned char* addr3; unsigned char* addr2; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; struct xmit_priv xmitpriv; } ;
typedef scalar_t__ __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (struct ieee80211_hdr*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct xmit_frame* FUNC_3 (struct xmit_priv*) ;
 int FUNC_4 (struct adapter*,struct xmit_frame*) ;
 int FUNC_5 (struct adapter*,struct xmit_frame*) ;
 int FUNC_6 (struct adapter*,unsigned char*,int*) ;
 int FUNC_7 (unsigned char*,...) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 unsigned char* FUNC_9 (int *) ;
 unsigned char* FUNC_10 (unsigned char*,int ,int,...) ;
 int FUNC_11 (struct adapter*,struct pkt_attrib*) ;

__attribute__((used)) static int FUNC_12(struct adapter *VAR_13,
      struct ndis_802_11_ssid *VAR_14,
      u8 *VAR_15, u8 VAR_16, bool VAR_17, bool VAR_18)
{
 int VAR_19 = VAR_7;
 struct xmit_frame *VAR_20;
 struct pkt_attrib *VAR_21;
 unsigned char *VAR_22;
 struct ieee80211_hdr *VAR_23;
 __le16 *VAR_24;
 unsigned char *VAR_25;
 unsigned char VAR_26[VAR_1];
 struct xmit_priv *VAR_27 = &(VAR_13->xmitpriv);
 struct mlme_priv *VAR_28 = &(VAR_13->mlmepriv);
 struct mlme_ext_priv *VAR_29 = &(VAR_13->mlmeextpriv);
 int VAR_30 = 0;
 u8 VAR_31[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

 FUNC_0(VAR_12, VAR_11, ("+issue_probereq\n"));

 VAR_20 = FUNC_3(VAR_27);
 if (!VAR_20)
  goto exit;


 VAR_21 = &VAR_20->attrib;
 FUNC_11(VAR_13, VAR_21);


 FUNC_8(VAR_20->buf_addr, 0, VAR_4 + VAR_2);

 VAR_22 = (u8 *)(VAR_20->buf_addr) + VAR_2;
 VAR_23 = (struct ieee80211_hdr *)VAR_22;

 VAR_25 = FUNC_9(&(VAR_13->eeprompriv));

 VAR_24 = &(VAR_23->frame_control);
 *(VAR_24) = 0;

 if (VAR_15) {

  FUNC_7(VAR_23->addr1, VAR_15, VAR_0);
  FUNC_7(VAR_23->addr3, VAR_15, VAR_0);
 } else {

  FUNC_7(VAR_23->addr1, VAR_31, VAR_0);
  FUNC_7(VAR_23->addr3, VAR_31, VAR_0);
 }

 FUNC_7(VAR_23->addr2, VAR_25, VAR_0);

 FUNC_2(VAR_23, VAR_29->mgnt_seq);
 VAR_29->mgnt_seq++;
 FUNC_1(VAR_22, VAR_3);

 VAR_22 += sizeof(struct ieee80211_hdr_3addr);
 VAR_21->pktlen = sizeof(struct ieee80211_hdr_3addr);

 if (VAR_14)
  VAR_22 = FUNC_10(VAR_22, VAR_8, VAR_14->SsidLength, VAR_14->Ssid, &(VAR_21->pktlen));
 else
  VAR_22 = FUNC_10(VAR_22, VAR_8, 0, ((void*)0), &(VAR_21->pktlen));

 FUNC_6(VAR_13, VAR_26, &VAR_30);

 if (VAR_30 > 8) {
  VAR_22 = FUNC_10(VAR_22, VAR_10, 8, VAR_26, &(VAR_21->pktlen));
  VAR_22 = FUNC_10(VAR_22, VAR_6, (VAR_30 - 8), (VAR_26 + 8), &(VAR_21->pktlen));
 } else {
  VAR_22 = FUNC_10(VAR_22, VAR_10, VAR_30, VAR_26, &(VAR_21->pktlen));
 }

 if (VAR_16)
  VAR_22 = FUNC_10(VAR_22, VAR_5, 1, &VAR_16, &VAR_21->pktlen);

 if (VAR_17) {

  if (VAR_28->wps_probe_req_ie_len > 0 && VAR_28->wps_probe_req_ie) {
   FUNC_7(VAR_22, VAR_28->wps_probe_req_ie, VAR_28->wps_probe_req_ie_len);
   VAR_22 += VAR_28->wps_probe_req_ie_len;
   VAR_21->pktlen += VAR_28->wps_probe_req_ie_len;
  }
 }

 VAR_21->last_txcmdsz = VAR_21->pktlen;

 FUNC_0(VAR_12, VAR_11, ("issuing probe_req, tx_len =%d\n", VAR_21->last_txcmdsz));

 if (VAR_18) {
  VAR_19 = FUNC_5(VAR_13, VAR_20);
 } else {
  FUNC_4(VAR_13, VAR_20);
  VAR_19 = VAR_9;
 }

exit:
 return VAR_19;
}
