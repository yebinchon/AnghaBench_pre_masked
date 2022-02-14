
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct wil_p2p_info {scalar_t__ cookie; int listen_chan; } ;
struct wil6210_vif {scalar_t__ mid; struct wil_p2p_info p2p; } ;
struct wil6210_priv {int vif_mutex; TYPE_1__* main_ndev; int radio_wdev; int mutex; } ;
struct TYPE_2__ {int ieee80211_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wil6210_priv*,struct wil6210_vif*) ;
 struct wil6210_priv* FUNC_4 (struct wil6210_vif*) ;
 int FUNC_5 (struct wil6210_priv*,char*) ;
 int FUNC_6 (struct wil6210_priv*,char*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct wil6210_vif*) ;

int FUNC_8(struct wil6210_vif *VAR_2, u64 VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_4(VAR_2);
 struct wil_p2p_info *VAR_5 = &VAR_2->p2p;
 u8 VAR_6;

 FUNC_1(&VAR_4->mutex);

 if (VAR_3 != VAR_5->cookie) {
  FUNC_6(VAR_4, "Cookie mismatch: 0x%016llx vs. 0x%016llx\n",
    VAR_5->cookie, VAR_3);
  FUNC_2(&VAR_4->mutex);
  return -VAR_0;
 }

 VAR_6 = FUNC_7(VAR_2);

 FUNC_2(&VAR_4->mutex);

 if (!VAR_6) {
  FUNC_5(VAR_4, "listen not started\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_4->vif_mutex);
 FUNC_0(FUNC_3(VAR_4, VAR_2),
        VAR_5->cookie,
        &VAR_5->listen_chan,
        VAR_1);
 if (VAR_2->mid == 0)
  VAR_4->radio_wdev = VAR_4->main_ndev->ieee80211_ptr;
 FUNC_2(&VAR_4->vif_mutex);
 return 0;
}
