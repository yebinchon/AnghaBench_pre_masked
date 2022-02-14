
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,void const*,int,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 struct ieee80211_hw* FUNC_9 (struct wiphy*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct wl1271*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_12(struct wiphy *VAR_7,
         struct wireless_dev *VAR_8,
         const void *VAR_9, int VAR_10)
{
 struct ieee80211_hw *VAR_11 = FUNC_9(VAR_7);
 struct wl1271 *VAR_12 = VAR_11->priv;
 struct nlattr *VAR_13[VAR_3];
 int VAR_14;

 FUNC_10(VAR_0, "vendor cmd smart config start");

 if (!VAR_9)
  return -VAR_1;

 VAR_14 = FUNC_3(VAR_13, VAR_2, VAR_9, VAR_10,
       VAR_6, ((void*)0));
 if (VAR_14)
  return VAR_14;

 if (!VAR_13[VAR_5])
  return -VAR_1;

 FUNC_0(&VAR_12->mutex);

 if (FUNC_8(VAR_12->state != VAR_4)) {
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_14 = FUNC_4(VAR_12->dev);
 if (VAR_14 < 0) {
  FUNC_7(VAR_12->dev);
  goto out;
 }

 VAR_14 = FUNC_11(VAR_12,
   FUNC_2(VAR_13[VAR_5]));

 FUNC_5(VAR_12->dev);
 FUNC_6(VAR_12->dev);
out:
 FUNC_1(&VAR_12->mutex);

 return VAR_14;
}
