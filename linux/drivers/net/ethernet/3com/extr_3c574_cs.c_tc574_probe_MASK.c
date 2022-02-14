
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_index; int config_flags; TYPE_1__** resource; struct net_device* priv; int dev; } ;
struct net_device {int watchdog_timeo; int * netdev_ops; } ;
struct el3_private {int window_lock; struct pcmcia_device* p_dev; } ;
struct TYPE_2__ {int end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;
 struct el3_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_5)
{
 struct el3_private *VAR_6;
 struct net_device *VAR_7;

 FUNC_1(&VAR_5->dev, "3c574_attach()\n");


 VAR_7 = FUNC_0(sizeof(struct el3_private));
 if (!VAR_7)
  return -VAR_1;
 VAR_6 = FUNC_2(VAR_7);
 VAR_5->priv = VAR_7;
 VAR_6->p_dev = VAR_5;

 FUNC_3(&VAR_6->window_lock);
 VAR_5->resource[0]->end = 32;
 VAR_5->resource[0]->flags |= VAR_2;
 VAR_5->config_flags |= VAR_0;
 VAR_5->config_index = 1;

 VAR_7->netdev_ops = &VAR_4;
 VAR_7->watchdog_timeo = VAR_3;

 return FUNC_4(VAR_5);
}
