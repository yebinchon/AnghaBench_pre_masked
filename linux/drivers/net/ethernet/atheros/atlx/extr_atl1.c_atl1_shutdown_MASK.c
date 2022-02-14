
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct atl1_adapter {int wol; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct atl1_adapter* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_1);
 struct atl1_adapter *VAR_3 = FUNC_1(VAR_2);




 FUNC_4(VAR_1, VAR_3->wol);
 FUNC_3(VAR_1, VAR_0);
}
