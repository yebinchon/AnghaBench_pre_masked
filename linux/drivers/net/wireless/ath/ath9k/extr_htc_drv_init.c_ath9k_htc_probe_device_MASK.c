
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct htc_target {struct ath9k_htc_priv* drv_priv; } ;
struct device {int dummy; } ;
struct ath9k_htc_priv {int wmi; struct device* dev; struct htc_target* htc; struct ieee80211_hw* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,struct device*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int VAR_2 ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*,int ,char*,int ) ;
 int FUNC_4 (struct ath9k_htc_priv*,int ,int ) ;
 int FUNC_5 (struct ath9k_htc_priv*) ;
 struct ieee80211_hw* FUNC_6 (int,int *) ;
 int FUNC_7 (struct ieee80211_hw*) ;

int FUNC_8(struct htc_target *VAR_3, struct device *VAR_4,
      u16 VAR_5, char *VAR_6, u32 VAR_7)
{
 struct ieee80211_hw *VAR_8;
 struct ath9k_htc_priv *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(sizeof(struct ath9k_htc_priv), &VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = VAR_8->priv;
 VAR_9->hw = VAR_8;
 VAR_9->htc = VAR_3;
 VAR_9->dev = VAR_4;
 VAR_3->drv_priv = VAR_9;
 FUNC_0(VAR_8, VAR_9->dev);

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10)
  goto err_free;

 VAR_9->wmi = FUNC_5(VAR_9);
 if (!VAR_9->wmi) {
  VAR_10 = -VAR_0;
  goto err_free;
 }

 VAR_10 = FUNC_4(VAR_9, VAR_5, VAR_7);
 if (VAR_10)
  goto err_init;

 VAR_10 = FUNC_3(VAR_9, VAR_5, VAR_6, VAR_7);
 if (VAR_10)
  goto err_init;

 return 0;

err_init:
 FUNC_1(VAR_9);
err_free:
 FUNC_7(VAR_8);
 return VAR_10;
}
