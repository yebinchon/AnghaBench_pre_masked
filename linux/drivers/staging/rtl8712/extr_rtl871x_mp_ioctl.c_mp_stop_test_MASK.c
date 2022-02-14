
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MacAddress; } ;
struct wlan_network {TYPE_1__ network; } ;
struct sta_info {int dummy; } ;
struct mp_priv {int prev_fw_state; } ;
struct mlme_priv {int lock; int fw_state; struct wlan_network cur_network; } ;
struct _adapter {int stapriv; struct mlme_priv mlmepriv; struct mp_priv mppriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct wlan_network*,int ,int) ;
 int FUNC_2 (struct _adapter*,struct sta_info*) ;
 struct sta_info* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct _adapter*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct _adapter *VAR_2)
{
 struct mp_priv *VAR_3 = &VAR_2->mppriv;
 struct mlme_priv *VAR_4 = &VAR_2->mlmepriv;
 struct wlan_network *VAR_5 = &VAR_4->cur_network;
 struct sta_info *VAR_6;
 unsigned long VAR_7;

 FUNC_5(&VAR_4->lock, VAR_7);
 if (!FUNC_0(VAR_4, VAR_0))
  goto end_of_mp_stop_test;

 FUNC_4(VAR_2);

 VAR_6 = FUNC_3(&VAR_2->stapriv,
     VAR_5->network.MacAddress);
 if (VAR_6)
  FUNC_2(VAR_2, VAR_6);

 VAR_4->fw_state = VAR_3->prev_fw_state;

 FUNC_1(VAR_5, 0, sizeof(struct wlan_network));
end_of_mp_stop_test:
 FUNC_6(&VAR_4->lock, VAR_7);
 return VAR_1;
}
