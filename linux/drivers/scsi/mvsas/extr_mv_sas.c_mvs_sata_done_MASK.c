
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_status_struct {int buf_valid_size; scalar_t__ buf; } ;
struct sas_task {struct task_status_struct task_status; TYPE_1__* dev; } ;
struct mvs_info {int dummy; } ;
struct mvs_device {int taskfileset; } ;
struct dev_to_host_fis {int dummy; } ;
struct ata_task_resp {int frame_len; int * ending_fis; } ;
struct TYPE_2__ {struct mvs_device* lldd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mvs_info *VAR_4, struct sas_task *VAR_5,
   u32 VAR_6, int VAR_7)
{
 struct mvs_device *VAR_8 = VAR_5->dev->lldd_dev;
 struct task_status_struct *VAR_9 = &VAR_5->task_status;
 struct ata_task_resp *VAR_10 = (struct ata_task_resp *)VAR_9->buf;
 int VAR_11 = VAR_1;


 VAR_10->frame_len = sizeof(struct dev_to_host_fis);
 FUNC_1(&VAR_10->ending_fis[0],
        FUNC_0(VAR_8->taskfileset),
        sizeof(struct dev_to_host_fis));
 VAR_9->buf_valid_size = sizeof(*VAR_10);
 if (FUNC_2(VAR_7)) {
  if (FUNC_2(VAR_7 & VAR_0))
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_3;
       }

 return VAR_11;
}
