
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {int * bssid; int * src; int * ta; int * dst; int * ra; } ;
struct TYPE_3__ {struct rx_pkt_attrib attrib; int * rx_data; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
struct sta_priv {int dummy; } ;
struct sta_info {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct _adapter {int eeprompriv; struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;
typedef int sint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct mlme_priv*,int ) ;
 int * FUNC_6 (struct mlme_priv*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int *,int ) ;
 int * FUNC_11 (int *) ;
 struct sta_info* FUNC_12 (struct _adapter*) ;
 struct sta_info* FUNC_13 (struct sta_priv*,int *) ;

__attribute__((used)) static sint FUNC_14(struct _adapter *VAR_8,
         union recv_frame *VAR_9,
         struct sta_info **VAR_10)
{
 u8 *VAR_11 = VAR_9->u.hdr.rx_data;
 struct rx_pkt_attrib *VAR_12 = &VAR_9->u.hdr.attrib;
 struct sta_priv *VAR_13 = &VAR_8->stapriv;
 struct mlme_priv *VAR_14 = &VAR_8->mlmepriv;
 u8 *VAR_15 = FUNC_6(VAR_14);
 u8 *VAR_16 = FUNC_11(&VAR_8->eeprompriv);
 bool VAR_17 = FUNC_7(VAR_12->dst);

 if (FUNC_5(VAR_14, VAR_4) &&
     FUNC_5(VAR_14, VAR_6)) {

  if ((FUNC_4(VAR_11)) == VAR_1)
   return VAR_5;



  if ((FUNC_4(VAR_11) & VAR_3) ==
       VAR_3) {
   if (FUNC_4(VAR_11) & (FUNC_0(4) | FUNC_0(5) | FUNC_0(6)))
    return VAR_5;
  }


  if (!FUNC_9(VAR_16, VAR_12->src, VAR_0))
   return VAR_5;


  if ((FUNC_9(VAR_16, VAR_12->dst, VAR_0)) && (!VAR_17))
   return VAR_5;

  if (FUNC_8(VAR_12->bssid) ||
       FUNC_8(VAR_15) ||
       (FUNC_9(VAR_12->bssid, VAR_15, VAR_0)))
   return VAR_5;
  if (VAR_17)
   *VAR_10 = FUNC_12(VAR_8);
  else
   *VAR_10 = FUNC_13(VAR_13, VAR_12->bssid);
  if (*VAR_10 == ((void*)0))
   return VAR_5;
 } else if (FUNC_5(VAR_14, VAR_2) &&
     FUNC_5(VAR_14, VAR_6)) {
  FUNC_10(VAR_12->dst, FUNC_1(VAR_11), VAR_0);
  FUNC_10(VAR_12->src, FUNC_2(VAR_11), VAR_0);
  FUNC_10(VAR_12->bssid, FUNC_3(VAR_11), VAR_0);
  FUNC_10(VAR_12->ra, VAR_12->dst, VAR_0);
  FUNC_10(VAR_12->ta, VAR_12->src, VAR_0);
  FUNC_10(VAR_12->bssid, VAR_15, VAR_0);
  *VAR_10 = FUNC_13(VAR_13, VAR_12->bssid);
  if (*VAR_10 == ((void*)0))
   return VAR_5;
 } else {
  return VAR_5;
 }
 return VAR_7;
}
