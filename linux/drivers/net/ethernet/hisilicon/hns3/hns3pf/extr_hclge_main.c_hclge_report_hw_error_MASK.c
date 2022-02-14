
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct hnae3_client {TYPE_2__* ops; } ;
struct hclge_dev {size_t num_vmdq_vport; TYPE_1__* vport; int state; struct hnae3_client* nic_client; } ;
typedef enum hnae3_hw_error_type { ____Placeholder_hnae3_hw_error_type } hnae3_hw_error_type ;
struct TYPE_4__ {int (* process_hw_error ) (int *,int) ;} ;
struct TYPE_3__ {int nic; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct hclge_dev *VAR_1,
      enum hnae3_hw_error_type VAR_2)
{
 struct hnae3_client *VAR_3 = VAR_1->nic_client;
 u16 VAR_4;

 if (!VAR_3 || !VAR_3->ops->process_hw_error ||
     !FUNC_1(VAR_0, &VAR_1->state))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_vmdq_vport + 1; VAR_4++)
  VAR_3->ops->process_hw_error(&VAR_1->vport[VAR_4].nic, VAR_2);
}
