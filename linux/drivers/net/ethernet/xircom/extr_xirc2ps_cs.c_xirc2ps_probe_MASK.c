
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int config_index; struct net_device* priv; int dev; } ;
struct net_device {int watchdog_timeo; int * ethtool_ops; int * netdev_ops; } ;
struct local_info {int tx_timeout_task; struct pcmcia_device* p_dev; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct local_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct pcmcia_device *VAR_5)
{
    struct net_device *VAR_6;
    struct local_info *VAR_7;

    FUNC_2(&VAR_5->dev, "attach()\n");


    VAR_6 = FUNC_1(sizeof(struct local_info));
    if (!VAR_6)
     return -VAR_0;
    VAR_7 = FUNC_3(VAR_6);
    VAR_7->dev = VAR_6;
    VAR_7->p_dev = VAR_5;
    VAR_5->priv = VAR_6;


    VAR_5->config_index = 1;


    VAR_6->netdev_ops = &VAR_3;
    VAR_6->ethtool_ops = &VAR_2;
    VAR_6->watchdog_timeo = VAR_1;
    FUNC_0(&VAR_7->tx_timeout_task, VAR_4);

    return FUNC_4(VAR_5);
}
