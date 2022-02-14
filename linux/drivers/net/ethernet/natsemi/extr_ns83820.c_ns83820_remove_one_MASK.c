
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int phy_descs; int descs; } ;
struct ns83820 {TYPE_2__* pci_dev; TYPE_1__ rx_info; int tx_phy_descs; int tx_descs; int base; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ns83820*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int,int ,int ) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_7(VAR_3);
 struct ns83820 *VAR_5 = FUNC_0(VAR_4);

 if (!VAR_4)
  return;

 FUNC_4(VAR_5);

 FUNC_8(VAR_4);
 FUNC_1(VAR_5->pci_dev->irq, VAR_4);
 FUNC_3(VAR_5->base);
 FUNC_6(VAR_5->pci_dev, 4 * VAR_0 * VAR_2,
   VAR_5->tx_descs, VAR_5->tx_phy_descs);
 FUNC_6(VAR_5->pci_dev, 4 * VAR_0 * VAR_1,
   VAR_5->rx_info.descs, VAR_5->rx_info.phy_descs);
 FUNC_5(VAR_5->pci_dev);
 FUNC_2(VAR_4);
}
