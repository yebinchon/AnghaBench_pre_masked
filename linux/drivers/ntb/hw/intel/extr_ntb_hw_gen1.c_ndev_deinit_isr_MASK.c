
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct intel_ntb_dev {int db_vec_count; struct intel_ntb_dev* vec; struct intel_ntb_dev* msix; int vector; TYPE_3__* self_reg; scalar_t__ self_mmio; int db_mask; TYPE_2__* reg; int db_valid_mask; TYPE_1__ ntb; } ;
struct TYPE_6__ {scalar_t__ db_mask; } ;
struct TYPE_5__ {int (* db_iowrite ) (int ,scalar_t__) ;} ;


 int FUNC_0 (int ,struct intel_ntb_dev*) ;
 int FUNC_1 (struct intel_ntb_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct intel_ntb_dev *VAR_0)
{
 struct pci_dev *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->ntb.pdev;


 VAR_0->db_mask = VAR_0->db_valid_mask;
 VAR_0->reg->db_iowrite(VAR_0->db_mask,
         VAR_0->self_mmio +
         VAR_0->self_reg->db_mask);

 if (VAR_0->msix) {
  VAR_2 = VAR_0->db_vec_count;
  while (VAR_2--)
   FUNC_0(VAR_0->msix[VAR_2].vector, &VAR_0->vec[VAR_2]);
  FUNC_4(VAR_1);
  FUNC_1(VAR_0->msix);
  FUNC_1(VAR_0->vec);
 } else {
  FUNC_0(VAR_1->irq, VAR_0);
  if (FUNC_2(VAR_1))
   FUNC_3(VAR_1);
 }
}
