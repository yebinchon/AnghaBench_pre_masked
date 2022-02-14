
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int iftype; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {TYPE_1__* scan_request; } ;
struct wil6210_priv {int mutex; int vif_mutex; struct wireless_dev* p2p_wdev; struct wireless_dev* radio_wdev; } ;
struct TYPE_2__ {struct wireless_dev* wdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wil6210_vif* FUNC_2 (struct wil6210_priv*,struct wireless_dev*) ;
 int FUNC_3 (struct wil6210_vif*,int) ;
 int FUNC_4 (struct wil6210_priv*,char*,...) ;
 int FUNC_5 (struct wil6210_priv*) ;
 struct wil6210_priv* FUNC_6 (struct wiphy*) ;

__attribute__((used)) static void FUNC_7(struct wiphy *VAR_0,
        struct wireless_dev *VAR_1)
{
 struct wil6210_priv *VAR_2 = FUNC_6(VAR_0);
 struct wil6210_vif *VAR_3 = FUNC_2(VAR_2, VAR_1);

 FUNC_4(VAR_2, "wdev=0x%p iftype=%d\n", VAR_1, VAR_1->iftype);

 FUNC_0(&VAR_2->mutex);
 FUNC_0(&VAR_2->vif_mutex);

 if (!VAR_3->scan_request)
  goto out;

 if (VAR_1 != VAR_3->scan_request->wdev) {
  FUNC_4(VAR_2, "abort scan was called on the wrong iface\n");
  goto out;
 }

 if (VAR_1 == VAR_2->p2p_wdev && VAR_2->radio_wdev == VAR_2->p2p_wdev)
  FUNC_5(VAR_2);
 else
  FUNC_3(VAR_3, 1);

out:
 FUNC_1(&VAR_2->vif_mutex);
 FUNC_1(&VAR_2->mutex);
}
