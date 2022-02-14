
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nvme_queue {int flags; int q_db; } ;
struct TYPE_2__ {int quirks; int device; } ;
struct nvme_dev {int cmb_use_sqes; int q_depth; int num_vecs; int max_qid; int* io_queues; int online_queues; TYPE_1__ ctrl; int dbs; int dev; struct nvme_queue* queues; } ;
struct nvme_command {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 unsigned long FUNC_1 (struct nvme_dev*,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct nvme_dev*,int,int) ;
 int FUNC_6 (struct nvme_dev*) ;
 int FUNC_7 (struct nvme_dev*) ;
 int FUNC_8 (struct nvme_dev*,unsigned long) ;
 int FUNC_9 (TYPE_1__*,int*) ;
 int FUNC_10 (struct nvme_dev*,int) ;
 int FUNC_11 (struct nvme_dev*) ;
 int FUNC_12 (struct pci_dev*,int ,struct nvme_queue*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct nvme_queue*) ;
 int FUNC_15 (int ,int *) ;
 struct pci_dev* FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct nvme_dev *VAR_7)
{
 struct nvme_queue *VAR_8 = &VAR_7->queues[0];
 struct pci_dev *VAR_9 = FUNC_16(VAR_7->dev);
 int VAR_10, VAR_11;
 unsigned long VAR_12;

 VAR_11 = FUNC_4();





 if (VAR_7->ctrl.quirks & VAR_6)
  VAR_11 = 1;

 VAR_10 = FUNC_9(&VAR_7->ctrl, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_11 == 0)
  return 0;

 FUNC_0(VAR_5, &VAR_8->flags);

 if (VAR_7->cmb_use_sqes) {
  VAR_10 = FUNC_5(VAR_7, VAR_11,
    sizeof(struct nvme_command));
  if (VAR_10 > 0)
   VAR_7->q_depth = VAR_10;
  else
   VAR_7->cmb_use_sqes = 0;
 }

 do {
  VAR_12 = FUNC_1(VAR_7, VAR_11);
  VAR_10 = FUNC_8(VAR_7, VAR_12);
  if (!VAR_10)
   break;
  if (!--VAR_11)
   return -VAR_1;
 } while (1);
 VAR_8->q_db = VAR_7->dbs;

 retry:

 FUNC_12(VAR_9, 0, VAR_8);





 FUNC_13(VAR_9);

 VAR_10 = FUNC_10(VAR_7, VAR_11);
 if (VAR_10 <= 0)
  return -VAR_0;

 VAR_7->num_vecs = VAR_10;
 VAR_10 = FUNC_3(VAR_10 - 1, 1);
 VAR_7->max_qid = VAR_10 + VAR_7->io_queues[VAR_3];







 VAR_10 = FUNC_14(VAR_8);
 if (VAR_10)
  return VAR_10;
 FUNC_15(VAR_5, &VAR_8->flags);

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10 || VAR_7->online_queues < 2)
  return VAR_10;

 if (VAR_7->online_queues - 1 < VAR_7->max_qid) {
  VAR_11 = VAR_7->online_queues - 1;
  FUNC_7(VAR_7);
  FUNC_11(VAR_7);
  goto retry;
 }
 FUNC_2(VAR_7->ctrl.device, "%d/%d/%d default/read/poll queues\n",
     VAR_7->io_queues[VAR_2],
     VAR_7->io_queues[VAR_4],
     VAR_7->io_queues[VAR_3]);
 return 0;
}
