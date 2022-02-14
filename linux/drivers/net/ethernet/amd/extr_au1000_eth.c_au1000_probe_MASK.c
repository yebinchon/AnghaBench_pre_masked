
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {scalar_t__ start; } ;
struct platform_device {char* name; int id; int dev; } ;
struct net_device {int irq; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; scalar_t__ base_addr; int dev_addr; } ;
typedef scalar_t__ mac_reg ;
struct db_dest {scalar_t__ dma_addr; scalar_t__* vaddr; struct db_dest* pnext; } ;
struct au1000_private {int msg_enable; int mac_id; int phy1_search_mac0; size_t phy_addr; scalar_t__ phy_busid; int dma_addr; scalar_t__ vaddr; scalar_t__* mac; scalar_t__* enable; scalar_t__* macdma; TYPE_3__* mii_bus; struct db_dest** tx_db_inuse; struct db_dest** rx_db_inuse; TYPE_2__** tx_dma_ring; TYPE_1__** rx_dma_ring; struct db_dest* pDBfree; struct db_dest* db; scalar_t__ phy_irq; scalar_t__ phy_static_config; int phy_search_highest_addr; scalar_t__ mac_enabled; int lock; } ;
struct au1000_eth_platform_data {int phy1_search_mac0; size_t phy_addr; scalar_t__ phy_busid; scalar_t__ phy_irq; int phy_search_highest_addr; scalar_t__ phy_static_config; int mac; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_9__ {char* name; scalar_t__* irq; int id; int reset; int write; int read; struct net_device* priv; } ;
struct TYPE_8__ {unsigned int buff_stat; scalar_t__ len; } ;
struct TYPE_7__ {unsigned int buff_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 struct db_dest* FUNC_2 (struct au1000_private*) ;
 int FUNC_3 (struct au1000_private*,struct db_dest*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (struct net_device*) ;
 int VAR_22 ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct au1000_private*,scalar_t__*) ;
 int FUNC_7 (int *,char*) ;
 struct au1000_eth_platform_data* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *,int,int *,int ,int ) ;
 int FUNC_11 (int *,int,void*,int ,int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__* FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__*) ;
 scalar_t__ FUNC_16 (int ) ;
 TYPE_3__* FUNC_17 () ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (struct net_device*,char*) ;
 int FUNC_23 (struct net_device*,char*,unsigned long,int) ;
 struct au1000_private* FUNC_24 (struct net_device*) ;
 int FUNC_25 (struct platform_device*,int ) ;
 struct resource* FUNC_26 (struct platform_device*,int ,int) ;
 int FUNC_27 (struct platform_device*,struct net_device*) ;
 int FUNC_28 (char*,int ,int ,int ) ;
 int FUNC_29 (struct net_device*) ;
 int FUNC_30 (scalar_t__,int ) ;
 int FUNC_31 (scalar_t__,int ,char*) ;
 int FUNC_32 (struct resource*) ;
 int FUNC_33 (int ,int ,char*,char*,int) ;
 int FUNC_34 (int *) ;
 scalar_t__ FUNC_35 (scalar_t__*) ;
 int FUNC_36 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_37(struct platform_device *VAR_23)
{
 struct au1000_private *VAR_24 = ((void*)0);
 struct au1000_eth_platform_data *VAR_25;
 struct net_device *VAR_26 = ((void*)0);
 struct db_dest *VAR_27, *VAR_28;
 int VAR_29, VAR_30, VAR_31 = 0;
 struct resource *VAR_32, *VAR_33, *VAR_34;

 VAR_32 = FUNC_26(VAR_23, VAR_10, 0);
 if (!VAR_32) {
  FUNC_7(&VAR_23->dev, "failed to retrieve base register\n");
  VAR_31 = -VAR_5;
  goto out;
 }

 VAR_33 = FUNC_26(VAR_23, VAR_10, 1);
 if (!VAR_33) {
  FUNC_7(&VAR_23->dev, "failed to retrieve MAC Enable register\n");
  VAR_31 = -VAR_5;
  goto out;
 }

 VAR_29 = FUNC_25(VAR_23, 0);
 if (VAR_29 < 0) {
  VAR_31 = -VAR_5;
  goto out;
 }

 VAR_34 = FUNC_26(VAR_23, VAR_10, 2);
 if (!VAR_34) {
  FUNC_7(&VAR_23->dev, "failed to retrieve MACDMA registers\n");
  VAR_31 = -VAR_5;
  goto out;
 }

 if (!FUNC_31(VAR_32->start, FUNC_32(VAR_32),
       VAR_23->name)) {
  FUNC_7(&VAR_23->dev, "failed to request memory region for base registers\n");
  VAR_31 = -VAR_7;
  goto out;
 }

 if (!FUNC_31(VAR_33->start, FUNC_32(VAR_33),
       VAR_23->name)) {
  FUNC_7(&VAR_23->dev, "failed to request memory region for MAC enable register\n");
  VAR_31 = -VAR_7;
  goto err_request;
 }

 if (!FUNC_31(VAR_34->start, FUNC_32(VAR_34),
       VAR_23->name)) {
  FUNC_7(&VAR_23->dev, "failed to request MACDMA memory region\n");
  VAR_31 = -VAR_7;
  goto err_macdma;
 }

 VAR_26 = FUNC_1(sizeof(struct au1000_private));
 if (!VAR_26) {
  VAR_31 = -VAR_6;
  goto err_alloc;
 }

 FUNC_0(VAR_26, &VAR_23->dev);
 FUNC_27(VAR_23, VAR_26);
 VAR_24 = FUNC_24(VAR_26);

 FUNC_34(&VAR_24->lock);
 VAR_24->msg_enable = (VAR_17 < 4 ?
    VAR_0 : VAR_17);




 VAR_24->vaddr = (u32)FUNC_10(&VAR_23->dev, VAR_11 *
       (VAR_15 + VAR_13),
       &VAR_24->dma_addr, 0,
       VAR_1);
 if (!VAR_24->vaddr) {
  FUNC_7(&VAR_23->dev, "failed to allocate data buffers\n");
  VAR_31 = -VAR_6;
  goto err_vaddr;
 }


 VAR_24->mac = (struct mac_reg *)
   FUNC_14(VAR_32->start, FUNC_32(VAR_32));
 if (!VAR_24->mac) {
  FUNC_7(&VAR_23->dev, "failed to ioremap MAC registers\n");
  VAR_31 = -VAR_7;
  goto err_remap1;
 }


 VAR_24->enable = (u32 *)FUNC_14(VAR_33->start,
      FUNC_32(VAR_33));
 if (!VAR_24->enable) {
  FUNC_7(&VAR_23->dev, "failed to ioremap MAC enable register\n");
  VAR_31 = -VAR_7;
  goto err_remap2;
 }
 VAR_24->mac_id = VAR_23->id;

 VAR_24->macdma = FUNC_14(VAR_34->start, FUNC_32(VAR_34));
 if (!VAR_24->macdma) {
  FUNC_7(&VAR_23->dev, "failed to ioremap MACDMA registers\n");
  VAR_31 = -VAR_7;
  goto err_remap3;
 }

 FUNC_6(VAR_24, VAR_24->macdma);

 FUNC_36(0, VAR_24->enable);
 VAR_24->mac_enabled = 0;

 VAR_25 = FUNC_8(&VAR_23->dev);
 if (!VAR_25) {
  FUNC_9(&VAR_23->dev, "no platform_data passed,"
     " PHY search on MAC0\n");
  VAR_24->phy1_search_mac0 = 1;
 } else {
  if (FUNC_16(VAR_25->mac)) {
   FUNC_21(VAR_26->dev_addr, VAR_25->mac, VAR_8);
  } else {

   FUNC_12(VAR_26);
  }

  VAR_24->phy_static_config = VAR_25->phy_static_config;
  VAR_24->phy_search_highest_addr = VAR_25->phy_search_highest_addr;
  VAR_24->phy1_search_mac0 = VAR_25->phy1_search_mac0;
  VAR_24->phy_addr = VAR_25->phy_addr;
  VAR_24->phy_busid = VAR_25->phy_busid;
  VAR_24->phy_irq = VAR_25->phy_irq;
 }

 if (VAR_24->phy_busid > 0) {
  FUNC_7(&VAR_23->dev, "MAC0-associated PHY attached 2nd MACs MII bus not supported yet\n");
  VAR_31 = -VAR_5;
  goto err_mdiobus_alloc;
 }

 VAR_24->mii_bus = FUNC_17();
 if (VAR_24->mii_bus == ((void*)0)) {
  FUNC_7(&VAR_23->dev, "failed to allocate mdiobus structure\n");
  VAR_31 = -VAR_6;
  goto err_mdiobus_alloc;
 }

 VAR_24->mii_bus->priv = VAR_26;
 VAR_24->mii_bus->read = VAR_19;
 VAR_24->mii_bus->write = VAR_21;
 VAR_24->mii_bus->reset = VAR_20;
 VAR_24->mii_bus->name = "au1000_eth_mii";
 FUNC_33(VAR_24->mii_bus->id, VAR_12, "%s-%x",
  VAR_23->name, VAR_24->mac_id);


 if (VAR_24->phy_static_config)
  if (VAR_24->phy_irq && VAR_24->phy_busid == VAR_24->mac_id)
   VAR_24->mii_bus->irq[VAR_24->phy_addr] = VAR_24->phy_irq;

 VAR_31 = FUNC_19(VAR_24->mii_bus);
 if (VAR_31) {
  FUNC_7(&VAR_23->dev, "failed to register MDIO bus\n");
  goto err_mdiobus_reg;
 }

 VAR_31 = FUNC_4(VAR_26);
 if (VAR_31 != 0)
  goto err_out;

 VAR_28 = ((void*)0);

 VAR_27 = VAR_24->db;
 for (VAR_30 = 0; VAR_30 < (VAR_15+VAR_13); VAR_30++) {
  VAR_27->pnext = VAR_28;
  VAR_28 = VAR_27;
  VAR_27->vaddr = (u32 *)((unsigned)VAR_24->vaddr + VAR_11*VAR_30);
  VAR_27->dma_addr = (dma_addr_t)FUNC_35(VAR_27->vaddr);
  VAR_27++;
 }
 VAR_24->pDBfree = VAR_28;

 VAR_31 = -VAR_5;
 for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
  VAR_27 = FUNC_2(VAR_24);
  if (!VAR_27)
   goto err_out;

  VAR_24->rx_dma_ring[VAR_30]->buff_stat = (unsigned)VAR_27->dma_addr;
  VAR_24->rx_db_inuse[VAR_30] = VAR_27;
 }

