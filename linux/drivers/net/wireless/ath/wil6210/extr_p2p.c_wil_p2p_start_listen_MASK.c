
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int hw_value; } ;
struct wil_p2p_info {int listen_duration; int discovery_timer; int discovery_expired_work; TYPE_1__ listen_chan; } ;
struct wil6210_vif {struct wil_p2p_info p2p; } ;
struct wil6210_priv {int mutex; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct wil6210_priv* FUNC_5 (struct wil6210_vif*) ;
 int FUNC_6 (struct wil6210_priv*,char*) ;
 int VAR_3 ;
 int FUNC_7 (struct wil6210_vif*,int ,int ) ;
 int FUNC_8 (struct wil6210_vif*,int ,int ) ;
 int FUNC_9 (struct wil6210_vif*) ;
 int FUNC_10 (struct wil6210_vif*) ;

__attribute__((used)) static int FUNC_11(struct wil6210_vif *VAR_4)
{
 struct wil6210_priv *VAR_5 = FUNC_5(VAR_4);
 struct wil_p2p_info *VAR_6 = &VAR_4->p2p;
 u8 VAR_7 = VAR_6->listen_chan.hw_value;
 int VAR_8;

 FUNC_1(&VAR_5->mutex);

 VAR_8 = FUNC_7(VAR_4, VAR_7, VAR_0);
 if (VAR_8) {
  FUNC_6(VAR_5, "wmi_p2p_cfg failed\n");
  goto out;
 }

 VAR_8 = FUNC_8(VAR_4, FUNC_4(VAR_1), VAR_1);
 if (VAR_8) {
  FUNC_6(VAR_5, "wmi_set_ssid failed\n");
  goto out_stop;
 }

 VAR_8 = FUNC_9(VAR_4);
 if (VAR_8) {
  FUNC_6(VAR_5, "wmi_start_listen failed\n");
  goto out_stop;
 }

 FUNC_0(&VAR_6->discovery_expired_work, VAR_3);
 FUNC_2(&VAR_6->discovery_timer,
    VAR_2 + FUNC_3(VAR_6->listen_duration));
out_stop:
 if (VAR_8)
  FUNC_10(VAR_4);

out:
 return VAR_8;
}
