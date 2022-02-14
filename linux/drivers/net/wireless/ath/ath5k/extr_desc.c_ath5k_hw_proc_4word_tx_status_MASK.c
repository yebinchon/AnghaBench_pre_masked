
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath5k_tx_status {int ts_antenna; int ts_status; void* ts_final_idx; void* ts_rssi; void* ts_seqnum; void* ts_final_retry; void* ts_shortretry; void* ts_tstamp; } ;
struct ath5k_hw_tx_status {int tx_status_0; int tx_status_1; } ;
struct ath5k_hw {int dummy; } ;
struct TYPE_3__ {struct ath5k_hw_tx_status tx_stat; } ;
struct TYPE_4__ {TYPE_1__ ds_tx5212; } ;
struct ath5k_desc {TYPE_2__ ud; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct ath5k_hw *VAR_16,
    struct ath5k_desc *VAR_17,
    struct ath5k_tx_status *VAR_18)
{
 struct ath5k_hw_tx_status *VAR_19;
 u32 VAR_20, VAR_21;

 VAR_19 = &VAR_17->ud.ds_tx5212.tx_stat;

 VAR_21 = FUNC_1(VAR_19->tx_status_1);


 if (FUNC_2(!(VAR_21 & VAR_8)))
  return -VAR_15;

 VAR_20 = FUNC_1(VAR_19->tx_status_0);




 VAR_18->ts_tstamp = FUNC_0(VAR_20,
  VAR_5);
 VAR_18->ts_shortretry = FUNC_0(VAR_20,
  VAR_6);
 VAR_18->ts_final_retry = FUNC_0(VAR_20,
  VAR_4);
 VAR_18->ts_seqnum = FUNC_0(VAR_21,
  VAR_10);
 VAR_18->ts_rssi = FUNC_0(VAR_21,
  VAR_7);
 VAR_18->ts_antenna = (VAR_21 &
  VAR_11) ? 2 : 1;
 VAR_18->ts_status = 0;

 VAR_18->ts_final_idx = FUNC_0(VAR_21,
   VAR_9);


 if (!(VAR_20 & VAR_3)) {
  if (VAR_20 & VAR_0)
   VAR_18->ts_status |= VAR_14;

  if (VAR_20 & VAR_1)
   VAR_18->ts_status |= VAR_12;

  if (VAR_20 & VAR_2)
   VAR_18->ts_status |= VAR_13;
 }

 return 0;
}
