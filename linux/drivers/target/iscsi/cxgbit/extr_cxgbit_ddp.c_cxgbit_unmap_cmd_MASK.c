
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_conn {struct cxgbit_sock* context; } ;
struct TYPE_5__ {scalar_t__ data_length; } ;
struct iscsi_cmd {scalar_t__ write_data_done; TYPE_2__ se_cmd; } ;
struct TYPE_4__ {struct cxgbit_device* cdev; } ;
struct cxgbit_sock {TYPE_1__ com; } ;
struct cxgbit_device {int dummy; } ;
struct cxgbi_task_tag_info {int nents; scalar_t__ sgl; int idx; } ;
struct cxgbit_cmd {int release; int sg; struct cxgbi_task_tag_info ttinfo; } ;
struct cxgbi_ppm {TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 struct cxgbi_ppm* FUNC_0 (struct cxgbit_device*) ;
 int FUNC_1 (struct cxgbi_ppm*,int ) ;
 int FUNC_2 (struct cxgbit_sock*) ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 struct cxgbit_cmd* FUNC_4 (struct iscsi_cmd*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct iscsi_conn *VAR_1, struct iscsi_cmd *VAR_2)
{
 struct cxgbit_cmd *VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->release) {
  struct cxgbi_task_tag_info *VAR_4 = &VAR_3->ttinfo;

  if (VAR_4->sgl) {
   struct cxgbit_sock *VAR_5 = VAR_1->context;
   struct cxgbit_device *VAR_6 = VAR_5->com.cdev;
   struct cxgbi_ppm *VAR_7 = FUNC_0(VAR_6);





   if (FUNC_7(VAR_2->write_data_done !=
         VAR_2->se_cmd.data_length))
    FUNC_2(VAR_5);

   FUNC_1(VAR_7, VAR_4->idx);

   FUNC_3(&VAR_7->pdev->dev, VAR_4->sgl,
         VAR_4->nents, VAR_0);
  } else {
   FUNC_5(FUNC_6(&VAR_3->sg));
  }

  VAR_3->release = 0;
 }
}
