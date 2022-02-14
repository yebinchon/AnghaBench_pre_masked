
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct xmit_priv {int dummy; } ;
struct pkt_attrib {int retry_ctrl; int pktlen; int last_txcmdsz; } ;
struct xmit_frame {scalar_t__ buf_addr; struct pkt_attrib attrib; } ;
struct mlme_ext_info {int state; int network; } ;
struct mlme_ext_priv {int mgnt_seq; struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; struct xmit_priv xmitpriv; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct ieee80211_hdr*,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct xmit_frame* FUNC_5 (struct xmit_priv*) ;
 int FUNC_6 (struct adapter*,struct xmit_frame*) ;
 int FUNC_7 (struct adapter*,struct xmit_frame*) ;
 unsigned char* FUNC_8 (int *) ;
 int FUNC_9 (int ,unsigned char*,int ) ;
 int FUNC_10 (scalar_t__,int ,int) ;
 unsigned char* FUNC_11 (int *) ;
 int FUNC_12 (struct adapter*,struct pkt_attrib*) ;

__attribute__((used)) static int FUNC_13(struct adapter *VAR_8, unsigned char *VAR_9,
      unsigned int VAR_10, bool VAR_11)
{
 int VAR_12 = VAR_6;
 struct xmit_frame *VAR_13;
 struct pkt_attrib *VAR_14;
 unsigned char *VAR_15;
 struct ieee80211_hdr *VAR_16;
 __le16 *VAR_17;
 struct xmit_priv *VAR_18;
 struct mlme_ext_priv *VAR_19;
 struct mlme_ext_info *VAR_20;



 if (!VAR_8)
  goto exit;

 VAR_18 = &(VAR_8->xmitpriv);
 VAR_19 = &(VAR_8->mlmeextpriv);
 VAR_20 = &(VAR_19->mlmext_info);

 VAR_13 = FUNC_5(VAR_18);
 if (VAR_13 == ((void*)0))
  goto exit;


 VAR_14 = &VAR_13->attrib;
 FUNC_12(VAR_8, VAR_14);
 VAR_14->retry_ctrl = 0;

 FUNC_10(VAR_13->buf_addr, 0, VAR_5 + VAR_1);

 VAR_15 = (u8 *)(VAR_13->buf_addr) + VAR_1;
 VAR_16 = (struct ieee80211_hdr *)VAR_15;

 VAR_17 = &(VAR_16->frame_control);
 *(VAR_17) = 0;

 if ((VAR_20->state&0x03) == VAR_3)
  FUNC_0(VAR_17);
 else if ((VAR_20->state&0x03) == VAR_4)
  FUNC_4(VAR_17);

 if (VAR_10)
  FUNC_2(VAR_17);

 FUNC_9(VAR_16->addr1, VAR_9, VAR_0);
 FUNC_9(VAR_16->addr2, FUNC_11(&(VAR_8->eeprompriv)), VAR_0);
 FUNC_9(VAR_16->addr3, FUNC_8(&(VAR_20->network)), VAR_0);

 FUNC_3(VAR_16, VAR_19->mgnt_seq);
 VAR_19->mgnt_seq++;
 FUNC_1(VAR_15, VAR_2);

 VAR_15 += sizeof(struct ieee80211_hdr_3addr);
 VAR_14->pktlen = sizeof(struct ieee80211_hdr_3addr);

 VAR_14->last_txcmdsz = VAR_14->pktlen;

 if (VAR_11) {
  VAR_12 = FUNC_7(VAR_8, VAR_13);
 } else {
  FUNC_6(VAR_8, VAR_13);
  VAR_12 = VAR_7;
 }

exit:
 return VAR_12;
}
