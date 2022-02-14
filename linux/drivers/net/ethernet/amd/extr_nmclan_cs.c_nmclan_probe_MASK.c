
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcmcia_device {int config_index; int config_regs; int config_flags; TYPE_1__** resource; struct net_device* priv; int dev; } ;
struct net_device {int watchdog_timeo; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_5__ {int tx_free_frames; int bank_lock; struct pcmcia_device* p_dev; } ;
typedef TYPE_2__ mace_private ;
struct TYPE_4__ {int end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_8)
{
    mace_private *VAR_9;
    struct net_device *VAR_10;

    FUNC_1(&VAR_8->dev, "nmclan_attach()\n");


    VAR_10 = FUNC_0(sizeof(mace_private));
    if (!VAR_10)
     return -VAR_2;
    VAR_9 = FUNC_2(VAR_10);
    VAR_9->p_dev = VAR_8;
    VAR_8->priv = VAR_10;

    FUNC_4(&VAR_9->bank_lock);
    VAR_8->resource[0]->end = 32;
    VAR_8->resource[0]->flags |= VAR_3;
    VAR_8->config_flags |= VAR_1;
    VAR_8->config_index = 1;
    VAR_8->config_regs = VAR_4;

    VAR_9->tx_free_frames=VAR_0;

    VAR_10->netdev_ops = &VAR_6;
    VAR_10->ethtool_ops = &VAR_7;
    VAR_10->watchdog_timeo = VAR_5;

    return FUNC_3(VAR_8);
}
