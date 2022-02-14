
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int devfn; } ;
struct page {int dummy; } ;
struct cas {int page_order; int page_size; int tx_fifo_size; int phy_type; int phy_addr; int phy_id; int cas_flags; scalar_t__ regs; TYPE_1__* dev; int rx_fifo_size; struct pci_dev* pdev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct page*,scalar_t__) ;
 struct page* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct cas*,int ,int ) ;
 int FUNC_4 (struct cas*,int ) ;
 int FUNC_5 (struct cas*,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct cas *VAR_22)
{
 struct pci_dev *VAR_23 = VAR_22->pdev;
 u32 VAR_24;
 int VAR_25;


 VAR_22->page_order = 0;
 VAR_22->page_size = (VAR_15 << VAR_22->page_order);


 VAR_22->tx_fifo_size = FUNC_8(VAR_22->regs + VAR_20) * 64;
 VAR_22->rx_fifo_size = VAR_21;




 VAR_22->phy_type = FUNC_3(VAR_22, VAR_22->dev->dev_addr,
     FUNC_0(VAR_23->devfn));
 if (VAR_22->phy_type & VAR_7) {
  VAR_22->cas_flags |= VAR_1;
  return 0;
 }


 VAR_24 = FUNC_8(VAR_22->regs + VAR_17);
 if (VAR_24 & VAR_10) {
  VAR_22->phy_type = VAR_6;
 } else if (VAR_24 & VAR_9) {
  VAR_22->phy_type = VAR_5;
 }

 FUNC_4(VAR_22, 0);
 FUNC_9(VAR_16, VAR_22->regs + VAR_19);

 for (VAR_25 = 0; VAR_25 < 32; VAR_25++) {
  u32 VAR_26;
  int VAR_27;

  for (VAR_27 = 0; VAR_27 < 3; VAR_27++) {
   VAR_22->phy_addr = VAR_25;
   VAR_26 = FUNC_5(VAR_22, VAR_12) << 16;
   VAR_26 |= FUNC_5(VAR_22, VAR_13);
   if (VAR_26 && (VAR_26 != 0xFFFFFFFF)) {
    VAR_22->phy_id = VAR_26;
    goto done;
   }
  }
 }
 FUNC_6("MII phy did not respond [%08x]\n",
        FUNC_8(VAR_22->regs + VAR_18));
 return -1;

done:

 VAR_24 = FUNC_5(VAR_22, VAR_11);
 if ((VAR_24 & VAR_0) &&
     FUNC_5(VAR_22, VAR_4))
  VAR_22->cas_flags |= VAR_1;
 return 0;
}
