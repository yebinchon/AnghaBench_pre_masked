
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ar5523* priv; } ;
struct ieee80211_bss_conf {scalar_t__ assoc; } ;
struct ar5523 {int mutex; int flags; int stat_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ar5523*,struct ieee80211_vif*,struct ieee80211_bss_conf*) ;
 int FUNC_1 (struct ar5523*,char*) ;
 int FUNC_2 (struct ar5523*,char*) ;
 int FUNC_3 (struct ar5523*,struct ieee80211_bss_conf*) ;
 int FUNC_4 (struct ar5523*,int ,int ) ;
 int FUNC_5 (struct ar5523*,struct ieee80211_bss_conf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct ieee80211_hw*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_6,
        struct ieee80211_vif *VAR_7,
        struct ieee80211_bss_conf *VAR_8,
        u32 VAR_9)
{
 struct ar5523 *VAR_10 = VAR_6->priv;
 int VAR_11;

 FUNC_1(VAR_10, "bss_info_changed called\n");
 FUNC_9(&VAR_10->mutex);

 if (!(VAR_9 & VAR_1))
  goto out_unlock;

 if (VAR_8->assoc) {
  VAR_11 = FUNC_0(VAR_10, VAR_7, VAR_8);
  if (VAR_11) {
   FUNC_2(VAR_10, "could not create connection\n");
   goto out_unlock;
  }

  VAR_11 = FUNC_3(VAR_10, VAR_8);
  if (VAR_11) {
   FUNC_2(VAR_10, "could not set negotiated rate set\n");
   goto out_unlock;
  }

  VAR_11 = FUNC_5(VAR_10, VAR_8);
  if (VAR_11) {
   FUNC_2(VAR_10, "could not set association\n");
   goto out_unlock;
  }


  FUNC_4(VAR_10, VAR_3, VAR_5);
  FUNC_11(VAR_0, &VAR_10->flags);
  FUNC_8(VAR_6, &VAR_10->stat_work, VAR_2);

 } else {
  FUNC_6(&VAR_10->stat_work);
  FUNC_7(VAR_0, &VAR_10->flags);
  FUNC_4(VAR_10, VAR_3, VAR_4);
 }

out_unlock:
 FUNC_10(&VAR_10->mutex);

}
