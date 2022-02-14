
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct ctcm_priv* ml_priv; } ;
struct mpc_group {int fsm; } ;
struct ctcm_priv {struct mpc_group* mpcg; } ;
struct channel {struct net_device* netdev; } ;
typedef int fsm_instance ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct channel*) ;

__attribute__((used)) static void FUNC_1(fsm_instance *VAR_1, int VAR_2, void *VAR_3)
{
 struct channel *VAR_4 = VAR_3;
 struct net_device *VAR_5 = VAR_4->netdev;
 struct ctcm_priv *VAR_6 = VAR_5->ml_priv;
 struct mpc_group *VAR_7 = VAR_6->mpcg;

 FUNC_0(VAR_7->fsm, VAR_0, VAR_4);
 return;
}
