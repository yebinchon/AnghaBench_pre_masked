
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k {int conf_mutex; } ;


 int FUNC_0 (struct ath10k*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct ath10k *VAR_3 = VAR_0->priv;
 int VAR_4;

 FUNC_1(&VAR_3->conf_mutex);
 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_2(&VAR_3->conf_mutex);
 return VAR_4;
}
