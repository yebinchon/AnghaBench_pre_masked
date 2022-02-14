
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rx_pkt_attrib {int pkt_len; } ;
struct TYPE_5__ {scalar_t__ rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int uint ;
typedef unsigned char u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct mlme_ext_priv {scalar_t__ mgnt_80211w_IPN_rx; } ;
struct ieee80211_hdr {unsigned char frame_control; unsigned char* addr1; } ;
struct TYPE_8__ {size_t dot11wBIPKeyid; TYPE_3__* dot11wBIPKey; } ;
struct adapter {TYPE_4__ securitypriv; struct mlme_ext_priv mlmeextpriv; } ;
typedef unsigned char __le64 ;
typedef unsigned char __le16 ;
struct TYPE_7__ {int skey; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (unsigned char*) ;
 size_t FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 int FUNC_9 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_10 (int ,unsigned char*,int,unsigned char*) ;
 unsigned char* FUNC_11 (unsigned char*,int ,int*,int) ;
 unsigned char* FUNC_12 (int) ;

u32 FUNC_13(struct adapter *VAR_6, u8 *VAR_7)
{
 struct rx_pkt_attrib *VAR_8 = &((union recv_frame *)VAR_7)->u.hdr.attrib;
 u8 *VAR_9;
 u8 *VAR_10, *VAR_11;
 u32 VAR_12 = VAR_3;
 uint VAR_13, VAR_14;
 struct ieee80211_hdr *VAR_15;
 u8 VAR_16[16];
 struct mlme_ext_priv *VAR_17 = &VAR_6->mlmeextpriv;
 __le16 VAR_18;
 __le64 VAR_19;

 VAR_14 = VAR_8->pkt_len-VAR_2+VAR_0;
 VAR_10 = FUNC_12(VAR_14);

 if (VAR_10 == ((void*)0)) {
  FUNC_3("BIP AAD allocate fail\n");
  return VAR_3;
 }

 VAR_9 = (unsigned char *)((union recv_frame *)VAR_7)->u.hdr.rx_data;

 VAR_15 = (struct ieee80211_hdr *)VAR_9;

 FUNC_8(VAR_10+VAR_0, VAR_9+VAR_2, VAR_8->pkt_len-VAR_2);

 VAR_11 = FUNC_11(VAR_10+VAR_0, VAR_4, &VAR_13, VAR_8->pkt_len-VAR_2);

 if (VAR_11) {
  u16 VAR_20 = 0;
  u64 VAR_21 = 0;

  FUNC_8(&VAR_19, VAR_11+4, 6);
  VAR_21 = FUNC_6(VAR_19);

  if (VAR_21 <= VAR_17->mgnt_80211w_IPN_rx) {
   FUNC_3("replay BIP packet\n");
   goto BIP_exit;
  }

  FUNC_8(&VAR_18, VAR_11+2, 2);
  VAR_20 = FUNC_5(VAR_18);
  if (VAR_20 != VAR_6->securitypriv.dot11wBIPKeyid) {
   FUNC_3("BIP key index error!\n");
   goto BIP_exit;
  }

  FUNC_9(VAR_11+2+VAR_13-8, 0, 8);


  FUNC_8(VAR_10, &VAR_15->frame_control, 2);
  FUNC_2(VAR_10);
  FUNC_1(VAR_10);
  FUNC_0(VAR_10);

  FUNC_8(VAR_10+2, VAR_15->addr1, 18);

  if (FUNC_10(VAR_6->securitypriv.dot11wBIPKey[VAR_6->securitypriv.dot11wBIPKeyid].skey
   , VAR_10, VAR_14, VAR_16))
   goto BIP_exit;


  if (!FUNC_7(VAR_16, VAR_9+VAR_8->pkt_len-8, 8)) {
   VAR_17->mgnt_80211w_IPN_rx = VAR_21;
   VAR_12 = VAR_5;
  } else
   FUNC_3("BIP MIC error!\n");

 } else
  VAR_12 = VAR_1;
BIP_exit:

 FUNC_4(VAR_10);
 return VAR_12;
}
