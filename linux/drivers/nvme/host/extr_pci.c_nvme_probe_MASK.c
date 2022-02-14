
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {unsigned long driver_data; } ;
struct pci_dev {int dev; } ;
struct nvme_queue {int dummy; } ;
struct TYPE_4__ {int device; int reset_work; } ;
struct nvme_dev {struct nvme_dev* queues; int dev; int iod_mempool; TYPE_1__ ctrl; int shutdown_lock; int remove_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct nvme_dev*) ;
 unsigned long FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 struct nvme_dev* FUNC_8 (int ,int,int ,int) ;
 int FUNC_9 (struct nvme_dev*) ;
 struct nvme_dev* FUNC_10 (int,int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ,int ,void*,int ,int) ;
 int FUNC_13 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int *) ;
 int VAR_9 ;
 int FUNC_15 (struct nvme_dev*) ;
 int FUNC_16 (struct nvme_dev*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int *,int *,unsigned long) ;
 int VAR_10 ;
 size_t FUNC_19 (struct nvme_dev*,int ,int ,int) ;
 int FUNC_20 (struct nvme_dev*) ;
 int VAR_11 ;
 int FUNC_21 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_22 (struct nvme_dev*) ;
 int FUNC_23 (struct pci_dev*,struct nvme_dev*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *,int ) ;

__attribute__((used)) static int FUNC_26(struct pci_dev *VAR_13, const struct pci_device_id *VAR_14)
{
 int VAR_15, VAR_16 = -VAR_0;
 struct nvme_dev *VAR_17;
 unsigned long VAR_18 = VAR_14->driver_data;
 size_t VAR_19;

 VAR_15 = FUNC_6(&VAR_13->dev);
 if (VAR_15 == VAR_2)
  FUNC_25(&VAR_13->dev, VAR_6);

 VAR_17 = FUNC_10(sizeof(*VAR_17), VAR_1, VAR_15);
 if (!VAR_17)
  return -VAR_0;

 VAR_17->queues = FUNC_8(FUNC_11(), sizeof(struct nvme_queue),
     VAR_1, VAR_15);
 if (!VAR_17->queues)
  goto free;

 VAR_17->dev = FUNC_7(&VAR_13->dev);
 FUNC_23(VAR_13, VAR_17);

 VAR_16 = FUNC_15(VAR_17);
 if (VAR_16)
  goto put_pci;

 FUNC_0(&VAR_17->ctrl.reset_work, VAR_12);
 FUNC_0(&VAR_17->remove_work, VAR_11);
 FUNC_14(&VAR_17->shutdown_lock);

 VAR_16 = FUNC_22(VAR_17);
 if (VAR_16)
  goto unmap;

 VAR_18 |= FUNC_3(VAR_13);





 VAR_19 = FUNC_19(VAR_17, VAR_3,
      VAR_4, 1);
 FUNC_1(VAR_19 > VAR_5);

 VAR_17->iod_mempool = FUNC_12(1, VAR_8,
      VAR_7,
      (void *) VAR_19,
      VAR_1, VAR_15);
 if (!VAR_17->iod_mempool) {
  VAR_16 = -VAR_0;
  goto release_pools;
 }

 VAR_16 = FUNC_18(&VAR_17->ctrl, &VAR_13->dev, &VAR_10,
   VAR_18);
 if (VAR_16)
  goto release_mempool;

 FUNC_4(VAR_17->ctrl.device, "pci function %s\n", FUNC_5(&VAR_13->dev));

 FUNC_21(&VAR_17->ctrl);
 FUNC_17(&VAR_17->ctrl);
 FUNC_2(VAR_9, VAR_17);

 return 0;

 release_mempool:
 FUNC_13(VAR_17->iod_mempool);
 release_pools:
 FUNC_20(VAR_17);
 unmap:
 FUNC_16(VAR_17);
 put_pci:
 FUNC_24(VAR_17->dev);
 free:
 FUNC_9(VAR_17->queues);
 FUNC_9(VAR_17);
 return VAR_16;
}
