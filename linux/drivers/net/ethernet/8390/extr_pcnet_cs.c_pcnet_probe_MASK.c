
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet_dev {struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int config_flags; struct net_device* priv; int dev; } ;
struct net_device {int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcnet_dev* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_4)
{
    struct pcnet_dev *VAR_5;
    struct net_device *VAR_6;

    FUNC_2(&VAR_4->dev, "pcnet_attach()\n");


    VAR_6 = FUNC_1(sizeof(struct pcnet_dev));
    if (!VAR_6) return -VAR_2;
    VAR_5 = FUNC_0(VAR_6);
    VAR_5->p_dev = VAR_4;
    VAR_4->priv = VAR_6;

    VAR_4->config_flags |= VAR_1 | VAR_0;

    VAR_6->netdev_ops = &VAR_3;

    return FUNC_3(VAR_4);
}
