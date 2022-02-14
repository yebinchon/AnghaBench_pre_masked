
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {struct channel** channel; TYPE_1__* mpcg; int restart_timer; } ;
struct channel {int fsm; } ;
typedef int fsm_instance ;
struct TYPE_2__ {scalar_t__ channels_terminating; } ;


 int FUNC_0 (int ,struct net_device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ctcm_priv*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct channel*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(fsm_instance *VAR_5, int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct ctcm_priv *VAR_9 = VAR_8->ml_priv;
 int VAR_10;

 FUNC_0(VAR_4, VAR_8, "");

 FUNC_2(&VAR_9->restart_timer);
 FUNC_4(VAR_5, VAR_3);
 if (FUNC_1(VAR_9))
  VAR_9->mpcg->channels_terminating = 0;
 for (VAR_10 = VAR_0; VAR_10 <= VAR_1; VAR_10++) {
  struct channel *VAR_11 = VAR_9->channel[VAR_10];
  FUNC_3(VAR_11->fsm, VAR_2, VAR_11);
 }
}
