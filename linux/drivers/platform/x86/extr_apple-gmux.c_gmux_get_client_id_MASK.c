
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; int device; } ;
typedef enum vga_switcheroo_client_id { ____Placeholder_vga_switcheroo_client_id } vga_switcheroo_client_id ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum vga_switcheroo_client_id FUNC_0(struct pci_dev *VAR_4)
{




 if (VAR_4->vendor == VAR_0)
  return VAR_3;
 else if (VAR_4->vendor == VAR_1 &&
   VAR_4->device == 0x0863)
  return VAR_3;
 else
  return VAR_2;
}
