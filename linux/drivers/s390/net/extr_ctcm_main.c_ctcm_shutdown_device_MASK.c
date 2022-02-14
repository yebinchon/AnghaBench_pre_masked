
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct ctcm_priv {TYPE_1__** channel; scalar_t__ fsm; } ;
struct ccwgroup_device {int * cdev; int dev; } ;
struct TYPE_3__ {struct net_device* netdev; } ;


 int FUNC_0 (int ,struct net_device*,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct ctcm_priv* FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct ccwgroup_device *VAR_5)
{
 struct ctcm_priv *VAR_6;
 struct net_device *VAR_7;

 VAR_6 = FUNC_6(&VAR_5->dev);
 if (!VAR_6)
  return -VAR_2;

 if (VAR_6->channel[VAR_0]) {
  VAR_7 = VAR_6->channel[VAR_0]->netdev;
  FUNC_0(VAR_4, VAR_7, "");

  FUNC_4(VAR_7);
  VAR_7->flags &= ~VAR_3;
  FUNC_2(VAR_6->channel[VAR_0]);
 } else
  VAR_7 = ((void*)0);

 if (VAR_6->channel[VAR_1])
  FUNC_2(VAR_6->channel[VAR_1]);

 if (VAR_7) {
  FUNC_8(VAR_7);
  FUNC_5(VAR_7);
 }

 if (VAR_6->fsm)
  FUNC_7(VAR_6->fsm);

 FUNC_1(VAR_5->cdev[1]);
 FUNC_1(VAR_5->cdev[0]);
 FUNC_3(VAR_6->channel[VAR_0]);
 FUNC_3(VAR_6->channel[VAR_1]);
 VAR_6->channel[VAR_0] = VAR_6->channel[VAR_1] = ((void*)0);

 return 0;

}
