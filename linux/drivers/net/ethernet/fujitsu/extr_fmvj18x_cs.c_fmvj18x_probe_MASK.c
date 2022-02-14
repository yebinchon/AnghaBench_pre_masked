
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_flags; TYPE_1__** resource; struct net_device* priv; int dev; } ;
struct net_device {int * ethtool_ops; int watchdog_timeo; int * netdev_ops; } ;
struct local_info {int * base; struct pcmcia_device* p_dev; } ;
struct TYPE_2__ {int end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;
 int FUNC_2 (struct pcmcia_device*) ;
 int VAR_5 ;
 struct local_info* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_6)
{
    struct local_info *VAR_7;
    struct net_device *VAR_8;

    FUNC_1(&VAR_6->dev, "fmvj18x_attach()\n");


    VAR_8 = FUNC_0(sizeof(struct local_info));
    if (!VAR_8)
 return -VAR_1;
    VAR_7 = FUNC_3(VAR_8);
    VAR_6->priv = VAR_8;
    VAR_7->p_dev = VAR_6;
    VAR_7->base = ((void*)0);


    VAR_6->resource[0]->end = 32;
    VAR_6->resource[0]->flags |= VAR_2;


    VAR_6->config_flags |= VAR_0;

    VAR_8->netdev_ops = &VAR_4;
    VAR_8->watchdog_timeo = VAR_3;

    VAR_8->ethtool_ops = &VAR_5;

    return FUNC_2(VAR_6);
}
