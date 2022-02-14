
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int op_flags; } ;
struct ath9k_htc_priv {unsigned int rxfilter; int mutex; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ath_common*,int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_4,
           unsigned int VAR_5,
           unsigned int *VAR_6,
           u64 VAR_7)
{
 struct ath9k_htc_priv *VAR_8 = VAR_4->priv;
 struct ath_common *VAR_9 = FUNC_3(VAR_8->ah);
 u32 VAR_10;

 FUNC_6(&VAR_8->mutex);
 VAR_5 &= VAR_3;
 *VAR_6 &= VAR_3;

 if (FUNC_8(VAR_1, &VAR_9->op_flags)) {
  FUNC_5(FUNC_3(VAR_8->ah), VAR_0,
   "Unable to configure filter on invalid state\n");
  FUNC_7(&VAR_8->mutex);
  return;
 }
 FUNC_2(VAR_8);

 VAR_8->rxfilter = *VAR_6;
 VAR_10 = FUNC_0(VAR_8);
 FUNC_4(VAR_8->ah, VAR_10);

 FUNC_5(FUNC_3(VAR_8->ah), VAR_2, "Set HW RX filter: 0x%x\n",
  VAR_10);

 FUNC_1(VAR_8);
 FUNC_7(&VAR_8->mutex);
}
