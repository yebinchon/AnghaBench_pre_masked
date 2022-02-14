
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct mpc_group {void (* allochanfunc ) (int,int) ;int port_num; int port_persist; int alloc_called; int send_qllc_disc; int allocchan_callback_retries; int group_max_buflen; int fsm; int * saved_xid2; int outstanding_xid7_p2; int outstanding_xid7; int outstanding_xid2; int timer; } ;
struct ctcm_priv {int fsm; struct mpc_group* mpcg; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void FUNC_7 (int,int) ;

int FUNC_8(int VAR_5, void (*VAR_6)(int, int))
{
 struct net_device *VAR_7;
 struct mpc_group *VAR_8;
 struct ctcm_priv *VAR_9;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 == ((void*)0))
  return 1;
 VAR_9 = VAR_7->ml_priv;
 VAR_8 = VAR_9->mpcg;

 VAR_8->allochanfunc = VAR_6;
 VAR_8->port_num = VAR_5;
 VAR_8->port_persist = 1;

 FUNC_0(VAR_4, VAR_1,
   "%s(%s): state=%s",
   VAR_0, VAR_7->name, FUNC_6(VAR_8->fsm));

 switch (FUNC_5(VAR_8->fsm)) {
 case 131:

  VAR_8->alloc_called = 1;
  break;
 case 129:





  if (VAR_6)
   VAR_8->send_qllc_disc = 1;

 case 128:
  FUNC_3(&VAR_8->timer);
  VAR_8->outstanding_xid2 = 0;
  VAR_8->outstanding_xid7 = 0;
  VAR_8->outstanding_xid7_p2 = 0;
  VAR_8->saved_xid2 = ((void*)0);
  if (VAR_6)
   FUNC_1(VAR_7);
  FUNC_4(VAR_9->fsm, VAR_2, VAR_7);
  break;
 case 130:



  VAR_8->allocchan_callback_retries++;
  if (VAR_8->allocchan_callback_retries < 4) {
   if (VAR_8->allochanfunc)
    VAR_8->allochanfunc(VAR_8->port_num,
        VAR_8->group_max_buflen);
  } else {


   FUNC_4(VAR_8->fsm, VAR_3, VAR_7);
   VAR_8->allocchan_callback_retries = 0;
  }
  break;
 }

 return 0;
}
