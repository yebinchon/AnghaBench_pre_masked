
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ec_bhf_priv {int io; int dma_io; } ;


 int FUNC_0 (struct net_device*) ;
 struct ec_bhf_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct ec_bhf_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_7(VAR_1);
 FUNC_0(VAR_1);

 FUNC_5(VAR_0, VAR_2->dma_io);
 FUNC_5(VAR_0, VAR_2->io);
 FUNC_6(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
