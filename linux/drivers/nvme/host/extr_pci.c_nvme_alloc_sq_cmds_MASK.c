
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nvme_queue {int sq_cmds; int sq_dma_addr; int flags; } ;
struct nvme_dev {int cmbsz; int dev; scalar_t__ cmb_use_sqes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvme_queue*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (int ,int *) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nvme_dev *VAR_4, struct nvme_queue *VAR_5,
    int VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_6(VAR_4->dev);

 if (VAR_6 && VAR_4->cmb_use_sqes && (VAR_4->cmbsz & VAR_3)) {
  VAR_5->sq_cmds = FUNC_2(VAR_7, FUNC_0(VAR_5));
  if (VAR_5->sq_cmds) {
   VAR_5->sq_dma_addr = FUNC_4(VAR_7,
       VAR_5->sq_cmds);
   if (VAR_5->sq_dma_addr) {
    FUNC_5(VAR_2, &VAR_5->flags);
    return 0;
   }

   FUNC_3(VAR_7, VAR_5->sq_cmds, FUNC_0(VAR_5));
  }
 }

 VAR_5->sq_cmds = FUNC_1(VAR_4->dev, FUNC_0(VAR_5),
    &VAR_5->sq_dma_addr, VAR_1);
 if (!VAR_5->sq_cmds)
  return -VAR_0;
 return 0;
}
