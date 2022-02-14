
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct mpc_group {int send_qllc_disc; int port_persist; int mpc_tasklet2; scalar_t__ estconn_called; scalar_t__ out_of_sequence; int fsm; scalar_t__ allochanfunc; int (* estconnfunc ) (int ,int,int ) ;int group_max_buflen; int port_num; TYPE_1__* saved_xid2; int timer; } ;
struct ctcm_priv {TYPE_2__* xid; struct mpc_group* mpcg; } ;
typedef int fsm_instance ;
struct TYPE_4__ {int xid2_flag2; } ;
struct TYPE_3__ {int xid2_flag2; } ;


 int FUNC_0 (int ,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,struct net_device*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(fsm_instance *VAR_4, int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct ctcm_priv *VAR_8 = VAR_7->ml_priv;
 struct mpc_group *VAR_9 = VAR_8->mpcg;

 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_1,
   "%s(%s): No MPC group",
    VAR_0, VAR_7->name);
  return;
 }

 FUNC_1(&VAR_9->timer);

 if (VAR_9->saved_xid2->xid2_flag2 == 0x40) {
  VAR_8->xid->xid2_flag2 = 0x00;
  if (VAR_9->estconnfunc) {
   VAR_9->estconnfunc(VAR_9->port_num, 1,
     VAR_9->group_max_buflen);
   VAR_9->estconnfunc = ((void*)0);
  } else if (VAR_9->allochanfunc)
   VAR_9->send_qllc_disc = 1;

  FUNC_2(VAR_9->fsm, VAR_2, VAR_7);
  FUNC_0(VAR_3, VAR_1,
    "%s(%s): fails",
     VAR_0, VAR_7->name);
  return;
 }

 VAR_9->port_persist = 1;
 VAR_9->out_of_sequence = 0;
 VAR_9->estconn_called = 0;

 FUNC_4(&VAR_9->mpc_tasklet2);

 return;
}
