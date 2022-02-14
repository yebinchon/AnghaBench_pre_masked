
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath_common {int keymax; } ;
struct ath5k_hw {int imask; int ah_ack_bitrate_high; int tx_complete_work; TYPE_3__* hw; int status; int lock; int ** bslot; int curchan; int opmode; } ;
struct TYPE_4__ {int chan; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct TYPE_6__ {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (struct ath5k_hw*,int ,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ath_common* FUNC_2 (struct ath5k_hw*) ;
 int VAR_12 ;
 int FUNC_3 (struct ath5k_hw*,int *,int) ;
 int FUNC_4 (struct ath5k_hw*) ;
 int FUNC_5 (struct ath5k_hw*) ;
 int FUNC_6 (struct ath_common*,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;

int FUNC_12(struct ieee80211_hw *VAR_13)
{
 struct ath5k_hw *VAR_14 = VAR_13->priv;
 struct ath_common *VAR_15 = FUNC_2(VAR_14);
 int VAR_16, VAR_17;

 FUNC_9(&VAR_14->lock);

 FUNC_1(VAR_14, VAR_9, "mode %d\n", VAR_14->opmode);





 FUNC_5(VAR_14);
 VAR_14->curchan = VAR_14->hw->conf.chandef.chan;
 VAR_14->imask = VAR_5
  | VAR_4
  | VAR_3
  | VAR_6
  | VAR_7
  | VAR_8
  | VAR_0
  | VAR_1
  | VAR_2;

 VAR_16 = FUNC_3(VAR_14, ((void*)0), 0);
 if (VAR_16)
  goto done;

 if (!VAR_12)
  FUNC_4(VAR_14);





 for (VAR_17 = 0; VAR_17 < VAR_15->keymax; VAR_17++)
  FUNC_6(VAR_15, (u16) VAR_17);



 VAR_14->ah_ack_bitrate_high = 1;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_14->bslot); VAR_17++)
  VAR_14->bslot[VAR_17] = ((void*)0);

 VAR_16 = 0;
done:
 FUNC_10(&VAR_14->lock);

 FUNC_11(VAR_11, VAR_14->status);
 FUNC_7(VAR_14->hw, &VAR_14->tx_complete_work,
   FUNC_8(VAR_10));

 return VAR_16;
}
