
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev; struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int restart_timer; TYPE_1__* mpcg; int fsm; } ;
typedef int fsm_instance ;
struct TYPE_2__ {int fsm; } ;


 int FUNC_0 (int ,struct net_device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ctcm_priv*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int,void*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int ,struct net_device*) ;
 int FUNC_5 (int ,int ,struct net_device*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(fsm_instance *VAR_6, int VAR_7, void *VAR_8)
{
 int VAR_9;
 struct net_device *VAR_10 = VAR_8;
 struct ctcm_priv *VAR_11 = VAR_10->ml_priv;

 FUNC_0(VAR_5, VAR_10, "");

 if (FUNC_1(VAR_11)) {
  VAR_9 = VAR_0;
 } else {
  VAR_9 = VAR_1;
 }
 FUNC_3(&VAR_10->dev, "Restarting device\n");

 FUNC_2(VAR_6, VAR_7, VAR_8);
 FUNC_5(VAR_11->fsm, VAR_3, VAR_10);
 if (FUNC_1(VAR_11))
  FUNC_6(VAR_11->mpcg->fsm, VAR_4);




 FUNC_4(&VAR_11->restart_timer, VAR_9,
   VAR_2, VAR_10);
}
