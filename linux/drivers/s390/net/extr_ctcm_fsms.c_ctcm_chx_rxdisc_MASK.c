
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {struct channel** channel; int fsm; } ;
struct channel {int cdev; int * fsm; int timer; struct net_device* netdev; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ,int ,char*,int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct net_device*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(fsm_instance *VAR_7, int VAR_8, void *VAR_9)
{
 struct channel *VAR_10 = VAR_9;
 struct channel *VAR_11;
 struct net_device *VAR_12 = VAR_10->netdev;
 struct ctcm_priv *VAR_13 = VAR_12->ml_priv;

 FUNC_0(VAR_6, VAR_2,
   "%s: %s: remote disconnect - re-init ...",
    VAR_0, VAR_12->name);
 FUNC_2(&VAR_10->timer);



 FUNC_3(VAR_13->fsm, VAR_4, VAR_12);
 FUNC_3(VAR_13->fsm, VAR_5, VAR_12);

 FUNC_4(VAR_7, VAR_3);
 VAR_11 = VAR_13->channel[VAR_1];
 FUNC_4(VAR_11->fsm, VAR_3);

 FUNC_1(VAR_10->cdev, 0);
 FUNC_1(VAR_11->cdev, 0);
}
