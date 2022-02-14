
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; scalar_t__ irq; } ;
struct hclgevf_dev {int num_msi; int num_msi_left; int * vector_status; void* vector_irq; scalar_t__ roce_base_msix_offset; scalar_t__ roce_base_vector; scalar_t__ base_msi_vector; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 void* FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct hclgevf_dev*) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int,int) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_7(struct hclgevf_dev *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pdev;
 int VAR_8;
 int VAR_9;

 if (FUNC_4(VAR_6))
  VAR_8 = FUNC_5(VAR_7,
      VAR_6->roce_base_msix_offset + 1,
      VAR_6->num_msi,
      VAR_5);
 else
  VAR_8 = FUNC_5(VAR_7, VAR_3,
      VAR_6->num_msi,
      VAR_4 | VAR_5);

 if (VAR_8 < 0) {
  FUNC_0(&VAR_7->dev,
   "failed(%d) to allocate MSI/MSI-X vectors\n",
   VAR_8);
  return VAR_8;
 }
 if (VAR_8 < VAR_6->num_msi)
  FUNC_1(&VAR_6->pdev->dev,
    "requested %d MSI/MSI-X, but allocated %d MSI/MSI-X\n",
    VAR_6->num_msi, VAR_8);

 VAR_6->num_msi = VAR_8;
 VAR_6->num_msi_left = VAR_8;

 VAR_6->base_msi_vector = VAR_7->irq;
 VAR_6->roce_base_vector = VAR_7->irq + VAR_6->roce_base_msix_offset;

 VAR_6->vector_status = FUNC_2(&VAR_7->dev, VAR_6->num_msi,
        sizeof(u16), VAR_1);
 if (!VAR_6->vector_status) {
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->num_msi; VAR_9++)
  VAR_6->vector_status[VAR_9] = VAR_2;

 VAR_6->vector_irq = FUNC_2(&VAR_7->dev, VAR_6->num_msi,
     sizeof(int), VAR_1);
 if (!VAR_6->vector_irq) {
  FUNC_3(&VAR_7->dev, VAR_6->vector_status);
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 return 0;
}
