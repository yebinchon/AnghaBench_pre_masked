
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev_bar {int dummy; } ;
struct vnic_dev {struct pci_dev* pdev; void* priv; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct vnic_dev* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct vnic_dev*,struct vnic_dev_bar*,unsigned int) ;
 int FUNC_2 (struct vnic_dev*) ;

struct vnic_dev *FUNC_3(struct vnic_dev *VAR_1,
 void *VAR_2, struct pci_dev *VAR_3, struct vnic_dev_bar *VAR_4,
 unsigned int VAR_5)
{
 if (!VAR_1) {
  VAR_1 = FUNC_0(sizeof(struct vnic_dev), VAR_0);
  if (!VAR_1)
   return ((void*)0);
 }

 VAR_1->priv = VAR_2;
 VAR_1->pdev = VAR_3;

 if (FUNC_1(VAR_1, VAR_4, VAR_5))
  goto err_out;

 return VAR_1;

err_out:
 FUNC_2(VAR_1);
 return ((void*)0);
}
