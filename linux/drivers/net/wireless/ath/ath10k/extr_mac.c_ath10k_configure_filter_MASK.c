
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k {unsigned int filter_flags; int conf_mutex; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_1,
        unsigned int VAR_2,
        unsigned int *VAR_3,
        u64 VAR_4)
{
 struct ath10k *VAR_5 = VAR_1->priv;
 int VAR_6;

 FUNC_2(&VAR_5->conf_mutex);

 VAR_2 &= VAR_0;
 *VAR_3 &= VAR_0;
 VAR_5->filter_flags = *VAR_3;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  FUNC_1(VAR_5, "failed to recalc monitor: %d\n", VAR_6);

 FUNC_3(&VAR_5->conf_mutex);
}
