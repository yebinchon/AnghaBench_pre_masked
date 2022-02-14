
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_sriov {int total_VFs; int max_VF_buses; int stride; int offset; } ;
struct pci_dev {struct pci_sriov* sriov; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1)
{
 struct pci_sriov *VAR_2 = VAR_1->sriov;
 int VAR_3, VAR_4, VAR_5 = 0;

 for (VAR_3 = VAR_2->total_VFs; VAR_3; VAR_3--) {
  FUNC_0(VAR_1, VAR_3);
  if (!VAR_2->offset || (VAR_3 > 1 && !VAR_2->stride)) {
   VAR_5 = -VAR_0;
   goto out;
  }

  VAR_4 = FUNC_1(VAR_1, VAR_3 - 1);
  if (VAR_4 > VAR_2->max_VF_buses)
   VAR_2->max_VF_buses = VAR_4;
 }

out:
 FUNC_0(VAR_1, 0);
 return VAR_5;
}
