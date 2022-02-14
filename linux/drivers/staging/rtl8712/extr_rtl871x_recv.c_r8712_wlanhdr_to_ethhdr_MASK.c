
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {int hdrlen; int iv_len; int * src; int * dst; int icv_len; scalar_t__ encrypt; } ;
struct TYPE_3__ {scalar_t__ len; struct rx_pkt_attrib attrib; struct _adapter* adapter; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct mlme_priv {int dummy; } ;
typedef int ieee80211_snap_hdr ;
struct ethhdr {int dummy; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;
typedef int sint ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int* FUNC_1 (union recv_frame*) ;
 int * FUNC_2 (union recv_frame*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int*,void*,int) ;
 int FUNC_5 (int*,int *,int) ;
 int* FUNC_6 (union recv_frame*,int) ;
 int FUNC_7 (union recv_frame*,int ) ;
 scalar_t__ VAR_7 ;

int FUNC_8(union recv_frame *VAR_8)
{

 sint VAR_9;
 u16 VAR_10;
 u8 VAR_11;
 u8 *VAR_12;
 struct ieee80211_snap_hdr *VAR_13;
 struct _adapter *VAR_14 = VAR_8->u.hdr.adapter;
 struct mlme_priv *VAR_15 = &VAR_14->mlmepriv;

 u8 *VAR_16 = FUNC_1(VAR_8);
 struct rx_pkt_attrib *VAR_17 = &VAR_8->u.hdr.attrib;

 if (VAR_17->encrypt)
  FUNC_7(VAR_8, VAR_17->icv_len);
 VAR_13 = (struct ieee80211_snap_hdr *)(VAR_16 + VAR_17->hdrlen +
   VAR_17->iv_len);
 VAR_12 = VAR_16 + VAR_17->hdrlen + VAR_17->iv_len + VAR_4;

 if ((!FUNC_4(VAR_13, (void *)VAR_7, VAR_4) &&
     (FUNC_4(VAR_12, (void *)VAR_3, 2)) &&
     (FUNC_4(VAR_12, (void *)VAR_2, 2))) ||
      !FUNC_4(VAR_13, (void *)VAR_6, VAR_4)) {



  VAR_11 = 1;
 } else {

  VAR_11 = 0;
 }
 VAR_9 = VAR_17->hdrlen + VAR_17->iv_len +
    (VAR_11 ? VAR_4 : 0);
 VAR_10 = VAR_8->u.hdr.len - VAR_9;
 if (FUNC_0(VAR_15, VAR_5)) {
  VAR_16 += VAR_9;
  *VAR_16 = 0x87;
  *(VAR_16 + 1) = 0x12;

  VAR_16 = FUNC_6(VAR_8, (VAR_9 -
        sizeof(struct ethhdr) + 2) - 24);
  if (!VAR_16)
   return -VAR_0;
  FUNC_5(VAR_16, FUNC_2(VAR_8), 24);
  VAR_16 += 24;
 } else {
  VAR_16 = FUNC_6(VAR_8, (VAR_9 -
        sizeof(struct ethhdr) + (VAR_11 ? 2 : 0)));
  if (!VAR_16)
   return -VAR_0;
 }

 FUNC_5(VAR_16, VAR_17->dst, VAR_1);
 FUNC_5(VAR_16 + VAR_1, VAR_17->src, VAR_1);
 if (!VAR_11) {
  __be16 VAR_18 = FUNC_3(VAR_10);

  FUNC_5(VAR_16 + 12, &VAR_18, 2);
 }
 return 0;
}
