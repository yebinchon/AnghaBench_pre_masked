
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int hal_mutex; int ccu_base; int dxe_base; int smd_channel; int tx_rings_empty_state; int tx_enable_state; int nv; } ;
struct platform_device {int dummy; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct ieee80211_hw* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_4(VAR_1);
 struct wcn36xx *VAR_3 = VAR_2->priv;
 FUNC_8(VAR_0, "platform remove\n");

 FUNC_6(VAR_3->nv);

 FUNC_1(VAR_2);

 FUNC_5(VAR_3->tx_enable_state);
 FUNC_5(VAR_3->tx_rings_empty_state);

 FUNC_7(VAR_3->smd_channel);

 FUNC_2(VAR_3->dxe_base);
 FUNC_2(VAR_3->ccu_base);

 FUNC_3(&VAR_3->hal_mutex);
 FUNC_0(VAR_2);

 return 0;
}
