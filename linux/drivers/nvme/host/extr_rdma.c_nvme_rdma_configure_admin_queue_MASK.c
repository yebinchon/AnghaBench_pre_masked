
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * data; } ;
struct TYPE_16__ {int max_segments; int max_hw_sectors; void* admin_tagset; void* fabrics_q; void* admin_q; int numa_node; } ;
struct nvme_rdma_ctrl {int max_fr_pages; TYPE_2__* queues; TYPE_6__ async_event_sqe; TYPE_1__* device; TYPE_7__ ctrl; int admin_tag_set; } ;
struct nvme_command {int dummy; } ;
struct TYPE_14__ {int dma_device; } ;
struct TYPE_13__ {TYPE_1__* device; } ;
struct TYPE_12__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_6__*,int,int ) ;
 int FUNC_11 (struct nvme_rdma_ctrl*,int ,int ) ;
 void* FUNC_12 (TYPE_7__*,int) ;
 int FUNC_13 (TYPE_3__*,TYPE_6__*,int,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (struct nvme_rdma_ctrl*,int ) ;
 int FUNC_17 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_18(struct nvme_rdma_ctrl *VAR_3,
  bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_11(VAR_3, 0, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_3->device = VAR_3->queues[0].device;
 VAR_3->ctrl.numa_node = FUNC_6(VAR_3->device->dev->dma_device);

 VAR_3->max_fr_pages = FUNC_15(VAR_3->device->dev);






 VAR_5 = FUNC_10(VAR_3->device->dev, &VAR_3->async_event_sqe,
   sizeof(struct nvme_command), VAR_0);
 if (VAR_5)
  goto out_free_queue;

 if (VAR_4) {
  VAR_3->ctrl.admin_tagset = FUNC_12(&VAR_3->ctrl, 1);
  if (FUNC_0(VAR_3->ctrl.admin_tagset)) {
   VAR_5 = FUNC_1(VAR_3->ctrl.admin_tagset);
   goto out_free_async_qe;
  }

  VAR_3->ctrl.fabrics_q = FUNC_4(&VAR_3->admin_tag_set);
  if (FUNC_0(VAR_3->ctrl.fabrics_q)) {
   VAR_5 = FUNC_1(VAR_3->ctrl.fabrics_q);
   goto out_free_tagset;
  }

  VAR_3->ctrl.admin_q = FUNC_4(&VAR_3->admin_tag_set);
  if (FUNC_0(VAR_3->ctrl.admin_q)) {
   VAR_5 = FUNC_1(VAR_3->ctrl.admin_q);
   goto out_cleanup_fabrics_q;
  }
 }

 VAR_5 = FUNC_16(VAR_3, 0);
 if (VAR_5)
  goto out_cleanup_queue;

 VAR_5 = FUNC_8(&VAR_3->ctrl);
 if (VAR_5)
  goto out_stop_queue;

 VAR_3->ctrl.max_segments = VAR_3->max_fr_pages;
 VAR_3->ctrl.max_hw_sectors = VAR_3->max_fr_pages << (FUNC_7(VAR_2) - 9);

 FUNC_5(VAR_3->ctrl.admin_q);

 VAR_5 = FUNC_9(&VAR_3->ctrl);
 if (VAR_5)
  goto out_stop_queue;

 return 0;

out_stop_queue:
 FUNC_17(&VAR_3->queues[0]);
out_cleanup_queue:
 if (VAR_4)
  FUNC_2(VAR_3->ctrl.admin_q);
out_cleanup_fabrics_q:
 if (VAR_4)
  FUNC_2(VAR_3->ctrl.fabrics_q);
out_free_tagset:
 if (VAR_4)
  FUNC_3(VAR_3->ctrl.admin_tagset);
out_free_async_qe:
 FUNC_13(VAR_3->device->dev, &VAR_3->async_event_sqe,
  sizeof(struct nvme_command), VAR_0);
 VAR_3->async_event_sqe.data = ((void*)0);
out_free_queue:
 FUNC_14(&VAR_3->queues[0]);
 return VAR_5;
}
