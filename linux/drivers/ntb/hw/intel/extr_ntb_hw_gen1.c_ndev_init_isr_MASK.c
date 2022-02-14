
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; int irq; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct intel_ntb_dev {int entry; int num; int db_vec_count; int db_vec_shift; struct intel_ntb_dev* vec; struct intel_ntb_dev* msix; int vector; struct intel_ntb_dev* ndev; TYPE_3__* self_reg; scalar_t__ self_mmio; int db_mask; TYPE_2__* reg; int db_valid_mask; TYPE_1__ ntb; } ;
struct TYPE_6__ {scalar_t__ db_mask; } ;
struct TYPE_5__ {int (* db_iowrite ) (int ,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct intel_ntb_dev*) ;
 void* FUNC_3 (int,int,int ,int) ;
 int FUNC_4 (struct intel_ntb_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,struct intel_ntb_dev*,int,int) ;
 int FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (int ,int ,int ,char*,struct intel_ntb_dev*) ;
 int FUNC_11 (int ,scalar_t__) ;

int FUNC_12(struct intel_ntb_dev *VAR_4,
    int VAR_5, int VAR_6,
    int VAR_7, int VAR_8)
{
 struct pci_dev *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = VAR_4->ntb.pdev;

 VAR_13 = FUNC_1(&VAR_9->dev);


 VAR_4->db_mask = VAR_4->db_valid_mask;
 VAR_4->reg->db_iowrite(VAR_4->db_mask,
         VAR_4->self_mmio +
         VAR_4->self_reg->db_mask);



 VAR_4->vec = FUNC_3(VAR_6, sizeof(*VAR_4->vec),
     VAR_0, VAR_13);
 if (!VAR_4->vec)
  goto err_msix_vec_alloc;

 VAR_4->msix = FUNC_3(VAR_6, sizeof(*VAR_4->msix),
      VAR_0, VAR_13);
 if (!VAR_4->msix)
  goto err_msix_alloc;

 for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11)
  VAR_4->msix[VAR_11].entry = VAR_11;

 VAR_12 = FUNC_8(VAR_9, VAR_4->msix,
        VAR_5, VAR_6);
 if (VAR_12 < 0)
  goto err_msix_enable;

 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  VAR_4->vec[VAR_11].ndev = VAR_4;
  VAR_4->vec[VAR_11].num = VAR_11;
  VAR_10 = FUNC_10(VAR_4->msix[VAR_11].vector, VAR_3, 0,
     "ndev_vec_isr", &VAR_4->vec[VAR_11]);
  if (VAR_10)
   goto err_msix_request;
 }

 FUNC_0(&VAR_9->dev, "Using %d msix interrupts\n", VAR_12);
 VAR_4->db_vec_count = VAR_12;
 VAR_4->db_vec_shift = VAR_7;
 return 0;

err_msix_request:
 while (VAR_11-- > 0)
  FUNC_2(VAR_4->msix[VAR_11].vector, &VAR_4->vec[VAR_11]);
 FUNC_6(VAR_9);
err_msix_enable:
 FUNC_4(VAR_4->msix);
err_msix_alloc:
 FUNC_4(VAR_4->vec);
err_msix_vec_alloc:
 VAR_4->msix = ((void*)0);
 VAR_4->vec = ((void*)0);



 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10)
  goto err_msi_enable;

 VAR_10 = FUNC_10(VAR_9->irq, VAR_2, 0,
    "ndev_irq_isr", VAR_4);
 if (VAR_10)
  goto err_msi_request;

 FUNC_0(&VAR_9->dev, "Using msi interrupts\n");
 VAR_4->db_vec_count = 1;
 VAR_4->db_vec_shift = VAR_8;
 return 0;

err_msi_request:
 FUNC_5(VAR_9);
err_msi_enable:



 FUNC_9(VAR_9, 1);

 VAR_10 = FUNC_10(VAR_9->irq, VAR_2, VAR_1,
    "ndev_irq_isr", VAR_4);
 if (VAR_10)
  goto err_intx_request;

 FUNC_0(&VAR_9->dev, "Using intx interrupts\n");
 VAR_4->db_vec_count = 1;
 VAR_4->db_vec_shift = VAR_8;
 return 0;

err_intx_request:
 return VAR_10;
}
