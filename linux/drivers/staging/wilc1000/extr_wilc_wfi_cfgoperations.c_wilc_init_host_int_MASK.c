
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_priv {int p2p_listen_state; int hif_drv; int scan_req_lock; } ;
struct wilc_vif {struct wilc_priv priv; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int *) ;

int FUNC_4(struct net_device *VAR_0)
{
 int VAR_1;
 struct wilc_vif *VAR_2 = FUNC_2(VAR_0);
 struct wilc_priv *VAR_3 = &VAR_2->priv;

 VAR_3->p2p_listen_state = 0;

 FUNC_0(&VAR_3->scan_req_lock);
 VAR_1 = FUNC_3(VAR_0, &VAR_3->hif_drv);
 if (VAR_1)
  FUNC_1(VAR_0, "Error while initializing hostinterface\n");

 return VAR_1;
}
