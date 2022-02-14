
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; int vendor; } ;
struct lan743x_adapter {struct pci_dev* pdev; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ,char*,int ,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,unsigned long,int ) ;
 unsigned long FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int VAR_2 ;
 int FUNC_6 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct lan743x_adapter *VAR_3,
       struct pci_dev *VAR_4)
{
 unsigned long VAR_5 = 0;
 int VAR_6;

 VAR_3->pdev = VAR_4;
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto return_error;

 FUNC_0(VAR_3, VAR_2, VAR_3->netdev,
     "PCI: Vendor ID = 0x%04X, Device ID = 0x%04X\n",
     VAR_4->vendor, VAR_4->device);
 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (!FUNC_6(0, &VAR_5))
  goto disable_device;

 VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_0);
 if (VAR_6)
  goto disable_device;

 FUNC_5(VAR_4);
 return 0;

disable_device:
 FUNC_1(VAR_3->pdev);

return_error:
 return VAR_6;
}
