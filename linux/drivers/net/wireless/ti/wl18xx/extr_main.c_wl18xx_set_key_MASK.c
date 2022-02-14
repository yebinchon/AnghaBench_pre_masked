
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl18xx_priv {int extra_spare_key_count; } ;
struct wl1271 {struct wl18xx_priv* priv; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ cipher; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wl1271*,int ) ;
 int FUNC_2 (struct wl1271*,int,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_7, enum set_key_cmd VAR_8,
     struct ieee80211_vif *VAR_9,
     struct ieee80211_sta *VAR_10,
     struct ieee80211_key_conf *VAR_11)
{
 struct wl18xx_priv *VAR_12 = VAR_7->priv;
 bool VAR_13 = 0, VAR_14;
 int VAR_15;

 FUNC_0(VAR_0, "extra spare keys before: %d",
       VAR_12->extra_spare_key_count);

 VAR_14 = VAR_11->cipher == VAR_3 ||
        VAR_11->cipher == VAR_6;

 VAR_15 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_15 < 0)
  goto out;





 if (VAR_14) {
  if (VAR_8 == VAR_2) {

   VAR_13 = (VAR_12->extra_spare_key_count == 0);
   VAR_12->extra_spare_key_count++;
  } else if (VAR_8 == VAR_1) {

   VAR_13 = (VAR_12->extra_spare_key_count == 1);
   VAR_12->extra_spare_key_count--;
  }
 }

 FUNC_0(VAR_0, "extra spare keys after: %d",
       VAR_12->extra_spare_key_count);

 if (!VAR_13)
  goto out;


 if (VAR_12->extra_spare_key_count)
  VAR_15 = FUNC_1(VAR_7,
     VAR_5);
 else
  VAR_15 = FUNC_1(VAR_7,
     VAR_4);

out:
 return VAR_15;
}
