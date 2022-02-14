
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct request {int q; int * end_io_data; int timeout; int tag; } ;
struct nvme_queue {int qid; struct nvme_dev* dev; } ;
struct nvme_iod {int aborted; struct nvme_queue* nvmeq; } ;
struct TYPE_6__ {int state; int abort_limit; int admin_q; int device; } ;
struct nvme_dev {TYPE_2__ ctrl; int dev; scalar_t__ bar; } ;
struct TYPE_5__ {int sqid; int cid; int opcode; } ;
struct nvme_command {TYPE_1__ abort; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
typedef int cmd ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct request*) ;



 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,struct request*,int ,int ) ;
 struct nvme_iod* FUNC_4 (struct request*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct nvme_command*,int ,int) ;
 int VAR_8 ;
 struct request* FUNC_10 (int ,struct nvme_command*,int ,int ) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (struct nvme_dev*,int) ;
 scalar_t__ FUNC_13 (struct nvme_queue*,int ) ;
 TYPE_3__* FUNC_14 (struct request*) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (struct nvme_dev*,int ) ;
 int FUNC_17 (struct nvme_dev*,int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static enum blk_eh_timer_return FUNC_21(struct request *VAR_9, bool VAR_10)
{
 struct nvme_iod *VAR_11 = FUNC_4(VAR_9);
 struct nvme_queue *VAR_12 = VAR_11->nvmeq;
 struct nvme_dev *VAR_13 = VAR_12->dev;
 struct request *VAR_14;
 struct nvme_command VAR_15;
 u32 VAR_16 = FUNC_19(VAR_13->bar + VAR_5);




 FUNC_8();
 if (FUNC_18(FUNC_20(VAR_13->dev)))
  return VAR_2;




 if (FUNC_16(VAR_13, VAR_16)) {
  FUNC_17(VAR_13, VAR_16);
  FUNC_12(VAR_13, 0);
  FUNC_15(&VAR_13->ctrl);
  return VAR_1;
 }




 if (FUNC_13(VAR_12, VAR_9->tag)) {
  FUNC_6(VAR_13->ctrl.device,
    "I/O %d QID %d timeout, completion polled\n",
    VAR_9->tag, VAR_12->qid);
  return VAR_1;
 }







 switch (VAR_13->ctrl.state) {
 case 130:
  FUNC_11(&VAR_13->ctrl, 129);

 case 129:
  FUNC_7(VAR_13->ctrl.device,
    "I/O %d QID %d timeout, disable controller\n",
    VAR_9->tag, VAR_12->qid);
  FUNC_12(VAR_13, 1);
  FUNC_14(VAR_9)->flags |= VAR_6;
  return VAR_1;
 case 128:
  return VAR_2;
 default:
  break;
 }






 if (!VAR_12->qid || VAR_11->aborted) {
  FUNC_6(VAR_13->ctrl.device,
    "I/O %d QID %d timeout, reset controller\n",
    VAR_9->tag, VAR_12->qid);
  FUNC_12(VAR_13, 0);
  FUNC_15(&VAR_13->ctrl);

  FUNC_14(VAR_9)->flags |= VAR_6;
  return VAR_1;
 }

 if (FUNC_1(&VAR_13->ctrl.abort_limit) < 0) {
  FUNC_2(&VAR_13->ctrl.abort_limit);
  return VAR_2;
 }
 VAR_11->aborted = 1;

 FUNC_9(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.abort.opcode = VAR_8;
 VAR_15.abort.cid = VAR_9->tag;
 VAR_15.abort.sqid = FUNC_5(VAR_12->qid);

 FUNC_6(VAR_12->dev->ctrl.device,
  "I/O %d QID %d timeout, aborting\n",
   VAR_9->tag, VAR_12->qid);

 VAR_14 = FUNC_10(VAR_13->ctrl.admin_q, &VAR_15,
   VAR_3, VAR_4);
 if (FUNC_0(VAR_14)) {
  FUNC_2(&VAR_13->ctrl.abort_limit);
  return VAR_2;
 }

 VAR_14->timeout = VAR_0;
 VAR_14->end_io_data = ((void*)0);
 FUNC_3(VAR_14->q, ((void*)0), VAR_14, 0, VAR_7);






 return VAR_2;
}
