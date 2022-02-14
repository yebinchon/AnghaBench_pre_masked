
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wil6210_priv {int mutex; int vif_mutex; int status; } ;
struct cfg80211_wowlan {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct wil6210_priv*,int) ;
 int FUNC_4 (struct wil6210_priv*,int) ;
 int FUNC_5 (struct wil6210_priv*,char*) ;
 int FUNC_6 (struct wil6210_priv*) ;
 int VAR_0 ;
 struct wil6210_priv* FUNC_7 (struct wiphy*) ;

__attribute__((used)) static int FUNC_8(struct wiphy *VAR_1,
    struct cfg80211_wowlan *VAR_2)
{
 struct wil6210_priv *VAR_3 = FUNC_7(VAR_1);
 int VAR_4;



 if (FUNC_2(VAR_0, VAR_3->status)) {
  FUNC_5(VAR_3, "trying to suspend while suspended\n");
  return 0;
 }

 VAR_4 = FUNC_4(VAR_3, 0);
 if (VAR_4)
  goto out;

 FUNC_5(VAR_3, "suspending\n");

 FUNC_0(&VAR_3->mutex);
 FUNC_0(&VAR_3->vif_mutex);
 FUNC_6(VAR_3);
 FUNC_3(VAR_3, 1);
 FUNC_1(&VAR_3->vif_mutex);
 FUNC_1(&VAR_3->mutex);

out:
 return VAR_4;
}
