
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct netdev_private {int base; int queue_mem_dma; scalar_t__ queue_mem; int queue_mem_size; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct netdev_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,scalar_t__,int ) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_6(VAR_1);
 struct netdev_private *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(!VAR_2);

 FUNC_9(VAR_2);

 if (VAR_3->queue_mem)
  FUNC_5(VAR_1, VAR_3->queue_mem_size, VAR_3->queue_mem, VAR_3->queue_mem_dma);



 FUNC_8(VAR_1, VAR_0);
 FUNC_4(VAR_1);

 FUNC_2(VAR_3->base);
 FUNC_7(VAR_1);

 FUNC_1(VAR_2);
}
