
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0,
 const struct pci_device_id *VAR_1)
{
 char *VAR_2;

 if (VAR_1->driver_data)
  VAR_2 = (char *)VAR_1->driver_data;
 else
  VAR_2 = "Microsemi Smart Family Controller";

 FUNC_0(&VAR_0->dev, "%s found\n", VAR_2);
}