 VAR_31 = -VAR_5;
 for (VAR_30 = 0; VAR_30 < VAR_16; VAR_30++) {
  VAR_27 = FUNC_2(VAR_24);
  if (!VAR_27)
   goto err_out;

  VAR_24->tx_dma_ring[VAR_30]->buff_stat = (unsigned)VAR_27->dma_addr;
  VAR_24->tx_dma_ring[VAR_30]->len = 0;
  VAR_24->tx_db_inuse[VAR_30] = VAR_27;
 }

 VAR_26->base_addr = VAR_32->start;
 VAR_26->irq = VAR_29;
 VAR_26->netdev_ops = &VAR_22;
 VAR_26->ethtool_ops = &VAR_18;
 VAR_26->watchdog_timeo = VAR_9;





 FUNC_5(VAR_26);

 VAR_31 = FUNC_29(VAR_26);
 if (VAR_31) {
  FUNC_22(VAR_26, "Cannot register net device, aborting.\n");
  goto err_out;
 }

 FUNC_23(VAR_26, "Au1xx0 Ethernet found at 0x%lx, irq %d\n",
   (unsigned long)VAR_32->start, VAR_29);

 FUNC_28("%s version %s %s\n", VAR_3, VAR_4, VAR_2);

 return 0;

err_out:
 if (VAR_24->mii_bus != ((void*)0))
  FUNC_20(VAR_24->mii_bus);




