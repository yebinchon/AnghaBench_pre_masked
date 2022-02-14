
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmd_dev {int msix_count; } ;
struct pci_dev {int bus; } ;
struct irq_domain {int dummy; } ;
struct device {int dummy; } ;
typedef int msi_alloc_info_t ;


 int FUNC_0 (int *,int ,int) ;
 struct pci_dev* FUNC_1 (struct device*) ;
 struct vmd_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_0, struct device *VAR_1,
      int VAR_2, msi_alloc_info_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_1);
 struct vmd_dev *VAR_5 = FUNC_2(VAR_4->bus);

 if (VAR_2 > VAR_5->msix_count)
  return VAR_5->msix_count;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 return 0;
}
