
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wil_p2p_info {int listen_chan; int cookie; int discovery_started; } ;
struct wil6210_vif {TYPE_2__* scan_request; struct wil_p2p_info p2p; } ;
struct wil6210_priv {scalar_t__ radio_wdev; scalar_t__ p2p_wdev; TYPE_1__* main_ndev; int vif_mutex; int mutex; } ;
struct cfg80211_scan_info {int aborted; } ;
struct TYPE_4__ {scalar_t__ wdev; } ;
struct TYPE_3__ {scalar_t__ ieee80211_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*,struct cfg80211_scan_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct wil6210_vif* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct wil6210_vif*,int) ;
 int FUNC_7 (struct wil6210_vif*) ;

void FUNC_8(struct wil6210_priv *VAR_1)
{
 struct wil6210_vif *VAR_2 = FUNC_5(VAR_1->main_ndev);
 struct wil_p2p_info *VAR_3 = &VAR_2->p2p;
 struct cfg80211_scan_info VAR_4 = {
  .aborted = 1,
 };

 FUNC_2(&VAR_1->mutex);
 FUNC_2(&VAR_1->vif_mutex);

 if (VAR_1->radio_wdev != VAR_1->p2p_wdev)
  goto out;

 if (!VAR_3->discovery_started) {

  if (VAR_2->scan_request &&
      VAR_2->scan_request->wdev == VAR_1->p2p_wdev)
   FUNC_6(VAR_2, 1);
  goto out;
 }


 FUNC_4(&VAR_1->vif_mutex);
 FUNC_7(VAR_2);
 FUNC_3(&VAR_1->vif_mutex);

 if (VAR_2->scan_request) {

  FUNC_1(VAR_2->scan_request, &VAR_4);
  VAR_2->scan_request = ((void*)0);
 } else {

  FUNC_0(VAR_1->radio_wdev,
         VAR_3->cookie,
         &VAR_3->listen_chan,
         VAR_0);
 }

out:
 VAR_1->radio_wdev = VAR_1->main_ndev->ieee80211_ptr;
}
