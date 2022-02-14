
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct htt_tx_done {void* status; void* msdu_id; void* ack_rssi; } ;
struct TYPE_4__ {int num_msdus; int flags2; int * msdus; int flags; } ;
struct htt_resp {TYPE_2__ data_tx_completion; } ;
struct htt_data_tx_ppdu_dur {int tx_duration; int info0; } ;
struct htt_data_tx_compl_ppdu_dur {struct htt_data_tx_ppdu_dur* ppdu_dur; int info0; } ;
struct ath10k_peer {int sta; } ;
struct ath10k_htt {int txdone_fifo; } ;
struct TYPE_3__ {scalar_t__ dev_type; } ;
struct ath10k {int data_lock; TYPE_1__ bus_param; int hw_params; struct ath10k_htt htt; } ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,int ,char*,int) ;
 int FUNC_5 (int *,struct htt_resp*) ;
 struct ath10k_peer* FUNC_6 (struct ath10k*,int) ;
 int FUNC_7 (int *,struct htt_resp*) ;
 int FUNC_8 (struct ath10k_htt*,struct htt_tx_done*) ;
 int FUNC_9 (struct ath10k*,char*,int,...) ;
 int FUNC_10 (int ,int,int ,int ) ;
 int FUNC_11 (int *,struct htt_tx_done) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct ath10k *VAR_12,
           struct sk_buff *VAR_13)
{
 struct ath10k_htt *VAR_14 = &VAR_12->htt;
 struct htt_resp *VAR_15 = (struct htt_resp *)VAR_13->data;
 struct htt_tx_done VAR_16 = {};
 int VAR_17 = FUNC_1(VAR_15->data_tx_completion.flags, VAR_2);
 __le16 VAR_18, *VAR_19;
 bool VAR_20 = 0;
 u8 VAR_21 = 0, VAR_22, VAR_23;
 int VAR_24, VAR_25 = 0;
 struct htt_data_tx_compl_ppdu_dur *VAR_26;
 struct ath10k_peer *VAR_27;
 u16 VAR_28 = 0, VAR_29;
 u32 VAR_30;

 switch (VAR_17) {
 case 130:
  VAR_16.status = VAR_9;
  break;
 case 129:
  VAR_16.status = VAR_7;
  break;
 case 132:
 case 128:
 case 131:
  VAR_16.status = VAR_8;
  break;
 default:
  FUNC_9(VAR_12, "unhandled tx completion status %d\n", VAR_17);
  VAR_16.status = VAR_8;
  break;
 }

 FUNC_4(VAR_12, VAR_0, "htt tx completion num_msdus %d\n",
     VAR_15->data_tx_completion.num_msdus);

 VAR_21 = VAR_15->data_tx_completion.num_msdus;
 VAR_19 = VAR_15->data_tx_completion.msdus;
 VAR_20 = FUNC_5(&VAR_12->hw_params, VAR_15);

 if (VAR_20)
  VAR_25 = FUNC_7(&VAR_12->hw_params,
           VAR_15);

 for (VAR_24 = 0; VAR_24 < VAR_21; VAR_24++) {
  VAR_18 = VAR_19[VAR_24];
  VAR_16.msdu_id = FUNC_2(VAR_18);

  if (VAR_20) {




   if (VAR_21 & 0x01) {
    VAR_18 = VAR_19[VAR_21 + VAR_24 + 1 + VAR_25];
    VAR_16.ack_rssi = FUNC_2(VAR_18);
   } else {
    VAR_18 = VAR_19[VAR_21 + VAR_24 + VAR_25];
    VAR_16.ack_rssi = FUNC_2(VAR_18);
   }
  }
  if (VAR_12->bus_param.dev_type == VAR_1) {
   FUNC_8(VAR_14, &VAR_16);
  } else if (!FUNC_11(&VAR_14->txdone_fifo, VAR_16)) {
   FUNC_9(VAR_12, "txdone fifo overrun, msdu_id %d status %d\n",
        VAR_16.msdu_id, VAR_16.status);
   FUNC_8(VAR_14, &VAR_16);
  }
 }

 if (!(VAR_15->data_tx_completion.flags2 & VAR_4))
  return;

 VAR_28 = (VAR_21 & 0x01) ? VAR_21 + 1 : VAR_21;

 if (VAR_20)
  VAR_28 += VAR_28;

 if (VAR_15->data_tx_completion.flags2 &
     (VAR_5 | VAR_3))
  VAR_28 += 2;

 VAR_26 = (struct htt_data_tx_compl_ppdu_dur *)&VAR_19[VAR_28];
 VAR_22 = FUNC_0(VAR_6,
     FUNC_3(VAR_26->info0));

 for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++) {
  struct htt_data_tx_ppdu_dur *VAR_31;
  u32 VAR_32;

  VAR_31 = &VAR_26->ppdu_dur[VAR_24];
  VAR_32 = FUNC_3(VAR_31->info0);

  VAR_29 = FUNC_0(VAR_10,
        VAR_32);
  FUNC_12();
  FUNC_14(&VAR_12->data_lock);

  VAR_27 = FUNC_6(VAR_12, VAR_29);
  if (!VAR_27) {
   FUNC_15(&VAR_12->data_lock);
   FUNC_13();
   continue;
  }

  VAR_23 = FUNC_0(VAR_11, VAR_32);
  VAR_30 = FUNC_3(VAR_31->tx_duration);

  FUNC_10(VAR_27->sta, VAR_23, VAR_30, 0);

  FUNC_15(&VAR_12->data_lock);
  FUNC_13();
 }
}
