
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct dasd_queue {int lock; } ;
struct dasd_device {scalar_t__ state; int features; TYPE_2__* discipline; int flags; scalar_t__ stopped; } ;
struct dasd_ccw_req {int devlist; int blocklist; struct dasd_queue* dq; int status; struct request* callback_data; } ;
struct dasd_block {int queue_lock; int ccw_queue; struct dasd_device* base; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {struct dasd_queue* driver_data; TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_4__ {struct dasd_ccw_req* (* build_cp ) (struct dasd_device*,struct dasd_block*,struct request*) ;} ;
struct TYPE_3__ {struct dasd_block* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct dasd_ccw_req*) ;
 int FUNC_3 (struct dasd_ccw_req*) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request*) ;
 int FUNC_6 (struct dasd_block*,struct dasd_ccw_req*,struct request*) ;
 int FUNC_7 (struct dasd_block*) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (struct request*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct dasd_ccw_req* FUNC_14 (struct dasd_device*,struct dasd_block*,struct request*) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static blk_status_t FUNC_16(struct blk_mq_hw_ctx *VAR_13,
        const struct blk_mq_queue_data *VAR_14)
{
 struct dasd_block *VAR_15 = VAR_13->queue->queuedata;
 struct dasd_queue *VAR_16 = VAR_13->driver_data;
 struct request *VAR_17 = VAR_14->rq;
 struct dasd_device *VAR_18;
 struct dasd_ccw_req *VAR_19;
 blk_status_t VAR_20 = VAR_1;

 VAR_18 = VAR_15->base;
 FUNC_11(&VAR_16->lock);
 if (VAR_18->state < VAR_7) {
  FUNC_0(VAR_8, VAR_18,
         "device not ready for request %p", VAR_17);
  VAR_20 = VAR_0;
  goto out;
 }






 if (VAR_18->stopped && !(VAR_18->features & VAR_4)) {
  FUNC_0(VAR_8, VAR_18,
         "device stopped request %p", VAR_17);
  VAR_20 = VAR_2;
  goto out;
 }

 if (VAR_18->features & VAR_5 &&
     FUNC_9(VAR_17) == VAR_12) {
  FUNC_0(VAR_8, VAR_18,
         "Rejecting write request %p", VAR_17);
  VAR_20 = VAR_0;
  goto out;
 }

 if (FUNC_15(VAR_6, &VAR_18->flags) &&
     (VAR_18->features & VAR_4 ||
      FUNC_5(VAR_17))) {
  FUNC_0(VAR_8, VAR_18,
         "Rejecting failfast request %p", VAR_17);
  VAR_20 = VAR_0;
  goto out;
 }

 VAR_19 = VAR_18->discipline->build_cp(VAR_18, VAR_15, VAR_17);
 if (FUNC_2(VAR_19)) {
  if (FUNC_3(VAR_19) == -VAR_10 ||
      FUNC_3(VAR_19) == -VAR_11 ||
      FUNC_3(VAR_19) == -VAR_9) {
   VAR_20 = VAR_2;
   goto out;
  }
  FUNC_0(VAR_8, VAR_18,
         "CCW creation failed (rc=%ld) on request %p",
         FUNC_3(VAR_19), VAR_17);
  VAR_20 = VAR_0;
  goto out;
 }




 VAR_19->callback_data = VAR_17;
 VAR_19->status = VAR_3;
 VAR_19->dq = VAR_16;

 FUNC_4(VAR_17);
 FUNC_10(&VAR_15->queue_lock);
 FUNC_8(&VAR_19->blocklist, &VAR_15->ccw_queue);
 FUNC_1(&VAR_19->devlist);
 FUNC_6(VAR_15, VAR_19, VAR_17);
 FUNC_7(VAR_15);
 FUNC_12(&VAR_15->queue_lock);

out:
 FUNC_13(&VAR_16->lock);
 return VAR_20;
}
