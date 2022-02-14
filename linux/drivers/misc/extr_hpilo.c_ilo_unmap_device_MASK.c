
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ilo_hwinfo {int mmio_vaddr; int ram_vaddr; int db_vaddr; } ;


 int FUNC_0 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0, struct ilo_hwinfo *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->db_vaddr);
 FUNC_0(VAR_0, VAR_1->ram_vaddr);
 FUNC_0(VAR_0, VAR_1->mmio_vaddr);
}
