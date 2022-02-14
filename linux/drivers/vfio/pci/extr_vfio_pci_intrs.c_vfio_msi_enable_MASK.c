
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_irq_ctx {int dummy; } ;
struct vfio_pci_device {int num_ctx; scalar_t__ msi_qmax; int irq_type; int ctx; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vfio_pci_device*) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*,int,int,unsigned int) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct vfio_pci_device *VAR_7, int VAR_8, bool VAR_9)
{
 struct pci_dev *VAR_10 = VAR_7->pdev;
 unsigned int VAR_11 = VAR_9 ? VAR_4 : VAR_3;
 int VAR_12;

 if (!FUNC_1(VAR_7))
  return -VAR_0;

 VAR_7->ctx = FUNC_2(VAR_8, sizeof(struct vfio_pci_irq_ctx), VAR_2);
 if (!VAR_7->ctx)
  return -VAR_1;


 VAR_12 = FUNC_4(VAR_10, 1, VAR_8, VAR_11);
 if (VAR_12 < VAR_8) {
  if (VAR_12 > 0)
   FUNC_5(VAR_10);
  FUNC_3(VAR_7->ctx);
  return VAR_12;
 }

 VAR_7->num_ctx = VAR_8;
 VAR_7->irq_type = VAR_9 ? VAR_5 :
    VAR_6;

 if (!VAR_9) {




  VAR_7->msi_qmax = FUNC_0(VAR_8 * 2 - 1) - 1;
 }

 return 0;
}
