
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wil6210_priv {int vif_mutex; TYPE_1__* main_ndev; int radio_wdev; struct wireless_dev* p2p_wdev; } ;
struct TYPE_2__ {int ieee80211_ptr; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct wil6210_priv *VAR_0)
{
 struct wireless_dev *VAR_1;

 FUNC_2(&VAR_0->vif_mutex);
 VAR_1 = VAR_0->p2p_wdev;
 VAR_0->p2p_wdev = ((void*)0);
 VAR_0->radio_wdev = VAR_0->main_ndev->ieee80211_ptr;
 FUNC_3(&VAR_0->vif_mutex);
 if (VAR_1) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 }
}
