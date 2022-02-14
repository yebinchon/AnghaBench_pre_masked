
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct sas_ssp_task {struct scsi_cmnd* cmd; } ;
struct sas_task {int data_dir; struct sas_ssp_task ssp_task; } ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_0,
       struct sas_task *VAR_1, int VAR_2)
{
 struct device *VAR_3 = VAR_0->dev;

 if (VAR_2) {
  struct sas_ssp_task *VAR_4 = &VAR_1->ssp_task;
  struct scsi_cmnd *VAR_5 = VAR_4->cmd;

  FUNC_0(VAR_3, FUNC_2(VAR_5),
        FUNC_1(VAR_5),
        VAR_1->data_dir);
 }
}
