
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {scalar_t__ state; int mutex; int fw_ver; int chip_id; } ;
struct wiphy {int fw_version; int hw_version; } ;
struct ieee80211_hw {struct wiphy* wiphy; struct wl1251* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct wl1251*) ;
 int FUNC_4 (struct wl1251*) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (struct wl1251*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct wl1251*) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_4)
{
 struct wl1251 *VAR_5 = VAR_4->priv;
 struct wiphy *VAR_6 = VAR_4->wiphy;
 int VAR_7 = 0;

 FUNC_6(VAR_0, "mac80211 start");

 FUNC_0(&VAR_5->mutex);

 if (VAR_5->state != VAR_2) {
  FUNC_7("cannot start because not in off state: %d",
        VAR_5->state);
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 < 0)
  goto out;

 VAR_5->state = VAR_3;

 FUNC_9("firmware booted (%s)", VAR_5->fw_ver);


 VAR_6->hw_version = VAR_5->chip_id;
 FUNC_2(VAR_6->fw_version, VAR_5->fw_ver, sizeof(VAR_6->fw_version));

out:
 if (VAR_7 < 0)
  FUNC_10(VAR_5);

 FUNC_1(&VAR_5->mutex);

 return VAR_7;
}
