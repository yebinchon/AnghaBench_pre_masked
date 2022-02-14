
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sta_priv {int dummy; } ;
struct sta_info {int mac_id; } ;
struct rx_pkt_attrib {int mcs_rate; int crc_err; int icv_err; int phy_info; } ;
struct recv_frame {struct sta_info* psta; TYPE_1__* pkt; struct rx_pkt_attrib attrib; struct adapter* adapter; } ;
struct phy_stat {int dummy; } ;
struct odm_phy_status_info {int dummy; } ;
struct odm_per_pkt_info {int bPacketMatchBSSID; int bPacketToSelf; int bPacketBeacon; int StationID; int Rate; } ;
struct TYPE_8__ {int * MacAddress; } ;
struct TYPE_9__ {TYPE_2__ network; } ;
struct TYPE_11__ {TYPE_3__ cur_network; } ;
struct adapter {TYPE_5__ mlmepriv; TYPE_4__* HalData; struct sta_priv stapriv; int eeprompriv; } ;
struct TYPE_10__ {int odmpriv; } ;
struct TYPE_7__ {int * data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct odm_phy_status_info*,int *,struct odm_per_pkt_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct adapter*,struct recv_frame*) ;
 struct sta_info* FUNC_11 (struct sta_priv*,int *) ;

void FUNC_12(struct recv_frame *VAR_6,
      struct phy_stat *VAR_7)
{
 struct adapter *VAR_8 = VAR_6->adapter;
 struct rx_pkt_attrib *VAR_9 = &VAR_6->attrib;
 struct odm_phy_status_info *VAR_10 = (struct odm_phy_status_info *)(&VAR_9->phy_info);
 u8 *VAR_11;
 struct odm_per_pkt_info VAR_12;
 u8 *VAR_13 = ((void*)0);
 struct sta_priv *VAR_14;
 struct sta_info *VAR_15;

 VAR_12.bPacketMatchBSSID = 0;
 VAR_12.bPacketToSelf = 0;
 VAR_12.bPacketBeacon = 0;

 VAR_11 = VAR_6->pkt->data;

 VAR_12.bPacketMatchBSSID = ((!FUNC_1(VAR_11)) &&
  !VAR_9->icv_err && !VAR_9->crc_err &&
  !FUNC_8(FUNC_6(VAR_11),
   FUNC_4(&VAR_8->mlmepriv), VAR_0));

 VAR_12.bPacketToSelf = VAR_12.bPacketMatchBSSID &&
     (!FUNC_8(FUNC_5(VAR_11),
      FUNC_9(&VAR_8->eeprompriv), VAR_0));

 VAR_12.bPacketBeacon = VAR_12.bPacketMatchBSSID &&
     (FUNC_0(VAR_11) == VAR_4);

 if (VAR_12.bPacketBeacon) {
  if (FUNC_3(&VAR_8->mlmepriv, VAR_5))
   VAR_13 = VAR_8->mlmepriv.cur_network.network.MacAddress;

 } else {
  VAR_13 = FUNC_7(VAR_11);
 }

 VAR_14 = &VAR_8->stapriv;
 VAR_12.StationID = 0xFF;
 VAR_15 = FUNC_11(VAR_14, VAR_13);
 if (VAR_15)
  VAR_12.StationID = VAR_15->mac_id;
 VAR_12.Rate = VAR_9->mcs_rate;

 FUNC_2(&VAR_8->HalData->odmpriv, VAR_10,
      (u8 *)VAR_7, &(VAR_12));

 VAR_6->psta = ((void*)0);
 if (VAR_12.bPacketMatchBSSID &&
     (FUNC_3(&VAR_8->mlmepriv, VAR_3))) {
  if (VAR_15) {
   VAR_6->psta = VAR_15;
   FUNC_10(VAR_8, VAR_6);
  }
 } else if (VAR_12.bPacketToSelf || VAR_12.bPacketBeacon) {
  if (FUNC_3(&VAR_8->mlmepriv, VAR_2|VAR_1)) {
   if (VAR_15)
    VAR_6->psta = VAR_15;
  }
  FUNC_10(VAR_8, VAR_6);
 }
}
