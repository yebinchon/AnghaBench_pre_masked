
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id_mask; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct smc_private {TYPE_1__ mii_if; int lock; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {struct net_device* priv; int dev; } ;
struct net_device {int watchdog_timeo; int * ethtool_ops; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct smc_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_6)
{
    struct smc_private *VAR_7;
    struct net_device *VAR_8;

    FUNC_1(&VAR_6->dev, "smc91c92_attach()\n");


    VAR_8 = FUNC_0(sizeof(struct smc_private));
    if (!VAR_8)
 return -VAR_0;
    VAR_7 = FUNC_2(VAR_8);
    VAR_7->p_dev = VAR_6;
    VAR_6->priv = VAR_8;

    FUNC_4(&VAR_7->lock);


    VAR_8->netdev_ops = &VAR_5;
    VAR_8->ethtool_ops = &VAR_2;
    VAR_8->watchdog_timeo = VAR_1;

    VAR_7->mii_if.dev = VAR_8;
    VAR_7->mii_if.mdio_read = VAR_3;
    VAR_7->mii_if.mdio_write = VAR_4;
    VAR_7->mii_if.phy_id_mask = 0x1f;
    VAR_7->mii_if.reg_num_mask = 0x1f;

    return FUNC_3(VAR_6);
}
