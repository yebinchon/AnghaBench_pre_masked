
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct nvme_queue {int cq_vector; int cq_poll_lock; int flags; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_queue*,int ,int ) ;
 int FUNC_3 (struct nvme_queue*,int *,int *,unsigned int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct pci_dev* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct nvme_queue *VAR_1, unsigned int VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_8(VAR_1->dev->dev);
 u16 VAR_4, VAR_5;
 int VAR_6;






 if (FUNC_7(VAR_0, &VAR_1->flags)) {
  FUNC_5(&VAR_1->cq_poll_lock);
  VAR_6 = FUNC_3(VAR_1, &VAR_4, &VAR_5, VAR_2);
  FUNC_6(&VAR_1->cq_poll_lock);
 } else {
  FUNC_0(FUNC_4(VAR_3, VAR_1->cq_vector));
  VAR_6 = FUNC_3(VAR_1, &VAR_4, &VAR_5, VAR_2);
  FUNC_1(FUNC_4(VAR_3, VAR_1->cq_vector));
 }

 FUNC_2(VAR_1, VAR_4, VAR_5);
 return VAR_6;
}
