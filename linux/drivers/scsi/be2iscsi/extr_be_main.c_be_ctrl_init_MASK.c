
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct be_dma_mem {int size; void* va; void* dma; } ;
struct be_ctrl_info {int mcc_lock; int mbox_lock; struct pci_dev* pdev; struct be_dma_mem mbox_mem; struct be_dma_mem mbox_mem_alloced; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_mcc_mailbox {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (struct beiscsi_hba*,struct pci_dev*) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 void* FUNC_3 (int *,int,void**,int ) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct beiscsi_hba *VAR_2, struct pci_dev *VAR_3)
{
 struct be_ctrl_info *VAR_4 = &VAR_2->ctrl;
 struct be_dma_mem *VAR_5 = &VAR_4->mbox_mem_alloced;
 struct be_dma_mem *VAR_6 = &VAR_4->mbox_mem;
 int VAR_7 = 0;

 VAR_4->pdev = VAR_3;
 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;
 VAR_5->size = sizeof(struct be_mcc_mailbox) + 16;
 VAR_5->va = FUNC_3(&VAR_3->dev,
   VAR_5->size, &VAR_5->dma, VAR_1);
 if (!VAR_5->va) {
  FUNC_2(VAR_2);
  return -VAR_0;
 }

 VAR_6->size = sizeof(struct be_mcc_mailbox);
 VAR_6->va = FUNC_0(VAR_5->va, 16);
 VAR_6->dma = FUNC_0(VAR_5->dma, 16);
 FUNC_4(VAR_6->va, 0, sizeof(struct be_mcc_mailbox));
 FUNC_5(&VAR_4->mbox_lock);
 FUNC_6(&VAR_2->ctrl.mcc_lock);

 return VAR_7;
}
