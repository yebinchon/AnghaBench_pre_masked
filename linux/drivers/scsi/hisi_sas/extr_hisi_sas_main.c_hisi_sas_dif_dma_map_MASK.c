
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct sas_ssp_task {struct scsi_cmnd* cmd; } ;
struct sas_task {int data_dir; struct sas_ssp_task ssp_task; scalar_t__ num_scatter; } ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct device*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_5(struct hisi_hba *VAR_3,
    int *VAR_4, struct sas_task *VAR_5)
{
 struct device *VAR_6 = VAR_3->dev;
 struct sas_ssp_task *VAR_7;
 struct scsi_cmnd *VAR_8;
 int VAR_9;

 if (VAR_5->num_scatter) {
  VAR_7 = &VAR_5->ssp_task;
  VAR_8 = VAR_7->cmd;

  if (FUNC_3(VAR_8)) {
   *VAR_4 = FUNC_1(VAR_6,
       FUNC_4(VAR_8),
       FUNC_3(VAR_8),
       VAR_5->data_dir);

   if (!*VAR_4)
    return -VAR_1;

   if (*VAR_4 > VAR_2) {
    FUNC_0(VAR_6, "task prep: n_elem_dif(%d) too large\n",
     *VAR_4);
    VAR_9 = -VAR_0;
    goto err_out_dif_dma_unmap;
   }
  }
 }

 return 0;

err_out_dif_dma_unmap:
 FUNC_2(VAR_6, FUNC_4(VAR_8),
       FUNC_3(VAR_8), VAR_5->data_dir);
 return VAR_9;
}
