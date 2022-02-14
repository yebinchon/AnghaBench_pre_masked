
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int fsm; } ;
struct channel {int id; struct net_device* netdev; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,struct net_device*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(fsm_instance *VAR_5, int VAR_6, void *VAR_7)
{
 struct channel *VAR_8 = VAR_7;
 struct net_device *VAR_9 = VAR_8->netdev;
 struct ctcm_priv *VAR_10 = VAR_9->ml_priv;

 FUNC_0(VAR_4, VAR_1,
   "%s(%s): RX %s busy, init. fail",
    VAR_0, VAR_9->name, VAR_8->id);
 FUNC_2(VAR_5, VAR_2);
 FUNC_1(VAR_10->fsm, VAR_3, VAR_9);
}
