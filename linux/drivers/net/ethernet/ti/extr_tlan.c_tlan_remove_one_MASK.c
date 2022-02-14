
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlan_priv {int tlan_tqueue; int dma_storage_dma; scalar_t__ dma_storage; int dma_size; int pci_dev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 struct tlan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct tlan_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_6(VAR_1);

 if (VAR_2->dma_storage) {
  FUNC_3(VAR_2->pci_dev,
        VAR_2->dma_size, VAR_2->dma_storage,
        VAR_2->dma_storage_dma);
 }





 FUNC_1(VAR_1);

 FUNC_0(&VAR_2->tlan_tqueue);
}
