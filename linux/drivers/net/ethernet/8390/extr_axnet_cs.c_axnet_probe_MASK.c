
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int config_flags; struct net_device* priv; int dev; } ;
struct net_device {int watchdog_timeo; int * netdev_ops; } ;
struct ei_device {int page_lock; } ;
struct axnet_dev {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct axnet_dev* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int VAR_3 ;
 int FUNC_3 (int *,char*) ;
 struct ei_device* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_4)
{
    struct axnet_dev *VAR_5;
    struct net_device *VAR_6;
    struct ei_device *VAR_7;

    FUNC_3(&VAR_4->dev, "axnet_attach()\n");

    VAR_6 = FUNC_1(sizeof(struct ei_device) + sizeof(struct axnet_dev));
    if (!VAR_6)
 return -VAR_1;

    VAR_7 = FUNC_4(VAR_6);
    FUNC_5(&VAR_7->page_lock);

    VAR_5 = FUNC_0(VAR_6);
    VAR_5->p_dev = VAR_4;
    VAR_4->priv = VAR_6;
    VAR_4->config_flags |= VAR_0;

    VAR_6->netdev_ops = &VAR_3;

    VAR_6->watchdog_timeo = VAR_2;

    return FUNC_2(VAR_4);
}
