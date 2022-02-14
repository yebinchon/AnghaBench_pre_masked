
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 struct pci_device_id* FUNC_1 (int ,struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{
 const struct pci_device_id *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_1, VAR_2->driver_data);
}
