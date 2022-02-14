
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ar5523* priv; } ;
struct ar5523 {int mutex; int rx_refill_work; int tx_wd_work; int tx_wd_timer; int flags; int stat_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ar5523*) ;
 int FUNC_1 (struct ar5523*,int ,int *,int ,int ) ;
 int FUNC_2 (struct ar5523*,char*) ;
 int FUNC_3 (struct ar5523*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_5)
{
 struct ar5523 *VAR_6 = VAR_5->priv;

 FUNC_2(VAR_6, "stop called\n");

 FUNC_4(&VAR_6->stat_work);
 FUNC_8(&VAR_6->mutex);
 FUNC_6(VAR_0, &VAR_6->flags);

 FUNC_3(VAR_6, VAR_2, VAR_3);
 FUNC_3(VAR_6, VAR_1, VAR_3);

 FUNC_1(VAR_6, VAR_4, ((void*)0), 0, 0);

 FUNC_7(&VAR_6->tx_wd_timer);
 FUNC_5(&VAR_6->tx_wd_work);
 FUNC_5(&VAR_6->rx_refill_work);
 FUNC_0(VAR_6);
 FUNC_9(&VAR_6->mutex);
}
