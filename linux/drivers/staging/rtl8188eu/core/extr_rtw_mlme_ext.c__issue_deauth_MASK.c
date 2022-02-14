
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct xmit_priv {int dummy; } ;
struct pkt_attrib {int retry_ctrl; int pktlen; int last_txcmdsz; } ;
struct xmit_frame {scalar_t__ buf_addr; struct pkt_attrib attrib; } ;
struct wlan_bssid_ex {unsigned char* MacAddress; } ;
struct mlme_ext_info {struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {int mgnt_seq; struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; struct xmit_priv xmitpriv; } ;
typedef scalar_t__ __le16 ;


 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (struct ieee80211_hdr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xmit_frame* FUNC_2 (struct xmit_priv*) ;
 scalar_t__ FUNC_3 (unsigned short) ;
 int FUNC_4 (struct adapter*,struct xmit_frame*) ;
 int FUNC_5 (struct adapter*,struct xmit_frame*) ;
 int FUNC_6 (int ,unsigned char*) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 unsigned char* FUNC_8 (int *) ;
 unsigned char* FUNC_9 (unsigned char*,int ,scalar_t__*,int*) ;
 int FUNC_10 (struct adapter*,struct pkt_attrib*) ;

__attribute__((used)) static int FUNC_11(struct adapter *VAR_6, unsigned char *VAR_7,
    unsigned short VAR_8, bool VAR_9)
{
 struct xmit_frame *VAR_10;
 struct pkt_attrib *VAR_11;
 unsigned char *VAR_12;
 struct ieee80211_hdr *VAR_13;
 __le16 *VAR_14;
 struct xmit_priv *VAR_15 = &VAR_6->xmitpriv;
 struct mlme_ext_priv *VAR_16 = &VAR_6->mlmeextpriv;
 struct mlme_ext_info *VAR_17 = &VAR_16->mlmext_info;
 struct wlan_bssid_ex *VAR_18 = &VAR_17->network;
 int VAR_19 = VAR_3;
 __le16 VAR_20;

 VAR_10 = FUNC_2(VAR_15);
 if (VAR_10 == ((void*)0))
  goto exit;


 VAR_11 = &VAR_10->attrib;
 FUNC_10(VAR_6, VAR_11);
 VAR_11->retry_ctrl = 0;

 FUNC_7(VAR_10->buf_addr, 0, VAR_2 + VAR_0);

 VAR_12 = (u8 *)(VAR_10->buf_addr) + VAR_0;
 VAR_13 = (struct ieee80211_hdr *)VAR_12;

 VAR_14 = &VAR_13->frame_control;
 *(VAR_14) = 0;

 FUNC_6(VAR_13->addr1, VAR_7);
 FUNC_6(VAR_13->addr2, FUNC_8(&VAR_6->eeprompriv));
 FUNC_6(VAR_13->addr3, VAR_18->MacAddress);

 FUNC_1(VAR_13, VAR_16->mgnt_seq);
 VAR_16->mgnt_seq++;
 FUNC_0(VAR_12, VAR_1);

 VAR_12 += sizeof(struct ieee80211_hdr_3addr);
 VAR_11->pktlen = sizeof(struct ieee80211_hdr_3addr);

 VAR_20 = FUNC_3(VAR_8);
 VAR_12 = FUNC_9(VAR_12, VAR_4, &VAR_20,
      &VAR_11->pktlen);

 VAR_11->last_txcmdsz = VAR_11->pktlen;

 if (VAR_9) {
  VAR_19 = FUNC_5(VAR_6, VAR_10);
 } else {
  FUNC_4(VAR_6, VAR_10);
  VAR_19 = VAR_5;
 }

exit:
 return VAR_19;
}
