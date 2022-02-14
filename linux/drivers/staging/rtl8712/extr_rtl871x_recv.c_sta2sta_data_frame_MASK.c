
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rx_pkt_attrib {int * src; int * ta; int * dst; int * ra; int * bssid; } ;
struct TYPE_4__ {struct rx_pkt_attrib attrib; int * rx_data; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
struct sta_priv {int dummy; } ;
struct sta_info {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct TYPE_6__ {int rx_pktloss; } ;
struct _adapter {TYPE_3__ mppriv; int eeprompriv; struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;
typedef int sint ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct mlme_priv*,int ) ;
 int * FUNC_4 (struct mlme_priv*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int * FUNC_9 (int *) ;
 struct sta_info* FUNC_10 (struct _adapter*) ;
 struct sta_info* FUNC_11 (struct sta_priv*,int *) ;

__attribute__((used)) static sint FUNC_12(struct _adapter *VAR_8,
          union recv_frame *VAR_9,
          struct sta_info **VAR_10)
{
 u8 *VAR_11 = VAR_9->u.hdr.rx_data;
 sint VAR_12 = VAR_7;
 struct rx_pkt_attrib *VAR_13 = &VAR_9->u.hdr.attrib;
 struct sta_priv *VAR_14 = &VAR_8->stapriv;
 struct mlme_priv *VAR_15 = &VAR_8->mlmepriv;
 u8 *VAR_16 = FUNC_4(VAR_15);
 u8 *VAR_17 = FUNC_9(&VAR_8->eeprompriv);
 u8 *VAR_18 = ((void*)0);
 bool VAR_19 = FUNC_5(VAR_13->dst);

 if (FUNC_3(VAR_15, VAR_2) ||
     FUNC_3(VAR_15, VAR_1)) {

  if (!FUNC_7(VAR_17, VAR_13->src, VAR_0))
   return VAR_6;
  if ((FUNC_7(VAR_17, VAR_13->dst, VAR_0)) && (!VAR_19))
   return VAR_6;
  if (FUNC_6(VAR_13->bssid) ||
      FUNC_6(VAR_16) ||
      (FUNC_7(VAR_13->bssid, VAR_16, VAR_0)))
   return VAR_6;
  VAR_18 = VAR_13->src;
 } else if (FUNC_3(VAR_15, VAR_5)) {



  if (FUNC_7(VAR_13->bssid, VAR_13->src, VAR_0))
   return VAR_6;
  VAR_18 = VAR_13->bssid;
 } else if (FUNC_3(VAR_15, VAR_3)) {
  if (VAR_19) {



   if (!FUNC_5(VAR_13->bssid))
    return VAR_6;
  } else {



   if (FUNC_7(VAR_13->bssid, VAR_13->dst, VAR_0))
    return VAR_6;
   VAR_18 = VAR_13->src;
  }
 } else if (FUNC_3(VAR_15, VAR_4)) {
  FUNC_8(VAR_13->dst, FUNC_0(VAR_11), VAR_0);
  FUNC_8(VAR_13->src, FUNC_1(VAR_11), VAR_0);
  FUNC_8(VAR_13->bssid, FUNC_2(VAR_11), VAR_0);
  FUNC_8(VAR_13->ra, VAR_13->dst, VAR_0);
  FUNC_8(VAR_13->ta, VAR_13->src, VAR_0);
  VAR_18 = VAR_16;
 } else {
  VAR_12 = VAR_6;
 }
 if (VAR_19)
  *VAR_10 = FUNC_10(VAR_8);
 else
  *VAR_10 = FUNC_11(VAR_14, VAR_18);
 if (*VAR_10 == ((void*)0)) {
  if (FUNC_3(VAR_15, VAR_4))
   VAR_8->mppriv.rx_pktloss++;
  return VAR_6;
 }
 return VAR_12;
}
