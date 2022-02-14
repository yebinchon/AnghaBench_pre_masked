
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct xmit_priv {int dummy; } ;
struct pkt_attrib {int retry_ctrl; int pktlen; int last_txcmdsz; } ;
struct xmit_frame {scalar_t__ buf_addr; struct pkt_attrib attrib; } ;
struct mlme_ext_info {int network; } ;
struct mlme_ext_priv {int mgnt_seq; struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; struct xmit_priv xmitpriv; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (struct ieee80211_hdr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct xmit_frame* FUNC_2 (struct xmit_priv*) ;
 scalar_t__ FUNC_3 (unsigned short) ;
 int FUNC_4 (struct adapter*,struct xmit_frame*) ;
 int FUNC_5 (struct adapter*,struct xmit_frame*) ;
 unsigned char* FUNC_6 (int *) ;
 int FUNC_7 (int ,unsigned char*,int ) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 unsigned char* FUNC_9 (int *) ;
 unsigned char* FUNC_10 (unsigned char*,int ,unsigned char*,int*) ;
 int FUNC_11 (struct adapter*,struct pkt_attrib*) ;

__attribute__((used)) static int FUNC_12(struct adapter *VAR_7, unsigned char *VAR_8,
    unsigned short VAR_9, bool VAR_10)
{
 struct xmit_frame *VAR_11;
 struct pkt_attrib *VAR_12;
 unsigned char *VAR_13;
 struct ieee80211_hdr *VAR_14;
 __le16 *VAR_15;
 struct xmit_priv *VAR_16 = &(VAR_7->xmitpriv);
 struct mlme_ext_priv *VAR_17 = &(VAR_7->mlmeextpriv);
 struct mlme_ext_info *VAR_18 = &(VAR_17->mlmext_info);
 int VAR_19 = VAR_4;
 __le16 VAR_20;



 VAR_11 = FUNC_2(VAR_16);
 if (VAR_11 == ((void*)0)) {
  goto exit;
 }


 VAR_12 = &VAR_11->attrib;
 FUNC_11(VAR_7, VAR_12);
 VAR_12->retry_ctrl = 0;

 FUNC_8(VAR_11->buf_addr, 0, VAR_3 + VAR_1);

 VAR_13 = (u8 *)(VAR_11->buf_addr) + VAR_1;
 VAR_14 = (struct ieee80211_hdr *)VAR_13;

 VAR_15 = &(VAR_14->frame_control);
 *(VAR_15) = 0;

 FUNC_7(VAR_14->addr1, VAR_8, VAR_0);
 FUNC_7(VAR_14->addr2, FUNC_9(&(VAR_7->eeprompriv)), VAR_0);
 FUNC_7(VAR_14->addr3, FUNC_6(&(VAR_18->network)), VAR_0);

 FUNC_1(VAR_14, VAR_17->mgnt_seq);
 VAR_17->mgnt_seq++;
 FUNC_0(VAR_13, VAR_2);

 VAR_13 += sizeof(struct ieee80211_hdr_3addr);
 VAR_12->pktlen = sizeof(struct ieee80211_hdr_3addr);

 VAR_20 = FUNC_3(VAR_9);
 VAR_13 = FUNC_10(VAR_13, VAR_5, (unsigned char *)&VAR_20, &(VAR_12->pktlen));

 VAR_12->last_txcmdsz = VAR_12->pktlen;


 if (VAR_10) {
  VAR_19 = FUNC_5(VAR_7, VAR_11);
 } else {
  FUNC_4(VAR_7, VAR_11);
  VAR_19 = VAR_6;
 }

exit:
 return VAR_19;
}
