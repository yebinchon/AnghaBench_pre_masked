
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;
struct gem {scalar_t__ phy_type; int tx_fifo_sz; int rx_fifo_sz; int swrst_base; int mii_phy_addr; scalar_t__ regs; int of_node; struct pci_dev* pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 char* FUNC_0 (int ,char*,int *) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (struct gem*,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct gem *VAR_23)
{
 struct pci_dev *VAR_24 = VAR_23->pdev;
 u32 VAR_25;





 if (VAR_24->vendor == VAR_13) {
  VAR_23->phy_type = VAR_19;
  VAR_23->tx_fifo_sz = FUNC_2(VAR_23->regs + VAR_18) * 64;
  VAR_23->rx_fifo_sz = FUNC_2(VAR_23->regs + VAR_17) * 64;
  VAR_23->swrst_base = 0;

  VAR_25 = FUNC_2(VAR_23->regs + VAR_3);
  VAR_25 &= ~(VAR_8|VAR_7|VAR_4|VAR_6);
  VAR_25 |= VAR_5;
  FUNC_5(VAR_25, VAR_23->regs + VAR_3);
  FUNC_5(VAR_16, VAR_23->regs + VAR_15);
  FUNC_5(VAR_2, VAR_23->regs + VAR_1);





  if (VAR_23->pdev->device == VAR_10)
   VAR_23->mii_phy_addr = 1;
  else
   VAR_23->mii_phy_addr = 0;

  return 0;
 }

 VAR_25 = FUNC_2(VAR_23->regs + VAR_3);

 if (VAR_24->vendor == VAR_14 &&
     VAR_24->device == VAR_12) {



  if ((VAR_25 & (VAR_5 | VAR_6)) == 0) {
   FUNC_1("RIO GEM lacks MII phy, mif_cfg[%08x]\n",
          VAR_25);
   return -1;
  }
 }





 if (VAR_25 & VAR_6) {
  VAR_23->phy_type = VAR_20;
  VAR_25 |= VAR_8;
  FUNC_5(VAR_25, VAR_23->regs + VAR_3);
 } else if (VAR_25 & VAR_5) {
  VAR_23->phy_type = VAR_19;
  VAR_25 &= ~VAR_8;
  FUNC_5(VAR_25, VAR_23->regs + VAR_3);
 } else {
   VAR_23->phy_type = VAR_22;
 }
 if (VAR_23->phy_type == VAR_20 ||
     VAR_23->phy_type == VAR_19) {
  int VAR_26;

  for (VAR_26 = 0; VAR_26 < 32; VAR_26++) {
   VAR_23->mii_phy_addr = VAR_26;
   if (FUNC_4(VAR_23, VAR_9) != 0xffff)
    break;
  }
  if (VAR_26 == 32) {
   if (VAR_24->device != VAR_11) {
    FUNC_1("RIO MII phy will not respond\n");
    return -1;
   }
   VAR_23->phy_type = VAR_21;
  }
 }


 VAR_23->tx_fifo_sz = FUNC_2(VAR_23->regs + VAR_18) * 64;
 VAR_23->rx_fifo_sz = FUNC_2(VAR_23->regs + VAR_17) * 64;

 if (VAR_24->vendor == VAR_14) {
  if (VAR_24->device == VAR_11) {
   if (VAR_23->tx_fifo_sz != (9 * 1024) ||
       VAR_23->rx_fifo_sz != (20 * 1024)) {
    FUNC_1("GEM has bogus fifo sizes tx(%d) rx(%d)\n",
           VAR_23->tx_fifo_sz, VAR_23->rx_fifo_sz);
    return -1;
   }
   VAR_23->swrst_base = 0;
  } else {
   if (VAR_23->tx_fifo_sz != (2 * 1024) ||
       VAR_23->rx_fifo_sz != (2 * 1024)) {
    FUNC_1("RIO GEM has bogus fifo sizes tx(%d) rx(%d)\n",
           VAR_23->tx_fifo_sz, VAR_23->rx_fifo_sz);
    return -1;
   }
   VAR_23->swrst_base = (64 / 4) << VAR_0;
  }
 }

 return 0;
}
