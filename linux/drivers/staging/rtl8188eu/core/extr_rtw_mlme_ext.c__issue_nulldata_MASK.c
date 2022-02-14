
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct xmit_priv {int dummy; } ;
struct pkt_attrib {int retry_ctrl; int pktlen; int last_txcmdsz; } ;
struct xmit_frame {scalar_t__ buf_addr; struct pkt_attrib attrib; } ;
struct wlan_bssid_ex {unsigned char* MacAddress; } ;
struct mlme_ext_info {int state; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {int mgnt_seq; struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; struct xmit_priv xmitpriv; } ;
typedef scalar_t__ __le16 ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct ieee80211_hdr*,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct xmit_frame* FUNC_5 (struct xmit_priv*) ;
 int FUNC_6 (struct adapter*,struct xmit_frame*) ;
 int FUNC_7 (struct adapter*,struct xmit_frame*) ;
 int FUNC_8 (int ,unsigned char*) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 unsigned char* FUNC_10 (int *) ;
 int FUNC_11 (struct adapter*,struct pkt_attrib*) ;

__attribute__((used)) static int FUNC_12(struct adapter *VAR_7, unsigned char *VAR_8,
      unsigned int VAR_9, bool VAR_10)
{
 int VAR_11 = VAR_5;
 struct xmit_frame *VAR_12;
 struct pkt_attrib *VAR_13;
 unsigned char *VAR_14;
 struct ieee80211_hdr *VAR_15;
 __le16 *VAR_16;
 struct xmit_priv *VAR_17;
 struct mlme_ext_priv *VAR_18;
 struct mlme_ext_info *VAR_19;
 struct wlan_bssid_ex *VAR_20;

 if (!VAR_7)
  goto exit;

 VAR_17 = &VAR_7->xmitpriv;
 VAR_18 = &VAR_7->mlmeextpriv;
 VAR_19 = &VAR_18->mlmext_info;
 VAR_20 = &VAR_19->network;

 VAR_12 = FUNC_5(VAR_17);
 if (!VAR_12)
  goto exit;


 VAR_13 = &VAR_12->attrib;
 FUNC_11(VAR_7, VAR_13);
 VAR_13->retry_ctrl = 0;

 FUNC_9(VAR_12->buf_addr, 0, VAR_4 + VAR_0);

 VAR_14 = (u8 *)(VAR_12->buf_addr) + VAR_0;
 VAR_15 = (struct ieee80211_hdr *)VAR_14;

 VAR_16 = &VAR_15->frame_control;
 *(VAR_16) = 0;

 if ((VAR_19->state & 0x03) == VAR_2)
  FUNC_0(VAR_16);
 else if ((VAR_19->state & 0x03) == VAR_3)
  FUNC_4(VAR_16);

 if (VAR_9)
  FUNC_2(VAR_16);

 FUNC_8(VAR_15->addr1, VAR_8);
 FUNC_8(VAR_15->addr2, FUNC_10(&VAR_7->eeprompriv));
 FUNC_8(VAR_15->addr3, VAR_20->MacAddress);

 FUNC_3(VAR_15, VAR_18->mgnt_seq);
 VAR_18->mgnt_seq++;
 FUNC_1(VAR_14, VAR_1);

 VAR_14 += sizeof(struct ieee80211_hdr_3addr);
 VAR_13->pktlen = sizeof(struct ieee80211_hdr_3addr);

 VAR_13->last_txcmdsz = VAR_13->pktlen;

 if (VAR_10) {
  VAR_11 = FUNC_7(VAR_7, VAR_12);
 } else {
  FUNC_6(VAR_7, VAR_12);
  VAR_11 = VAR_6;
 }

exit:
 return VAR_11;
}
