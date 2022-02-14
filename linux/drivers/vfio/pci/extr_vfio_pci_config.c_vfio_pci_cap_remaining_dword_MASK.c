
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct vfio_pci_device {scalar_t__* pci_config_map; } ;
typedef size_t loff_t ;



__attribute__((used)) static size_t FUNC_0(struct vfio_pci_device *VAR_0,
        loff_t VAR_1)
{
 u8 VAR_2 = VAR_0->pci_config_map[VAR_1];
 size_t VAR_3;

 for (VAR_3 = 1; (VAR_1 + VAR_3) % 4 && VAR_0->pci_config_map[VAR_1 + VAR_3] == VAR_2; VAR_3++)
           ;

 return VAR_3;
}
