
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ioc3_private {int all_regs; int ioc3_timer; int txr_dma; int txr; int dma_dev; int rxr_dma; int rxr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct ioc3_private* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_5(VAR_2);
 struct ioc3_private *VAR_4 = FUNC_4(VAR_3);

 FUNC_1(VAR_4->dma_dev, VAR_0, VAR_4->rxr,
         VAR_4->rxr_dma, 0);
 FUNC_1(VAR_4->dma_dev, VAR_1, VAR_4->txr,
         VAR_4->txr_dma, 0);

 FUNC_7(VAR_3);
 FUNC_0(&VAR_4->ioc3_timer);

 FUNC_3(VAR_4->all_regs);
 FUNC_6(VAR_2);
 FUNC_2(VAR_3);



}
