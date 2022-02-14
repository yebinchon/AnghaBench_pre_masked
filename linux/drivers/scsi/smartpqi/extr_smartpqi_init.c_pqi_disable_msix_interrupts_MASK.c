
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {scalar_t__ num_msix_vectors_enabled; int pci_dev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pqi_ctrl_info *VAR_0)
{
 if (VAR_0->num_msix_vectors_enabled) {
  FUNC_0(VAR_0->pci_dev);
  VAR_0->num_msix_vectors_enabled = 0;
 }
}
