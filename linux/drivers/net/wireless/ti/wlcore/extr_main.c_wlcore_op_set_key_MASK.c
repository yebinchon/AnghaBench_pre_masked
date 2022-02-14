
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ cipher; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct wl1271*) ;
 int FUNC_8 (struct wl1271*,int,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_9 (struct wl1271*,int ) ;
 int FUNC_10 (struct wl1271*,int ) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_5, enum set_key_cmd VAR_6,
        struct ieee80211_vif *VAR_7,
        struct ieee80211_sta *VAR_8,
        struct ieee80211_key_conf *VAR_9)
{
 struct wl1271 *VAR_10 = VAR_5->priv;
 int VAR_11;
 bool VAR_12 =
  VAR_9->cipher == VAR_1 ||
  VAR_9->cipher == VAR_2;

 if (VAR_12) {




  FUNC_9(VAR_10, VAR_3);
  FUNC_7(VAR_10);
 }

 FUNC_0(&VAR_10->mutex);

 if (FUNC_6(VAR_10->state != VAR_4)) {
  VAR_11 = -VAR_0;
  goto out_wake_queues;
 }

 VAR_11 = FUNC_2(VAR_10->dev);
 if (VAR_11 < 0) {
  FUNC_5(VAR_10->dev);
  goto out_wake_queues;
 }

 VAR_11 = FUNC_8(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_3(VAR_10->dev);
 FUNC_4(VAR_10->dev);

out_wake_queues:
 if (VAR_12)
  FUNC_10(VAR_10, VAR_3);

 FUNC_1(&VAR_10->mutex);

 return VAR_11;
}
