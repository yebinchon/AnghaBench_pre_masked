
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct ctcm_priv* ml_priv; int name; } ;
struct mpc_group {int mpc_tasklet2; int rcvd_xid_skb; int xid_skb; int * fsm; } ;
struct ctcm_priv {struct mpc_group* xid; int * fsm; struct mpc_group* mpcg; } ;


 int FUNC_0 (int ,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mpc_group*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct ctcm_priv *VAR_4;
 struct mpc_group *VAR_5;

 FUNC_0(VAR_2, VAR_1,
   "%s(%s)", VAR_0, VAR_3->name);
 VAR_4 = VAR_3->ml_priv;
 if (VAR_4) {
  VAR_5 = VAR_4->mpcg;
  if (VAR_5) {
   if (VAR_5->fsm)
    FUNC_4(VAR_5->fsm);
   FUNC_1(VAR_5->xid_skb);
   FUNC_1(VAR_5->rcvd_xid_skb);
   FUNC_5(&VAR_5->mpc_tasklet2);
   FUNC_3(VAR_5);
   VAR_4->mpcg = ((void*)0);
  }
  if (VAR_4->fsm) {
   FUNC_4(VAR_4->fsm);
   VAR_4->fsm = ((void*)0);
  }
  FUNC_3(VAR_4->xid);
  VAR_4->xid = ((void*)0);




 }



}
