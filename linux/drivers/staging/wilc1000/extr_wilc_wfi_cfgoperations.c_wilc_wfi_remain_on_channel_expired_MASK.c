
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct wilc_wfi_p2p_listen_params {scalar_t__ listen_cookie; int listen_ch; } ;
struct wilc_priv {int p2p_listen_state; int wdev; struct wilc_wfi_p2p_listen_params remain_on_ch_params; } ;
struct wilc_vif {struct wilc_priv priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u64 VAR_2)
{
 struct wilc_vif *VAR_3 = VAR_1;
 struct wilc_priv *VAR_4 = &VAR_3->priv;
 struct wilc_wfi_p2p_listen_params *VAR_5 = &VAR_4->remain_on_ch_params;

 if (VAR_2 != VAR_5->listen_cookie)
  return;

 VAR_4->p2p_listen_state = 0;

 FUNC_0(&VAR_4->wdev, VAR_5->listen_cookie,
        VAR_5->listen_ch, VAR_0);
}
