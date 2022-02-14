
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {void* long_resp_size; void* long_resp_addr; void* long_req_size; void* long_req_addr; } ;
struct smp_req {void* tag; TYPE_1__ long_smp_req; } ;
struct scatterlist {int dummy; } ;
struct TYPE_4__ {struct scatterlist smp_req; struct scatterlist smp_resp; } ;
struct sas_task {TYPE_2__ smp_task; struct domain_device* dev; } ;
struct pm8001_hba_info {int dev; struct inbound_queue_table* inbnd_q_tbl; } ;
struct pm8001_device {int device_id; } ;
struct pm8001_ccb_info {int ccb_tag; struct sas_task* task; } ;
struct inbound_queue_table {int dummy; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
typedef int smp_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,struct smp_req*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct scatterlist*,int,int ) ;
 int FUNC_4 (int ,struct scatterlist*,int,int ) ;
 int FUNC_5 (struct smp_req*,int ,int) ;
 int FUNC_6 (struct pm8001_hba_info*,struct inbound_queue_table*,int,int*,int ) ;
 scalar_t__ FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_9(struct pm8001_hba_info *VAR_5,
 struct pm8001_ccb_info *VAR_6)
{
 int VAR_7, VAR_8;
 struct sas_task *VAR_9 = VAR_6->task;
 struct domain_device *VAR_10 = VAR_9->dev;
 struct pm8001_device *VAR_11 = VAR_10->lldd_dev;
 struct scatterlist *VAR_12, *VAR_13;
 u32 VAR_14, VAR_15;
 struct smp_req VAR_16;
 u32 VAR_17;
 struct inbound_queue_table *VAR_18;

 FUNC_5(&VAR_16, 0, sizeof(VAR_16));



 VAR_12 = &VAR_9->smp_task.smp_req;
 VAR_7 = FUNC_3(VAR_5->dev, VAR_12, 1, VAR_1);
 if (!VAR_7)
  return -VAR_3;
 VAR_14 = FUNC_8(VAR_12);

 VAR_13 = &VAR_9->smp_task.smp_resp;
 VAR_7 = FUNC_3(VAR_5->dev, VAR_13, 1, VAR_0);
 if (!VAR_7) {
  VAR_8 = -VAR_3;
  goto err_out;
 }
 VAR_15 = FUNC_8(VAR_13);

 if ((VAR_14 & 0x3) || (VAR_15 & 0x3)) {
  VAR_8 = -VAR_2;
  goto err_out_2;
 }

 VAR_17 = VAR_4;
 VAR_18 = &VAR_5->inbnd_q_tbl[0];
 VAR_16.tag = FUNC_1(VAR_6->ccb_tag);
 VAR_16.long_smp_req.long_req_addr =
  FUNC_2((u64)FUNC_7(&VAR_9->smp_task.smp_req));
 VAR_16.long_smp_req.long_req_size =
  FUNC_1((u32)FUNC_8(&VAR_9->smp_task.smp_req)-4);
 VAR_16.long_smp_req.long_resp_addr =
  FUNC_2((u64)FUNC_7(&VAR_9->smp_task.smp_resp));
 VAR_16.long_smp_req.long_resp_size =
  FUNC_1((u32)FUNC_8(&VAR_9->smp_task.smp_resp)-4);
 FUNC_0(VAR_11->device_id, VAR_16.tag, &VAR_16);
 VAR_8 = FUNC_6(VAR_5, VAR_18, VAR_17,
     (u32 *)&VAR_16, 0);
 if (VAR_8)
  goto err_out_2;

 return 0;

err_out_2:
 FUNC_4(VAR_5->dev, &VAR_6->task->smp_task.smp_resp, 1,
   VAR_0);
err_out:
 FUNC_4(VAR_5->dev, &VAR_6->task->smp_task.smp_req, 1,
   VAR_1);
 return VAR_8;
}
