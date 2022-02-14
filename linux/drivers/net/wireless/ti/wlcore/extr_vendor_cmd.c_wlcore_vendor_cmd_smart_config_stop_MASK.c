
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 struct ieee80211_hw* FUNC_7 (struct wiphy*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct wl1271*) ;

__attribute__((used)) static int
FUNC_10(struct wiphy *VAR_3,
        struct wireless_dev *VAR_4,
        const void *VAR_5, int VAR_6)
{
 struct ieee80211_hw *VAR_7 = FUNC_7(VAR_3);
 struct wl1271 *VAR_8 = VAR_7->priv;
 int VAR_9;

 FUNC_8(VAR_0, "testmode cmd smart config stop");

 FUNC_0(&VAR_8->mutex);

 if (FUNC_6(VAR_8->state != VAR_2)) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_8->dev);
 if (VAR_9 < 0) {
  FUNC_5(VAR_8->dev);
  goto out;
 }

 VAR_9 = FUNC_9(VAR_8);

 FUNC_3(VAR_8->dev);
 FUNC_4(VAR_8->dev);
out:
 FUNC_1(&VAR_8->mutex);

 return VAR_9;
}
