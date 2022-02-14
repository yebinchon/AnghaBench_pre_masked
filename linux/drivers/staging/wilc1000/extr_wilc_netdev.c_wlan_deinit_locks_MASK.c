
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int vif_mutex; int txq_add_to_head_cs; int cfg_cmd_lock; int rxq_cs; int hif_cs; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct wilc_vif *VAR_1 = FUNC_1(VAR_0);
 struct wilc *VAR_2 = VAR_1->wilc;

 FUNC_0(&VAR_2->hif_cs);
 FUNC_0(&VAR_2->rxq_cs);
 FUNC_0(&VAR_2->cfg_cmd_lock);
 FUNC_0(&VAR_2->txq_add_to_head_cs);
 FUNC_0(&VAR_2->vif_mutex);
}
