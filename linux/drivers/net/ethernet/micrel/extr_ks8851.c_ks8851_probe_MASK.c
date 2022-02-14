
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct spi_device {int bits_per_word; TYPE_3__ dev; int irq; } ;
struct net_device {int irq; int dev_addr; int * netdev_ops; int if_port; int * ethtool_ops; } ;
struct TYPE_9__ {int phy_id; int phy_id_mask; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct TYPE_8__ {int register_write; int register_read; int width; struct ks8851_net* data; } ;
struct ks8851_net {int tx_space; int gpio; int rc_ccr; void* vdd_io; void* vdd_reg; struct net_device* netdev; int txq; int msg_enable; TYPE_2__ mii; TYPE_1__ eeprom; int spi_msg2; int * spi_xfer2; int spi_msg1; int spi_xfer1; int rxctrl_work; int tx_work; int statelock; int lock; struct spi_device* spidev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct net_device*,TYPE_3__*) ;
 struct net_device* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int FUNC_7 (TYPE_3__*,char*,int ) ;
 int FUNC_8 (TYPE_3__*,int,int ,char*) ;
 void* FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (struct ks8851_net*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_14 (struct ks8851_net*,int ) ;
 int FUNC_15 (struct ks8851_net*) ;
 int VAR_21 ;
 int FUNC_16 (struct ks8851_net*,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct net_device*,char*,int ,int ,int ,char*) ;
 struct ks8851_net* FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,char*,int ,int *) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (void*) ;
 int FUNC_25 (void*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct spi_device*,struct ks8851_net*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int,int) ;

__attribute__((used)) static int FUNC_32(struct spi_device *VAR_24)
{
 struct net_device *VAR_25;
 struct ks8851_net *VAR_26;
 int VAR_27;
 unsigned VAR_28;
 int VAR_29;

 VAR_25 = FUNC_5(sizeof(struct ks8851_net));
 if (!VAR_25)
  return -VAR_4;

 VAR_24->bits_per_word = 8;

 VAR_26 = FUNC_19(VAR_25);

 VAR_26->netdev = VAR_25;
 VAR_26->spidev = VAR_24;
 VAR_26->tx_space = 6144;

 VAR_29 = FUNC_22(VAR_24->dev.of_node, "reset-gpios",
           0, ((void*)0));
 if (VAR_29 == -VAR_5) {
  VAR_27 = VAR_29;
  goto err_gpio;
 }

 VAR_26->gpio = VAR_29;
 if (FUNC_11(VAR_29)) {
  VAR_27 = FUNC_8(&VAR_24->dev, VAR_29,
         VAR_6, "ks8851_rst_n");
  if (VAR_27) {
   FUNC_6(&VAR_24->dev, "reset gpio request failed\n");
   goto err_gpio;
  }
 }

 VAR_26->vdd_io = FUNC_9(&VAR_24->dev, "vdd-io");
 if (FUNC_2(VAR_26->vdd_io)) {
  VAR_27 = FUNC_3(VAR_26->vdd_io);
  goto err_reg_io;
 }

 VAR_27 = FUNC_25(VAR_26->vdd_io);
 if (VAR_27) {
  FUNC_6(&VAR_24->dev, "regulator vdd_io enable fail: %d\n",
   VAR_27);
  goto err_reg_io;
 }

 VAR_26->vdd_reg = FUNC_9(&VAR_24->dev, "vdd");
 if (FUNC_2(VAR_26->vdd_reg)) {
  VAR_27 = FUNC_3(VAR_26->vdd_reg);
  goto err_reg;
 }

 VAR_27 = FUNC_25(VAR_26->vdd_reg);
 if (VAR_27) {
  FUNC_6(&VAR_24->dev, "regulator vdd enable fail: %d\n",
   VAR_27);
  goto err_reg;
 }

 if (FUNC_11(VAR_29)) {
  FUNC_31(10000, 11000);
  FUNC_12(VAR_29, 1);
 }

 FUNC_17(&VAR_26->lock);
 FUNC_30(&VAR_26->statelock);

 FUNC_1(&VAR_26->tx_work, VAR_22);
 FUNC_1(&VAR_26->rxctrl_work, VAR_21);



 FUNC_28(&VAR_26->spi_msg1);
 FUNC_27(&VAR_26->spi_xfer1, &VAR_26->spi_msg1);

 FUNC_28(&VAR_26->spi_msg2);
 FUNC_27(&VAR_26->spi_xfer2[0], &VAR_26->spi_msg2);
 FUNC_27(&VAR_26->spi_xfer2[1], &VAR_26->spi_msg2);



 VAR_26->eeprom.data = VAR_26;
 VAR_26->eeprom.width = VAR_14;
 VAR_26->eeprom.register_read = VAR_15;
 VAR_26->eeprom.register_write = VAR_16;


 VAR_26->mii.dev = VAR_25;
 VAR_26->mii.phy_id = 1,
 VAR_26->mii.phy_id_mask = 1;
 VAR_26->mii.reg_num_mask = 0xf;
 VAR_26->mii.mdio_read = VAR_19;
 VAR_26->mii.mdio_write = VAR_20;

 FUNC_7(&VAR_24->dev, "message enable is %d\n", VAR_23);


 VAR_26->msg_enable = FUNC_21(VAR_23, (VAR_11 |
           VAR_13 |
           VAR_12));

 FUNC_26(&VAR_26->txq);

 VAR_25->ethtool_ops = &VAR_17;
 FUNC_4(VAR_25, &VAR_24->dev);

 FUNC_29(VAR_24, VAR_26);

 FUNC_20(VAR_26->netdev);
 VAR_25->if_port = VAR_8;
 VAR_25->netdev_ops = &VAR_18;
 VAR_25->irq = VAR_24->irq;


 FUNC_16(VAR_26, VAR_7);


 VAR_28 = FUNC_14(VAR_26, VAR_10);
 if ((VAR_28 & ~VAR_2) != VAR_1) {
  FUNC_6(&VAR_24->dev, "failed to read device ID\n");
  VAR_27 = -VAR_3;
  goto err_id;
 }


 VAR_26->rc_ccr = FUNC_14(VAR_26, VAR_9);

 FUNC_15(VAR_26);
 FUNC_13(VAR_26);

 VAR_27 = FUNC_23(VAR_25);
 if (VAR_27) {
  FUNC_6(&VAR_24->dev, "failed to register network device\n");
  goto err_netdev;
 }

 FUNC_18(VAR_25, "revision %d, MAC %pM, IRQ %d, %s EEPROM\n",
      FUNC_0(VAR_28), VAR_25->dev_addr, VAR_25->irq,
      VAR_26->rc_ccr & VAR_0 ? "has" : "no");

 return 0;

err_netdev:
err_id:
 if (FUNC_11(VAR_29))
  FUNC_12(VAR_29, 0);
 FUNC_24(VAR_26->vdd_reg);
err_reg:
 FUNC_24(VAR_26->vdd_io);
err_reg_io:
err_gpio:
 FUNC_10(VAR_25);
 return VAR_27;
}
