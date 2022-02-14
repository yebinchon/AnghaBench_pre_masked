
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon_shared {int dummy; } ;
struct typhoon {int shared_dma; int shared; int ioaddr; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct typhoon* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int,int ,int ) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static void
FUNC_12(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_5(VAR_2);
 struct typhoon *VAR_4 = FUNC_1(VAR_3);

 FUNC_11(VAR_3);
 FUNC_9(VAR_2, VAR_1);
 FUNC_8(VAR_2);
 FUNC_10(VAR_4->ioaddr, VAR_0);
 FUNC_6(VAR_2, VAR_4->ioaddr);
 FUNC_4(VAR_2, sizeof(struct typhoon_shared),
       VAR_4->shared, VAR_4->shared_dma);
 FUNC_7(VAR_2);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_3);
}
