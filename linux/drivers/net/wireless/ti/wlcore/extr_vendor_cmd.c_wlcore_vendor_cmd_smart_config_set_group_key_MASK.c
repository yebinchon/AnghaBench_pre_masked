
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ state; int mutex; int dev; } ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct nlattr {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,void const*,int,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 struct ieee80211_hw* FUNC_11 (struct wiphy*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct wl1271*,int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_14(struct wiphy *VAR_8,
          struct wireless_dev *VAR_9,
          const void *VAR_10, int VAR_11)
{
 struct ieee80211_hw *VAR_12 = FUNC_11(VAR_8);
 struct wl1271 *VAR_13 = VAR_12->priv;
 struct nlattr *VAR_14[VAR_3];
 int VAR_15;

 FUNC_12(VAR_0, "testmode cmd smart config set group key");

 if (!VAR_10)
  return -VAR_1;

 VAR_15 = FUNC_5(VAR_14, VAR_2, VAR_10, VAR_11,
       VAR_7, ((void*)0));
 if (VAR_15)
  return VAR_15;

 if (!VAR_14[VAR_5] ||
     !VAR_14[VAR_6])
  return -VAR_1;

 FUNC_0(&VAR_13->mutex);

 if (FUNC_10(VAR_13->state != VAR_4)) {
  VAR_15 = -VAR_1;
  goto out;
 }

 VAR_15 = FUNC_6(VAR_13->dev);
 if (VAR_15 < 0) {
  FUNC_9(VAR_13->dev);
  goto out;
 }

 VAR_15 = FUNC_13(VAR_13,
   FUNC_3(VAR_14[VAR_5]),
   FUNC_4(VAR_14[VAR_6]),
   FUNC_2(VAR_14[VAR_6]));

 FUNC_7(VAR_13->dev);
 FUNC_8(VAR_13->dev);
out:
 FUNC_1(&VAR_13->mutex);

 return VAR_15;
}
