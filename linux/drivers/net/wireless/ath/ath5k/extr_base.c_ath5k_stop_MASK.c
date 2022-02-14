
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int tx_complete_work; int status; int lock; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath5k_hw*) ;
 int VAR_3 ;
 int FUNC_2 (struct ath5k_hw*) ;
 int FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(struct ieee80211_hw *VAR_4)
{
 struct ath5k_hw *VAR_5 = VAR_4->priv;
 int VAR_6;

 FUNC_7(&VAR_5->lock);
 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 == 0 && !FUNC_9(VAR_1, VAR_5->status)) {
  VAR_6 = FUNC_1(VAR_5);

  FUNC_0(VAR_5, VAR_0,
    "putting device to sleep\n");
 }

 FUNC_8(&VAR_5->lock);

 FUNC_4(VAR_5);

 FUNC_6(VAR_2, VAR_5->status);
 FUNC_5(&VAR_5->tx_complete_work);

 if (!VAR_3)
  FUNC_2(VAR_5);
}
