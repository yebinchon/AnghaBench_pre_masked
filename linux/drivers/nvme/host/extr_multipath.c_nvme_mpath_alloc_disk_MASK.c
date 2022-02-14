
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int limits; struct nvme_ns_head* queuedata; } ;
struct nvme_ns_head {int instance; TYPE_2__* disk; int requeue_work; int requeue_lock; int requeue_list; int lock; } ;
struct nvme_ctrl {int vwc; TYPE_1__* subsys; int numa_node; } ;
struct TYPE_4__ {int disk_name; int flags; struct request_queue* queue; struct nvme_ns_head* private_data; int * fops; } ;
struct TYPE_3__ {int cmic; int instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct request_queue* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (int ,struct request_queue*) ;
 int FUNC_6 (struct request_queue*,int) ;
 int FUNC_7 (struct request_queue*,int ) ;
 int FUNC_8 (struct request_queue*,int,int) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int,int) ;

int FUNC_13(struct nvme_ctrl *VAR_9, struct nvme_ns_head *VAR_10)
{
 struct request_queue *VAR_11;
 bool VAR_12 = 0;

 FUNC_10(&VAR_10->lock);
 FUNC_2(&VAR_10->requeue_list);
 FUNC_11(&VAR_10->requeue_lock);
 FUNC_0(&VAR_10->requeue_work, VAR_8);






 if (!(VAR_9->subsys->cmic & (1 << 1)) || !VAR_5)
  return 0;

 VAR_11 = FUNC_3(VAR_2, VAR_9->numa_node);
 if (!VAR_11)
  goto out;
 VAR_11->queuedata = VAR_10;
 FUNC_7(VAR_11, VAR_6);
 FUNC_5(VAR_4, VAR_11);

 FUNC_6(VAR_11, 512);
 FUNC_9(&VAR_11->limits);


 if (VAR_9->vwc & VAR_3)
  VAR_12 = 1;
 FUNC_8(VAR_11, VAR_12, VAR_12);

 VAR_10->disk = FUNC_1(0);
 if (!VAR_10->disk)
  goto out_cleanup_queue;
 VAR_10->disk->fops = &VAR_7;
 VAR_10->disk->private_data = VAR_10;
 VAR_10->disk->queue = VAR_11;
 VAR_10->disk->flags = VAR_1;
 FUNC_12(VAR_10->disk->disk_name, "nvme%dn%d",
   VAR_9->subsys->instance, VAR_10->instance);
 return 0;

out_cleanup_queue:
 FUNC_4(VAR_11);
out:
 return -VAR_0;
}
