
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int RecvSignalPower; } ;
struct rx_pkt_attrib {int data_rate; TYPE_1__ phy_info; int crc_err; int icv_err; } ;
struct TYPE_5__ {struct sta_info* psta; struct rx_pkt_attrib attrib; struct adapter* adapter; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
union recv_frame {TYPE_3__ u; } ;
typedef int u8 ;
typedef int u32 ;
struct sta_priv {int dummy; } ;
struct sta_info {int mac_id; int rssi; } ;
struct phy_stat {int dummy; } ;
struct odm_phy_info {int dummy; } ;
struct odm_packet_info {int data_rate; int station_id; int bssid_match; int to_self; int is_beacon; } ;
struct hal_com_data {int odmpriv; } ;
struct adapter {int mlmepriv; struct sta_priv stapriv; int eeprompriv; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct odm_phy_info*,int *,struct odm_packet_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (union recv_frame*) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (struct adapter*,union recv_frame*) ;
 struct sta_info* FUNC_13 (struct sta_priv*,int *) ;

__attribute__((used)) static void FUNC_14(union recv_frame *VAR_4,
         struct phy_stat *VAR_5)
{
 struct adapter *VAR_6 = VAR_4->u.hdr.adapter;
 struct rx_pkt_attrib *VAR_7 = &VAR_4->u.hdr.attrib;
 struct hal_com_data *VAR_8 = FUNC_0(VAR_6);
 struct odm_phy_info *VAR_9 =
  (struct odm_phy_info *)(&VAR_7->phy_info);

 u8 *VAR_10;
 u8 *VAR_11;
 u8 *VAR_12;
 u8 *VAR_13;
 u8 *VAR_14;
 u8 *VAR_15 = ((void*)0);

 struct odm_packet_info VAR_16 = {
  .data_rate = 0x00,
  .station_id = 0x00,
  .bssid_match = 0,
  .to_self = 0,
  .is_beacon = 0,
 };


 struct sta_priv *VAR_17;
 struct sta_info *VAR_18;

 VAR_10 = FUNC_9(VAR_4);
 VAR_11 = FUNC_6(&VAR_6->mlmepriv);
 VAR_12 = FUNC_7(VAR_10);
 VAR_16.bssid_match = ((!FUNC_2(VAR_10)) &&
    !VAR_7->icv_err && !VAR_7->crc_err &&
    FUNC_5(VAR_12, VAR_11));

 VAR_13 = FUNC_8(VAR_10);
 VAR_14 = FUNC_11(&VAR_6->eeprompriv);
 VAR_16.to_self = VAR_16.bssid_match &&
  FUNC_5(VAR_13, VAR_14);


 VAR_16.is_beacon = VAR_16.bssid_match &&
  (FUNC_1(VAR_10) == VAR_3);

 VAR_15 = FUNC_10(VAR_10);

 VAR_16.station_id = 0xFF;

 VAR_17 = &VAR_6->stapriv;
 VAR_18 = FUNC_13(VAR_17, VAR_15);
 if (VAR_18) {
  VAR_16.station_id = VAR_18->mac_id;


 }
 VAR_16.data_rate = VAR_7->data_rate;



 FUNC_3(&VAR_8->odmpriv, VAR_9,
      (u8 *)VAR_5, &(VAR_16));
 if (VAR_18)
  VAR_18->rssi = VAR_7->phy_info.RecvSignalPower;

 VAR_4->u.hdr.psta = ((void*)0);
 if (
  VAR_16.bssid_match &&
  (FUNC_4(&VAR_6->mlmepriv, VAR_2) == 1)
 ) {
  if (VAR_18) {
   VAR_4->u.hdr.psta = VAR_18;
   FUNC_12(VAR_6, VAR_4);
  }
 } else if (VAR_16.to_self || VAR_16.is_beacon) {
  u32 VAR_19 = VAR_1 | VAR_0;
  if (FUNC_4(&VAR_6->mlmepriv, VAR_19))
   if (VAR_18)
    VAR_4->u.hdr.psta = VAR_18;
  FUNC_12(VAR_6, VAR_4);
 }
}
