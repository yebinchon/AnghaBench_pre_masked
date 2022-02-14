
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {scalar_t__ opmode; int slottime; } ;
struct ath9k_tx_queue_info {int tqi_aifs; int tqi_cwmin; scalar_t__ tqi_cwmax; } ;
struct TYPE_2__ {int beaconq; } ;
struct ath9k_htc_priv {int* hwq_map; TYPE_1__ beacon; struct ath_hw* ah; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int,struct ath9k_tx_queue_info*) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*,int,struct ath9k_tx_queue_info*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct ath9k_tx_queue_info*,int ,int) ;

void FUNC_6(struct ath9k_htc_priv *VAR_4)
{
 struct ath_hw *VAR_5 = VAR_4->ah;
 struct ath9k_tx_queue_info VAR_6, VAR_7;

 FUNC_5(&VAR_6, 0, sizeof(struct ath9k_tx_queue_info));
 FUNC_5(&VAR_7, 0, sizeof(struct ath9k_tx_queue_info));

 FUNC_1(VAR_5, VAR_4->beacon.beaconq, &VAR_6);

 if (VAR_4->ah->opmode == VAR_2 ||
     VAR_4->ah->opmode == VAR_3) {
  VAR_6.tqi_aifs = 1;
  VAR_6.tqi_cwmin = 0;
  VAR_6.tqi_cwmax = 0;
 } else if (VAR_4->ah->opmode == VAR_1) {
  int VAR_8 = VAR_4->hwq_map[VAR_0];

  FUNC_1(VAR_5, VAR_8, &VAR_7);

  VAR_6.tqi_aifs = VAR_7.tqi_aifs;






  if (VAR_5->slottime == 20)
   VAR_6.tqi_cwmin = 2*VAR_7.tqi_cwmin;
  else
   VAR_6.tqi_cwmin = 4*VAR_7.tqi_cwmin;

  VAR_6.tqi_cwmax = VAR_7.tqi_cwmax;

 }

 if (!FUNC_3(VAR_5, VAR_4->beacon.beaconq, &VAR_6)) {
  FUNC_4(FUNC_0(VAR_5),
   "Unable to update beacon queue %u!\n", VAR_4->beacon.beaconq);
 } else {
  FUNC_2(VAR_5, VAR_4->beacon.beaconq);
 }
}
