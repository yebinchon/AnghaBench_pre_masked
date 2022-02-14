
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct statistics_tx {scalar_t__ temperature; } ;
struct statistics_rx_phy {scalar_t__ temperature; } ;
struct statistics_rx_non_phy {scalar_t__ temperature; } ;
struct statistics_rx_ht_phy {scalar_t__ temperature; } ;
struct statistics_general_common {scalar_t__ temperature; } ;
struct statistics_bt_activity {scalar_t__ temperature; } ;
struct TYPE_15__ {scalar_t__ cmd; } ;
struct iwl_rx_packet {TYPE_6__ hdr; int data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct TYPE_18__ {scalar_t__ temperature; } ;
struct TYPE_17__ {int flag; int lock; TYPE_9__ bt_activity; TYPE_9__ tx; TYPE_9__ rx_cck; TYPE_9__ rx_ofdm_ht; TYPE_9__ rx_ofdm; TYPE_9__ rx_non_phy; TYPE_9__ common; int accum_num_bt_kills; int num_bt_kills; } ;
struct iwl_priv {unsigned long rx_statistics_jiffies; TYPE_8__ statistics; TYPE_7__* lib; int run_time_calib_work; int workqueue; int status; int statistics_periodic; } ;
struct TYPE_14__ {struct statistics_tx cck; struct statistics_tx ofdm_ht; struct statistics_tx ofdm; struct statistics_tx general; } ;
struct TYPE_13__ {struct statistics_tx common; } ;
struct iwl_notif_statistics {int flag; struct statistics_tx tx; TYPE_5__ rx; TYPE_4__ general; } ;
struct TYPE_11__ {int num_bt_kills; struct statistics_tx common; } ;
struct TYPE_12__ {TYPE_2__ general; struct statistics_tx cck; struct statistics_tx ofdm_ht; struct statistics_tx ofdm; } ;
struct TYPE_10__ {struct statistics_tx activity; struct statistics_tx common; } ;
struct iwl_bt_notif_statistics {int flag; TYPE_3__ rx; TYPE_1__ general; struct statistics_tx tx; } ;
typedef int __le32 ;
struct TYPE_16__ {int (* temperature ) (struct iwl_priv*) ;} ;


 int FUNC_0 (struct iwl_priv*,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int,int,int) ;
 int FUNC_2 (struct iwl_rx_packet*) ;
 int FUNC_3 (struct iwl_priv*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*) ;
 int FUNC_4 (struct iwl_priv*,struct statistics_tx*,struct statistics_tx*,struct statistics_tx*,unsigned long) ;
 int FUNC_5 (struct iwl_priv*) ;
 unsigned long VAR_4 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_9__*,struct statistics_tx*,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int const) ;
 int FUNC_11 (int ,int *) ;
 struct iwl_rx_packet* FUNC_12 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct iwl_priv*) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(struct iwl_priv *VAR_5,
     struct iwl_rx_cmd_buffer *VAR_6)
{
 unsigned long VAR_7 = VAR_4;
 const int VAR_8 = 60;
 int VAR_9;
 struct iwl_rx_packet *VAR_10 = FUNC_12(VAR_6);
 u32 VAR_11 = FUNC_2(VAR_10);
 __le32 *VAR_12;
 struct statistics_general_common *VAR_13;
 struct statistics_rx_non_phy *VAR_14;
 struct statistics_rx_phy *VAR_15;
 struct statistics_rx_ht_phy *VAR_16;
 struct statistics_rx_phy *VAR_17;
 struct statistics_tx *VAR_18;
 struct statistics_bt_activity *VAR_19;

 FUNC_0(VAR_5, "Statistics notification received (%d bytes).\n",
       VAR_11);

 FUNC_14(&VAR_5->statistics.lock);

 if (VAR_11 == sizeof(struct iwl_bt_notif_statistics)) {
  struct iwl_bt_notif_statistics *VAR_20;
  VAR_20 = (void *)&VAR_10->data;
  VAR_12 = &VAR_20->flag;
  VAR_13 = &VAR_20->general.common;
  VAR_14 = &VAR_20->rx.general.common;
  VAR_15 = &VAR_20->rx.ofdm;
  VAR_16 = &VAR_20->rx.ofdm_ht;
  VAR_17 = &VAR_20->rx.cck;
  VAR_18 = &VAR_20->tx;
  VAR_19 = &VAR_20->general.activity;







 } else if (VAR_11 == sizeof(struct iwl_notif_statistics)) {
  struct iwl_notif_statistics *VAR_21;
  VAR_21 = (void *)&VAR_10->data;
  VAR_12 = &VAR_21->flag;
  VAR_13 = &VAR_21->general.common;
  VAR_14 = &VAR_21->rx.general;
  VAR_15 = &VAR_21->rx.ofdm;
  VAR_16 = &VAR_21->rx.ofdm_ht;
  VAR_17 = &VAR_21->rx.cck;
  VAR_18 = &VAR_21->tx;
  VAR_19 = ((void*)0);
 } else {
  FUNC_1(1, "len %d doesn't match BT (%zu) or normal (%zu)\n",
     VAR_11, sizeof(struct iwl_bt_notif_statistics),
     sizeof(struct iwl_notif_statistics));
  FUNC_15(&VAR_5->statistics.lock);
  return;
 }

 VAR_9 = VAR_13->temperature != VAR_5->statistics.common.temperature ||
   (*VAR_12 & VAR_1) !=
   (VAR_5->statistics.flag & VAR_1);

 FUNC_3(VAR_5, VAR_13, VAR_14, VAR_15,
        VAR_16, VAR_17, VAR_18, VAR_19);

 FUNC_4(VAR_5, VAR_15, VAR_16, VAR_18, VAR_7);

 VAR_5->statistics.flag = *VAR_12;
 FUNC_8(&VAR_5->statistics.common, VAR_13, sizeof(*VAR_13));
 FUNC_8(&VAR_5->statistics.rx_non_phy, VAR_14, sizeof(*VAR_14));
 FUNC_8(&VAR_5->statistics.rx_ofdm, VAR_15, sizeof(*VAR_15));
 FUNC_8(&VAR_5->statistics.rx_ofdm_ht, VAR_16, sizeof(*VAR_16));
 FUNC_8(&VAR_5->statistics.rx_cck, VAR_17, sizeof(*VAR_17));
 FUNC_8(&VAR_5->statistics.tx, VAR_18, sizeof(*VAR_18));






 VAR_5->rx_statistics_jiffies = VAR_7;

 FUNC_13(VAR_3, &VAR_5->status);





 FUNC_9(&VAR_5->statistics_periodic, VAR_4 +
    FUNC_10(VAR_8 * 1000));

 if (FUNC_18(!FUNC_17(VAR_2, &VAR_5->status)) &&
     (VAR_10->hdr.cmd == VAR_0)) {
  FUNC_5(VAR_5);
  FUNC_11(VAR_5->workqueue, &VAR_5->run_time_calib_work);
 }
 if (VAR_5->lib->temperature && VAR_9)
  VAR_5->lib->temperature(VAR_5);

 FUNC_15(&VAR_5->statistics.lock);
}
