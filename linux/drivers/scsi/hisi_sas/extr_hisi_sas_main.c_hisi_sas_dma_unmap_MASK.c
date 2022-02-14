
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int smp_req; } ;
struct sas_task {int task_proto; int num_scatter; TYPE_1__ smp_task; int data_dir; int * scatter; } ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *,int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct hisi_hba *VAR_2,
          struct sas_task *VAR_3, int VAR_4,
          int VAR_5)
{
 struct device *VAR_6 = VAR_2->dev;

 if (!FUNC_1(VAR_3->task_proto)) {
  if (VAR_3->num_scatter) {
   if (VAR_4)
    FUNC_0(VAR_6, VAR_3->scatter,
          VAR_3->num_scatter,
          VAR_3->data_dir);
  } else if (VAR_3->task_proto & VAR_1) {
   if (VAR_5)
    FUNC_0(VAR_6, &VAR_3->smp_task.smp_req,
          1, VAR_0);
  }
 }
}
