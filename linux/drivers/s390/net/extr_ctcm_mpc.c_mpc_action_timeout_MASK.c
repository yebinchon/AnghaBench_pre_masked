
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct mpc_group {int fsm; } ;
struct ctcm_priv {struct channel** channel; struct mpc_group* mpcg; } ;
struct channel {int fsm; } ;
typedef int fsm_instance ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_1 (int ,int ,struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(fsm_instance *VAR_7, int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct ctcm_priv *VAR_11;
 struct mpc_group *VAR_12;
 struct channel *VAR_13;
 struct channel *VAR_14;

 VAR_11 = VAR_10->ml_priv;
 VAR_12 = VAR_11->mpcg;
 VAR_13 = VAR_11->channel[VAR_3];
 VAR_14 = VAR_11->channel[VAR_2];

 switch (FUNC_2(VAR_12->fsm)) {
 case 128:



  if ((FUNC_2(VAR_14->fsm) == VAR_0) &&
     (FUNC_2(VAR_13->fsm) == VAR_0))
   break;

 default:
  FUNC_1(VAR_12->fsm, VAR_5, VAR_10);
 }

 FUNC_0(VAR_6, VAR_4,
   "%s: dev=%s exit",
   VAR_1, VAR_10->name);
 return;
}
