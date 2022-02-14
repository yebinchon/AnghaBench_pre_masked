
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_status_struct {int buf_valid_size; int resp; int stat; int * buf; } ;
struct sas_task {struct task_status_struct task_status; } ;
struct dev_to_host_fis {int status; } ;
struct ata_task_resp {int frame_len; int ending_fis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct dev_to_host_fis*,int) ;

__attribute__((used)) static void FUNC_2(struct sas_task *VAR_3, struct dev_to_host_fis *VAR_4)
{
 struct task_status_struct *VAR_5 = &VAR_3->task_status;
 struct ata_task_resp *VAR_6 = (void *)&VAR_5->buf[0];

 VAR_6->frame_len = sizeof(*VAR_4);
 FUNC_1(VAR_6->ending_fis, VAR_4, sizeof(*VAR_4));
 VAR_5->buf_valid_size = sizeof(*VAR_6);


 if (FUNC_0(VAR_4->status))
  VAR_5->stat = VAR_1;
 else
  VAR_5->stat = VAR_0;

 VAR_5->resp = VAR_2;
}
