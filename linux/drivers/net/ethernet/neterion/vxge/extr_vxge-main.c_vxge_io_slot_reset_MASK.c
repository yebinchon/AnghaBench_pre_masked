
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct __vxge_hw_device {struct net_device* ndev; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vxgedev*,int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct vxgedev* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct __vxge_hw_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_3)
{
 struct __vxge_hw_device *VAR_4 = FUNC_4(VAR_3);
 struct net_device *VAR_5 = VAR_4->ndev;

 struct vxgedev *VAR_6 = FUNC_2(VAR_5);

 if (FUNC_3(VAR_3)) {
  FUNC_1(VAR_5, "Cannot re-enable device after reset\n");
  return VAR_0;
 }

 FUNC_5(VAR_3);
 FUNC_0(VAR_6, VAR_2);

 return VAR_1;
}
