
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssp_ini_tm_start_req {int ds_ads_m; void* tag; int lun; void* tmf; void* relate_tag; void* device_id; } ;
struct TYPE_2__ {int LUN; } ;
struct sas_task {TYPE_1__ ssp_task; struct domain_device* dev; } ;
struct pm8001_tmf_task {int tmf; int tag_of_task_to_be_managed; } ;
struct pm8001_hba_info {scalar_t__ chip_id; struct inbound_queue_table* inbnd_q_tbl; } ;
struct pm8001_device {int device_id; } ;
struct pm8001_ccb_info {int ccb_tag; struct sas_task* task; } ;
struct inbound_queue_table {int dummy; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
typedef int sspTMCmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ssp_ini_tm_start_req*,int ,int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct inbound_queue_table*,int ,struct ssp_ini_tm_start_req*,int ) ;

int FUNC_4(struct pm8001_hba_info *VAR_2,
 struct pm8001_ccb_info *VAR_3, struct pm8001_tmf_task *VAR_4)
{
 struct sas_task *VAR_5 = VAR_3->task;
 struct domain_device *VAR_6 = VAR_5->dev;
 struct pm8001_device *VAR_7 = VAR_6->lldd_dev;
 u32 VAR_8 = VAR_0;
 struct inbound_queue_table *VAR_9;
 struct ssp_ini_tm_start_req VAR_10;
 int VAR_11;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.device_id = FUNC_0(VAR_7->device_id);
 VAR_10.relate_tag = FUNC_0(VAR_4->tag_of_task_to_be_managed);
 VAR_10.tmf = FUNC_0(VAR_4->tmf);
 FUNC_1(VAR_10.lun, VAR_5->ssp_task.LUN, 8);
 VAR_10.tag = FUNC_0(VAR_3->ccb_tag);
 if (VAR_2->chip_id != VAR_1)
  VAR_10.ds_ads_m = 0x08;
 VAR_9 = &VAR_2->inbnd_q_tbl[0];
 VAR_11 = FUNC_3(VAR_2, VAR_9, VAR_8, &VAR_10, 0);
 return VAR_11;
}
