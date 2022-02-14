
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct task_status_struct {int buf_valid_size; scalar_t__ buf; } ;
struct sas_task {struct task_status_struct task_status; } ;
struct hisi_sas_status_buffer {int * iu; } ;
struct hisi_sas_slot {int dummy; } ;
struct dev_to_host_fis {int dummy; } ;
struct ata_task_resp {int frame_len; int * ending_fis; } ;


 struct hisi_sas_status_buffer* FUNC_0 (struct hisi_sas_slot*) ;
 int FUNC_1 (int *,struct dev_to_host_fis*,int) ;

void FUNC_2(struct sas_task *VAR_0,
       struct hisi_sas_slot *VAR_1)
{
 struct task_status_struct *VAR_2 = &VAR_0->task_status;
 struct ata_task_resp *VAR_3 = (struct ata_task_resp *)VAR_2->buf;
 struct hisi_sas_status_buffer *VAR_4 =
   FUNC_0(VAR_1);
 u8 *VAR_5 = &VAR_4->iu[0];
 struct dev_to_host_fis *VAR_6 = (struct dev_to_host_fis *)VAR_5;

 VAR_3->frame_len = sizeof(struct dev_to_host_fis);
 FUNC_1(&VAR_3->ending_fis[0], VAR_6, sizeof(struct dev_to_host_fis));

 VAR_2->buf_valid_size = sizeof(*VAR_3);
}
