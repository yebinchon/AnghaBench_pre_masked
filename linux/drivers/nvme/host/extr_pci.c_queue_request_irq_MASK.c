
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nvme_queue {int qid; int cq_vector; TYPE_2__* dev; } ;
struct TYPE_3__ {int instance; } ;
struct TYPE_4__ {TYPE_1__ ctrl; int dev; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int *,int *,struct nvme_queue*,char*,int,int ) ;
 struct pci_dev* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct nvme_queue *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_3->dev->dev);
 int VAR_5 = VAR_3->dev->ctrl.instance;

 if (VAR_2) {
  return FUNC_0(VAR_4, VAR_3->cq_vector, VAR_1,
    VAR_0, VAR_3, "nvme%dq%d", VAR_5, VAR_3->qid);
 } else {
  return FUNC_0(VAR_4, VAR_3->cq_vector, VAR_0,
    ((void*)0), VAR_3, "nvme%dq%d", VAR_5, VAR_3->qid);
 }
}
