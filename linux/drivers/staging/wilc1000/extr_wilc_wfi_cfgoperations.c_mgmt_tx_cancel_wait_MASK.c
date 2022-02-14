
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct wilc_wfi_p2p_listen_params {int listen_ch; int listen_cookie; } ;
struct wilc_priv {struct wilc_wfi_p2p_listen_params remain_on_ch_params; int p2p_listen_state; struct host_if_drv* hif_drv; } ;
struct wilc_vif {struct wilc_priv priv; } ;
struct host_if_drv {int p2p_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct wireless_dev*,int ,int ,int ) ;
 int VAR_1 ;
 struct wilc_vif* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_2,
          struct wireless_dev *VAR_3,
          u64 VAR_4)
{
 struct wilc_vif *VAR_5 = FUNC_1(VAR_3->netdev);
 struct wilc_priv *VAR_6 = &VAR_5->priv;
 struct host_if_drv *VAR_7 = VAR_6->hif_drv;

 VAR_7->p2p_timeout = VAR_1;

 if (!VAR_6->p2p_listen_state) {
  struct wilc_wfi_p2p_listen_params *VAR_8;

  VAR_8 = &VAR_6->remain_on_ch_params;

  FUNC_0(VAR_3,
         VAR_8->listen_cookie,
         VAR_8->listen_ch,
         VAR_0);
 }

 return 0;
}
