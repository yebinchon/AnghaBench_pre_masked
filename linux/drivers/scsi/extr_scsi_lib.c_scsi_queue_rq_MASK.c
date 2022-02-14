
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ sdev_state; int device_busy; scalar_t__ simple_tags; struct Scsi_Host* host; } ;
struct scsi_cmnd {int scsi_done; int flags; int state; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct request {int rq_flags; struct request_queue* q; } ;
struct blk_mq_queue_data {scalar_t__ last; struct request* rq; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int blk_status_t ;
struct TYPE_4__ {int result; } ;
struct TYPE_3__ {scalar_t__ can_queue; int target_busy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct scsi_cmnd* FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (struct scsi_device*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct request_queue*,struct Scsi_Host*,struct scsi_device*) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 int VAR_9 ;
 int FUNC_11 (struct request*) ;
 int FUNC_12 (struct blk_mq_hw_ctx*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (struct scsi_device*,struct request*) ;
 TYPE_2__* FUNC_15 (struct request*) ;
 int FUNC_16 (struct scsi_cmnd*,int) ;
 TYPE_1__* FUNC_17 (struct scsi_device*) ;
 int FUNC_18 (struct Scsi_Host*,struct scsi_device*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static blk_status_t FUNC_20(struct blk_mq_hw_ctx *VAR_10,
    const struct blk_mq_queue_data *VAR_11)
{
 struct request *VAR_12 = VAR_11->rq;
 struct request_queue *VAR_13 = VAR_12->q;
 struct scsi_device *VAR_14 = VAR_13->queuedata;
 struct Scsi_Host *VAR_15 = VAR_14->host;
 struct scsi_cmnd *VAR_16 = FUNC_2(VAR_12);
 blk_status_t VAR_17;
 int VAR_18;





 if (FUNC_19(VAR_14->sdev_state != VAR_8)) {
  VAR_17 = FUNC_14(VAR_14, VAR_12);
  if (VAR_17 != 129)
   goto out_put_budget;
 }

 VAR_17 = 128;
 if (!FUNC_18(VAR_15, VAR_14))
  goto out_put_budget;
 if (!FUNC_9(VAR_13, VAR_15, VAR_14))
  goto out_dec_target_busy;

 if (!(VAR_12->rq_flags & VAR_3)) {
  VAR_17 = FUNC_11(VAR_12);
  if (VAR_17 != 129)
   goto out_dec_host_busy;
  VAR_12->rq_flags |= VAR_3;
 } else {
  FUNC_4(VAR_6, &VAR_16->state);
  FUNC_3(VAR_12);
 }

 VAR_16->flags &= VAR_5;
 if (VAR_14->simple_tags)
  VAR_16->flags |= VAR_7;
 if (VAR_11->last)
  VAR_16->flags |= VAR_4;

 FUNC_10(VAR_16);
 VAR_16->scsi_done = VAR_9;

 VAR_18 = FUNC_8(VAR_16);
 if (VAR_18) {
  FUNC_16(VAR_16, VAR_18);
  VAR_17 = 128;
  goto out_dec_host_busy;
 }

 return 129;

out_dec_host_busy:
 FUNC_5(VAR_15);
out_dec_target_busy:
 if (FUNC_17(VAR_14)->can_queue > 0)
  FUNC_0(&FUNC_17(VAR_14)->target_busy);
out_put_budget:
 FUNC_12(VAR_10);
 switch (VAR_17) {
 case 129:
  break;
 case 128:
  if (FUNC_1(&VAR_14->device_busy) ||
      FUNC_6(VAR_14))
   VAR_17 = VAR_0;
  break;
 default:
  if (FUNC_19(!FUNC_7(VAR_14)))
   FUNC_15(VAR_12)->result = VAR_2 << 16;
  else
   FUNC_15(VAR_12)->result = VAR_1 << 16;





  if (VAR_12->rq_flags & VAR_3)
   FUNC_13(VAR_16);
  break;
 }
 return VAR_17;
}
