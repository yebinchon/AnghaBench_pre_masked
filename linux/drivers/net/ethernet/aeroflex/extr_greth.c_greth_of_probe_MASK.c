
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_13__ {int of_node; } ;
struct TYPE_10__ {int * irqs; } ;
struct platform_device {int * resource; TYPE_4__ dev; TYPE_1__ archdata; } ;
struct net_device {unsigned int* dev_addr; int hw_features; int features; int * ethtool_ops; TYPE_3__* netdev_ops; int flags; } ;
struct greth_regs {int status; int esa_lsb; int esa_msb; int control; int mdio; } ;
struct greth_private {int phyaddr; int gbit_mac; int multicast; int edcl; int mdio_int_en; struct greth_regs* regs; int mdio; int tx_bd_base_phys; void* tx_bd_base; TYPE_4__* dev; int rx_bd_base_phys; void* rx_bd_base; int napi; int irq; int devlock; scalar_t__ msg_enable; struct net_device* netdev; } ;
struct TYPE_12__ {int ndo_set_rx_mode; int ndo_start_xmit; } ;
struct TYPE_11__ {scalar_t__* id_ethaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__ const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct net_device*,TYPE_4__*) ;
 struct net_device* FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 int FUNC_8 (TYPE_4__*,struct net_device*) ;
 void* FUNC_9 (TYPE_4__*,int,int *,int ) ;
 int FUNC_10 (TYPE_4__*,int,void*,int ) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (struct greth_private*) ;
 TYPE_3__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__* VAR_19 ;
 int FUNC_13 (unsigned int*) ;
 int VAR_20 ;
 unsigned int* VAR_21 ;
 int FUNC_14 (int ) ;
 struct greth_private* FUNC_15 (struct net_device*) ;
 scalar_t__ FUNC_16 (struct greth_private*) ;
 int FUNC_17 (struct net_device*,int *,int ,int) ;
 scalar_t__* FUNC_18 (int ) ;
 struct greth_regs* FUNC_19 (int *,int ,int ,char*) ;
 int FUNC_20 (int *,struct greth_regs*,int ) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int,unsigned long) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_22)
{
 struct net_device *VAR_23;
 struct greth_private *VAR_24;
 struct greth_regs *VAR_25;

 int VAR_26;
 int VAR_27;
 int VAR_28;
 unsigned long VAR_29;

 VAR_23 = FUNC_5(sizeof(struct greth_private));

 if (VAR_23 == ((void*)0))
  return -VAR_2;

 VAR_24 = FUNC_15(VAR_23);
 VAR_24->netdev = VAR_23;
 VAR_24->dev = &VAR_22->dev;

 if (VAR_13 > 0)
  VAR_24->msg_enable = VAR_13;
 else
  VAR_24->msg_enable = VAR_5;

 FUNC_23(&VAR_24->devlock);

 VAR_24->regs = FUNC_19(&VAR_22->resource[0], 0,
     FUNC_22(&VAR_22->resource[0]),
     "grlib-greth regs");

 if (VAR_24->regs == ((void*)0)) {
  if (FUNC_16(VAR_24))
   FUNC_7(VAR_24->dev, "ioremap failure.\n");
  VAR_27 = -VAR_1;
  goto error1;
 }

 VAR_25 = VAR_24->regs;
 VAR_24->irq = VAR_22->archdata.irqs[0];

 FUNC_8(VAR_24->dev, VAR_23);
 FUNC_4(VAR_23, VAR_24->dev);

 if (FUNC_16(VAR_24))
  FUNC_6(VAR_24->dev, "resetting controller.\n");


 FUNC_2(VAR_25->control, VAR_6);


 VAR_29 = VAR_20 + VAR_7/100;
 while (FUNC_0(VAR_25->control) & VAR_6) {
  if (FUNC_24(VAR_20, VAR_29)) {
   VAR_27 = -VAR_1;
   if (FUNC_16(VAR_24))
    FUNC_7(VAR_24->dev, "timeout when waiting for reset.\n");
   goto error2;
  }
 }


 VAR_24->phyaddr = (FUNC_0(VAR_25->mdio) >> 11) & 0x1F;


 VAR_28 = FUNC_0(VAR_25->control);
 VAR_24->gbit_mac = (VAR_28 >> 27) & 1;


 VAR_24->multicast = (VAR_28 >> 25) & 1;

 VAR_24->edcl = (VAR_28 >> 31) & 1;



 if (VAR_24->edcl != 0)
  FUNC_1(VAR_25->control, VAR_4);


 VAR_24->mdio_int_en = (VAR_28 >> 26) & 1;

 VAR_27 = FUNC_12(VAR_24);
 if (VAR_27) {
  if (FUNC_16(VAR_24))
   FUNC_7(VAR_24->dev, "failed to register MDIO bus\n");
  goto error2;
 }


 VAR_24->tx_bd_base = FUNC_9(VAR_24->dev, 1024,
            &VAR_24->tx_bd_base_phys,
            VAR_3);
 if (!VAR_24->tx_bd_base) {
  VAR_27 = -VAR_2;
  goto error3;
 }


 VAR_24->rx_bd_base = FUNC_9(VAR_24->dev, 1024,
            &VAR_24->rx_bd_base_phys,
            VAR_3);
 if (!VAR_24->rx_bd_base) {
  VAR_27 = -VAR_2;
  goto error4;
 }


 for (VAR_26 = 0; VAR_26 < 6; VAR_26++) {
  if (VAR_21[VAR_26] != 0)
   break;
 }
 if (VAR_26 == 6) {
  const u8 *VAR_30;

  VAR_30 = FUNC_18(VAR_22->dev.of_node);
  if (!FUNC_3(VAR_30)) {
   for (VAR_26 = 0; VAR_26 < 6; VAR_26++)
    VAR_21[VAR_26] = (unsigned int) VAR_30[VAR_26];
  } else {




  }
 }

 for (VAR_26 = 0; VAR_26 < 6; VAR_26++)
  VAR_23->dev_addr[VAR_26] = VAR_21[VAR_26];

 VAR_21[5]++;

 if (!FUNC_13(&VAR_23->dev_addr[0])) {
  if (FUNC_16(VAR_24))
   FUNC_7(VAR_24->dev, "no valid ethernet address, aborting.\n");
  VAR_27 = -VAR_0;
  goto error5;
 }

 FUNC_2(VAR_25->esa_msb, VAR_23->dev_addr[0] << 8 | VAR_23->dev_addr[1]);
 FUNC_2(VAR_25->esa_lsb, VAR_23->dev_addr[2] << 24 | VAR_23->dev_addr[3] << 16 |
        VAR_23->dev_addr[4] << 8 | VAR_23->dev_addr[5]);


 FUNC_2(VAR_25->status, 0xFF);

 if (VAR_24->gbit_mac) {
  VAR_23->hw_features = VAR_12 | VAR_10 |
   VAR_11;
  VAR_23->features = VAR_23->hw_features | VAR_9;
  VAR_15.ndo_start_xmit = VAR_18;
 }

 if (VAR_24->multicast) {
  VAR_15.ndo_set_rx_mode = VAR_17;
  VAR_23->flags |= VAR_8;
 } else {
  VAR_23->flags &= ~VAR_8;
 }

 VAR_23->netdev_ops = &VAR_15;
 VAR_23->ethtool_ops = &VAR_14;

 VAR_27 = FUNC_21(VAR_23);
 if (VAR_27) {
  if (FUNC_16(VAR_24))
   FUNC_7(VAR_24->dev, "netdevice registration failed.\n");
  goto error5;
 }


 FUNC_17(VAR_23, &VAR_24->napi, VAR_16, 64);

 return 0;

error5:
 FUNC_10(VAR_24->dev, 1024, VAR_24->rx_bd_base, VAR_24->rx_bd_base_phys);
error4:
 FUNC_10(VAR_24->dev, 1024, VAR_24->tx_bd_base, VAR_24->tx_bd_base_phys);
error3:
 FUNC_14(VAR_24->mdio);
error2:
 FUNC_20(&VAR_22->resource[0], VAR_24->regs, FUNC_22(&VAR_22->resource[0]));
error1:
 FUNC_11(VAR_23);
 return VAR_27;
}
