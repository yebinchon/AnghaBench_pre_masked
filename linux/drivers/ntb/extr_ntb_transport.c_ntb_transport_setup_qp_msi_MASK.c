
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data; int addr_offset; } ;
struct ntb_transport_qp {scalar_t__ msi_irq; TYPE_3__ msi_desc; TYPE_2__* ndev; } ;
struct ntb_transport_ctx {unsigned int msi_spad_offset; TYPE_5__* ndev; int use_msi; struct ntb_transport_qp* qp_vec; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {TYPE_1__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int,scalar_t__,int ,int ) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,scalar_t__,struct ntb_transport_qp*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int ,struct ntb_transport_qp*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct ntb_transport_ctx *VAR_2,
           unsigned int VAR_3)
{
 struct ntb_transport_qp *VAR_4 = &VAR_2->qp_vec[VAR_3];
 int VAR_5 = VAR_3 * 2 + VAR_2->msi_spad_offset;
 int VAR_6;

 if (!VAR_2->use_msi)
  return;

 if (VAR_5 >= FUNC_4(VAR_2->ndev)) {
  FUNC_2(&VAR_4->ndev->pdev->dev,
         "Not enough SPADS to use MSI interrupts\n");
  return;
 }

 FUNC_5(VAR_4->ndev, VAR_5, 0);
 FUNC_5(VAR_4->ndev, VAR_5 + 1, 0);

 if (!VAR_4->msi_irq) {
  VAR_4->msi_irq = FUNC_6(VAR_4->ndev, VAR_1,
         VAR_0, VAR_4,
         &VAR_4->msi_desc);
  if (VAR_4->msi_irq < 0) {
   FUNC_1(&VAR_4->ndev->pdev->dev,
     "Unable to allocate MSI interrupt for qp%d\n",
     VAR_3);
   return;
  }
 }

 VAR_6 = FUNC_5(VAR_4->ndev, VAR_5, VAR_4->msi_desc.addr_offset);
 if (VAR_6)
  goto err_free_interrupt;

 VAR_6 = FUNC_5(VAR_4->ndev, VAR_5 + 1, VAR_4->msi_desc.data);
 if (VAR_6)
  goto err_free_interrupt;

 FUNC_0(&VAR_4->ndev->pdev->dev, "QP%d MSI %d addr=%x data=%x\n",
  VAR_3, VAR_4->msi_irq, VAR_4->msi_desc.addr_offset,
  VAR_4->msi_desc.data);

 return;

err_free_interrupt:
 FUNC_3(&VAR_2->ndev->dev, VAR_4->msi_irq, VAR_4);
}
