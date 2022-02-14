
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_conf {int flags; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct ath10k* priv; } ;
struct ath10k {int monitor; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_3, u32 VAR_4)
{
 struct ath10k *VAR_5 = VAR_3->priv;
 struct ieee80211_conf *VAR_6 = &VAR_3->conf;
 int VAR_7 = 0;

 FUNC_3(&VAR_5->conf_mutex);

 if (VAR_4 & VAR_1)
  FUNC_0(VAR_5);

 if (VAR_4 & VAR_0) {
  VAR_5->monitor = VAR_6->flags & VAR_2;
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7)
   FUNC_2(VAR_5, "failed to recalc monitor: %d\n", VAR_7);
 }

 FUNC_4(&VAR_5->conf_mutex);
 return VAR_7;
}
