
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_hw {int ports; int regs; int hw_lock; scalar_t__ intr_mask; int phy_task; struct net_device** dev; } ;
struct pci_dev {int irq; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct skge_hw*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct skge_hw*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct skge_hw* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct skge_hw*,int ) ;
 int FUNC_8 (struct skge_hw*,int ,int ) ;
 int FUNC_9 (struct skge_hw*,int ,int ) ;
 int FUNC_10 (struct skge_hw*,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_5)
{
 struct skge_hw *VAR_6 = FUNC_5(VAR_5);
 struct net_device *VAR_7, *VAR_8;

 if (!VAR_6)
  return;

 VAR_8 = VAR_6->dev[1];
 if (VAR_8)
  FUNC_14(VAR_8);
 VAR_7 = VAR_6->dev[0];
 FUNC_14(VAR_7);

 FUNC_13(&VAR_6->phy_task);

 FUNC_11(&VAR_6->hw_lock);
 VAR_6->intr_mask = 0;

 if (VAR_6->ports > 1) {
  FUNC_9(VAR_6, VAR_1, 0);
  FUNC_7(VAR_6, VAR_1);
 }
 FUNC_12(&VAR_6->hw_lock);

 FUNC_8(VAR_6, VAR_2, VAR_4);
 FUNC_10(VAR_6, VAR_0, VAR_3);

 if (VAR_6->ports > 1)
  FUNC_0(VAR_5->irq, VAR_6);
 FUNC_6(VAR_5);
 FUNC_4(VAR_5);
 if (VAR_8)
  FUNC_1(VAR_8);
 FUNC_1(VAR_7);

 FUNC_2(VAR_6->regs);
 FUNC_3(VAR_6);
}
