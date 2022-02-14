
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct mpc_group {int fsm; scalar_t__ send_qllc_disc; scalar_t__ port_persist; int * estconnfunc; int * allochanfunc; int timer; scalar_t__ channels_terminating; } ;
struct ctcm_priv {int restart_timer; struct mpc_group* mpcg; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

void FUNC_6(int VAR_4)
{
 struct net_device *VAR_5;
 struct ctcm_priv *VAR_6;
 struct mpc_group *VAR_7;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0))
  return;
 VAR_6 = VAR_5->ml_priv;
 VAR_7 = VAR_6->mpcg;

 FUNC_0(VAR_3, VAR_1,
   "%s: %s: refcount = %d\n",
   VAR_0, VAR_5->name, FUNC_5(VAR_5));

 FUNC_3(&VAR_6->restart_timer);
 VAR_7->channels_terminating = 0;
 FUNC_3(&VAR_7->timer);
 VAR_7->allochanfunc = ((void*)0);
 VAR_7->estconnfunc = ((void*)0);
 VAR_7->port_persist = 0;
 VAR_7->send_qllc_disc = 0;
 FUNC_4(VAR_7->fsm, VAR_2, VAR_5);

 FUNC_1(VAR_5);
 return;
}
