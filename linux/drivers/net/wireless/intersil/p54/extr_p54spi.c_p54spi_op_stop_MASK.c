
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54s_priv {scalar_t__ fw_state; int work; int mutex; int tx_lock; int tx_pending; } ;
struct ieee80211_hw {struct p54s_priv* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct p54s_priv*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_2)
{
 struct p54s_priv *VAR_3 = VAR_2->priv;
 unsigned long VAR_4;

 FUNC_3(&VAR_3->mutex);
 FUNC_1(VAR_3->fw_state != VAR_1);

 FUNC_5(VAR_3);
 FUNC_6(&VAR_3->tx_lock, VAR_4);
 FUNC_0(&VAR_3->tx_pending);
 FUNC_7(&VAR_3->tx_lock, VAR_4);

 VAR_3->fw_state = VAR_0;
 FUNC_4(&VAR_3->mutex);

 FUNC_2(&VAR_3->work);
}
