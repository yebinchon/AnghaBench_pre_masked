
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {char* dst; char* src; char* bssid; char* ra; char* ta; } ;
struct TYPE_3__ {char* rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef char u8 ;
struct sta_priv {int dummy; } ;
struct sta_info {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct adapter {int eeprompriv; struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;
typedef scalar_t__ sint ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct mlme_priv*,int ) ;
 char* FUNC_6 (struct mlme_priv*) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*,char*,int ) ;
 char* FUNC_9 (int *) ;
 struct sta_info* FUNC_10 (struct adapter*) ;
 struct sta_info* FUNC_11 (struct sta_priv*,char*) ;

sint FUNC_12(
 struct adapter *VAR_10,
 union recv_frame *VAR_11,
 struct sta_info **VAR_12
)
{
 u8 *VAR_13 = VAR_11->u.hdr.rx_data;
 sint VAR_14 = VAR_7;
 struct rx_pkt_attrib *VAR_15 = &VAR_11->u.hdr.attrib;
 struct sta_priv *VAR_16 = &VAR_10->stapriv;
 struct mlme_priv *VAR_17 = &VAR_10->mlmepriv;
 u8 *VAR_18 = FUNC_6(VAR_17);
 u8 *VAR_19 = FUNC_9(&VAR_10->eeprompriv);
 u8 *VAR_20 = ((void*)0);
 sint VAR_21 = FUNC_3(VAR_15->dst);



 if ((FUNC_5(VAR_17, VAR_2) == 1) ||
  (FUNC_5(VAR_17, VAR_1) == 1)) {


  if (!FUNC_7(VAR_19, VAR_15->src, VAR_0)) {
   FUNC_4(VAR_9, VAR_8, (" SA ==myself\n"));
   VAR_14 = VAR_6;
   goto exit;
  }

  if ((FUNC_7(VAR_19, VAR_15->dst, VAR_0)) && (!VAR_21)) {
   VAR_14 = VAR_6;
   goto exit;
  }

  if (!FUNC_7(VAR_15->bssid, "\x0\x0\x0\x0\x0\x0", VAR_0) ||
     !FUNC_7(VAR_18, "\x0\x0\x0\x0\x0\x0", VAR_0) ||
     (FUNC_7(VAR_15->bssid, VAR_18, VAR_0))) {
   VAR_14 = VAR_6;
   goto exit;
  }

  VAR_20 = VAR_15->src;

 } else if (FUNC_5(VAR_17, VAR_5) == 1) {

  if (FUNC_7(VAR_15->bssid, VAR_15->src, VAR_0)) {
   FUNC_4(VAR_9, VAR_8, ("bssid != TA under STATION_MODE; drop pkt\n"));
   VAR_14 = VAR_6;
   goto exit;
  }

  VAR_20 = VAR_15->bssid;
 } else if (FUNC_5(VAR_17, VAR_3) == 1) {
  if (VAR_21) {

   if (!FUNC_3(VAR_15->bssid)) {
     VAR_14 = VAR_6;
     goto exit;
   }
  } else {

   if (FUNC_7(VAR_15->bssid, VAR_15->dst, VAR_0)) {
    VAR_14 = VAR_6;
    goto exit;
   }

   VAR_20 = VAR_15->src;
  }

 } else if (FUNC_5(VAR_17, VAR_4) == 1) {
  FUNC_8(VAR_15->dst, FUNC_0(VAR_13), VAR_0);
  FUNC_8(VAR_15->src, FUNC_1(VAR_13), VAR_0);
  FUNC_8(VAR_15->bssid, FUNC_2(VAR_13), VAR_0);
  FUNC_8(VAR_15->ra, VAR_15->dst, VAR_0);
  FUNC_8(VAR_15->ta, VAR_15->src, VAR_0);

  VAR_20 = VAR_18;
 } else
  VAR_14 = VAR_6;



 if (VAR_21)
  *VAR_12 = FUNC_10(VAR_10);
 else
  *VAR_12 = FUNC_11(VAR_16, VAR_20);

 if (!*VAR_12) {
  FUNC_4(VAR_9, VAR_8, ("can't get psta under sta2sta_data_frame ; drop pkt\n"));
  VAR_14 = VAR_6;
  goto exit;
 }

exit:
 return VAR_14;
}
