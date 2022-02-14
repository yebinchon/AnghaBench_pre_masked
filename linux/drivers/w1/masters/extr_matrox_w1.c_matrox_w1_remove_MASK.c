
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct matrox_device {int virt_addr; int bus_master; scalar_t__ found; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct matrox_device*) ;
 struct matrox_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct matrox_device *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->found) {
  FUNC_3(VAR_1->bus_master);
  FUNC_0(VAR_1->virt_addr);
 }
 FUNC_1(VAR_1);
}