 FUNC_5(VAR_26);

 for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
  if (VAR_24->rx_db_inuse[VAR_30])
   FUNC_3(VAR_24, VAR_24->rx_db_inuse[VAR_30]);
 }
 for (VAR_30 = 0; VAR_30 < VAR_16; VAR_30++) {
  if (VAR_24->tx_db_inuse[VAR_30])
   FUNC_3(VAR_24, VAR_24->tx_db_inuse[VAR_30]);
 }
err_mdiobus_reg:
 FUNC_18(VAR_24->mii_bus);
err_mdiobus_alloc:
 FUNC_15(VAR_24->macdma);
err_remap3:
 FUNC_15(VAR_24->enable);
err_remap2:
 FUNC_15(VAR_24->mac);
err_remap1:
 FUNC_11(&VAR_23->dev, VAR_11 * (VAR_15 + VAR_13),
   (void *)VAR_24->vaddr, VAR_24->dma_addr,
   VAR_1);
err_vaddr:
 FUNC_13(VAR_26);
err_alloc:
 FUNC_30(VAR_34->start, FUNC_32(VAR_34));
err_macdma:
 FUNC_30(VAR_33->start, FUNC_32(VAR_33));
err_request:
 FUNC_30(VAR_32->start, FUNC_32(VAR_32));
out:
 return VAR_31;
}
