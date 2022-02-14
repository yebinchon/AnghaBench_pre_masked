
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; int irq; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct amd_ntb_dev {int entry; int num; int db_count; int msix_vec_count; struct amd_ntb_dev* vec; struct amd_ntb_dev* msix; int vector; struct amd_ntb_dev* ndev; int db_valid_mask; int db_mask; TYPE_1__ ntb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct amd_ntb_dev*) ;
 void* FUNC_3 (int,int,int ,int) ;
 int FUNC_4 (struct amd_ntb_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,struct amd_ntb_dev*,int,int) ;
 int FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (int ,int ,int ,char*,struct amd_ntb_dev*) ;

__attribute__((used)) static int FUNC_11(struct amd_ntb_dev *VAR_4,
    int VAR_5, int VAR_6)
{
 struct pci_dev *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7 = VAR_4->ntb.pdev;

 VAR_11 = FUNC_1(&VAR_7->dev);

 VAR_4->db_mask = VAR_4->db_valid_mask;


 VAR_4->vec = FUNC_3(VAR_6, sizeof(*VAR_4->vec),
     VAR_0, VAR_11);
 if (!VAR_4->vec)
  goto err_msix_vec_alloc;

 VAR_4->msix = FUNC_3(VAR_6, sizeof(*VAR_4->msix),
      VAR_0, VAR_11);
 if (!VAR_4->msix)
  goto err_msix_alloc;

 for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9)
  VAR_4->msix[VAR_9].entry = VAR_9;

 VAR_10 = FUNC_8(VAR_7, VAR_4->msix,
        VAR_5, VAR_6);
 if (VAR_10 < 0)
  goto err_msix_enable;




 if (VAR_10 < VAR_5) {
  FUNC_6(VAR_7);
  goto err_msix_enable;
 }

 for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
  VAR_4->vec[VAR_9].ndev = VAR_4;
  VAR_4->vec[VAR_9].num = VAR_9;
  VAR_8 = FUNC_10(VAR_4->msix[VAR_9].vector, VAR_3, 0,
     "ndev_vec_isr", &VAR_4->vec[VAR_9]);
  if (VAR_8)
   goto err_msix_request;
 }

 FUNC_0(&VAR_7->dev, "Using msix interrupts\n");
 VAR_4->db_count = VAR_5;
 VAR_4->msix_vec_count = VAR_6;
 return 0;

err_msix_request:
 while (VAR_9-- > 0)
  FUNC_2(VAR_4->msix[VAR_9].vector, &VAR_4->vec[VAR_9]);
 FUNC_6(VAR_7);
err_msix_enable:
 FUNC_4(VAR_4->msix);
err_msix_alloc:
 FUNC_4(VAR_4->vec);
err_msix_vec_alloc:
 VAR_4->msix = ((void*)0);
 VAR_4->vec = ((void*)0);


 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8)
  goto err_msi_enable;

 VAR_8 = FUNC_10(VAR_7->irq, VAR_2, 0,
    "ndev_irq_isr", VAR_4);
 if (VAR_8)
  goto err_msi_request;

 FUNC_0(&VAR_7->dev, "Using msi interrupts\n");
 VAR_4->db_count = 1;
 VAR_4->msix_vec_count = 1;
 return 0;

err_msi_request:
 FUNC_5(VAR_7);
err_msi_enable:


 FUNC_9(VAR_7, 1);

 VAR_8 = FUNC_10(VAR_7->irq, VAR_2, VAR_1,
    "ndev_irq_isr", VAR_4);
 if (VAR_8)
  goto err_intx_request;

 FUNC_0(&VAR_7->dev, "Using intx interrupts\n");
 VAR_4->db_count = 1;
 VAR_4->msix_vec_count = 1;
 return 0;

err_intx_request:
 return VAR_8;
}
