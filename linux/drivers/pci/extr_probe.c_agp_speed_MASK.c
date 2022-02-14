
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 int* VAR_0 ;

__attribute__((used)) static enum pci_bus_speed FUNC_0(int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 & 4)
  VAR_3 = 3;
 else if (VAR_2 & 2)
  VAR_3 = 2;
 else if (VAR_2 & 1)
  VAR_3 = 1;
 else
  goto out;

 if (VAR_1) {
  VAR_3 += 2;
  if (VAR_3 == 5)
   VAR_3 = 0;
 }

 out:
 return VAR_0[VAR_3];
}
