
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int irq; int dev; } ;
struct net_device {int * ethtool_ops; int watchdog_timeo; int * netdev_ops; int irq; int if_port; int dev_addr; } ;
struct enc28j60_net {int restart_work; int irq_work; int setrx_work; int tx_work; int lock; int msg_enable; struct spi_device* spi; struct net_device* netdev; } ;
typedef int macaddr ;
struct TYPE_3__ {int msg_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_7 ;
 struct net_device* FUNC_2 (int) ;
 TYPE_1__ VAR_8 ;
 int FUNC_3 (int *,char*,int,...) ;
 int FUNC_4 (int *,char*,...) ;
 scalar_t__ FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct enc28j60_net*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct net_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,unsigned char*) ;
 int FUNC_11 (int ,struct enc28j60_net*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;
 struct enc28j60_net* FUNC_14 (struct net_device*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (struct enc28j60_net*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int ,int ,int ,int ,struct enc28j60_net*) ;
 int FUNC_20 (struct spi_device*,struct enc28j60_net*) ;

__attribute__((used)) static int FUNC_21(struct spi_device *VAR_16)
{
 unsigned char VAR_17[VAR_5];
 struct net_device *VAR_18;
 struct enc28j60_net *VAR_19;
 int VAR_20 = 0;

 if (FUNC_15(&VAR_8))
  FUNC_4(&VAR_16->dev, "Ethernet driver %s loaded\n", VAR_1);

 VAR_18 = FUNC_2(sizeof(struct enc28j60_net));
 if (!VAR_18) {
  VAR_20 = -VAR_4;
  goto error_alloc;
 }
 VAR_19 = FUNC_14(VAR_18);

 VAR_19->netdev = VAR_18;
 VAR_19->spi = VAR_16;
 VAR_19->msg_enable = FUNC_16(VAR_8.msg_enable, VAR_3);
 FUNC_13(&VAR_19->lock);
 FUNC_0(&VAR_19->tx_work, VAR_15);
 FUNC_0(&VAR_19->setrx_work, VAR_14);
 FUNC_0(&VAR_19->irq_work, VAR_11);
 FUNC_0(&VAR_19->restart_work, VAR_13);
 FUNC_20(VAR_16, VAR_19);
 FUNC_1(VAR_18, &VAR_16->dev);

 if (!FUNC_6(VAR_18)) {
  if (FUNC_17(VAR_19))
   FUNC_4(&VAR_16->dev, "chip not found\n");
  VAR_20 = -VAR_2;
  goto error_irq;
 }

 if (FUNC_5(&VAR_16->dev, VAR_17, sizeof(VAR_17)))
  FUNC_10(VAR_18->dev_addr, VAR_17);
 else
  FUNC_9(VAR_18);
 FUNC_8(VAR_18);




 VAR_20 = FUNC_19(VAR_16->irq, VAR_10, 0, VAR_0, VAR_19);
 if (VAR_20 < 0) {
  if (FUNC_17(VAR_19))
   FUNC_3(&VAR_16->dev, "request irq %d failed (ret = %d)\n",
    VAR_16->irq, VAR_20);
  goto error_irq;
 }

 VAR_18->if_port = VAR_6;
 VAR_18->irq = VAR_16->irq;
 VAR_18->netdev_ops = &VAR_12;
 VAR_18->watchdog_timeo = VAR_7;
 VAR_18->ethtool_ops = &VAR_9;

 FUNC_7(VAR_19, 1);

 VAR_20 = FUNC_18(VAR_18);
 if (VAR_20) {
  if (FUNC_17(VAR_19))
   FUNC_3(&VAR_16->dev, "register netdev failed (ret = %d)\n",
    VAR_20);
  goto error_register;
 }

 return 0;

error_register:
 FUNC_11(VAR_16->irq, VAR_19);
error_irq:
 FUNC_12(VAR_18);
error_alloc:
 return VAR_20;
}
