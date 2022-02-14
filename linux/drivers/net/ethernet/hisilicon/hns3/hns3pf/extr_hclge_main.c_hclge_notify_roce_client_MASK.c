
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct hnae3_handle {int dummy; } ;
struct hnae3_client {TYPE_2__* ops; } ;
struct hclge_dev {size_t num_vmdq_vport; TYPE_3__* pdev; TYPE_1__* vport; int state; struct hnae3_client* roce_client; } ;
typedef enum hnae3_reset_notify_type { ____Placeholder_hnae3_reset_notify_type } hnae3_reset_notify_type ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* reset_notify ) (struct hnae3_handle*,int) ;} ;
struct TYPE_4__ {struct hnae3_handle roce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct hnae3_handle*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_2,
        enum hnae3_reset_notify_type VAR_3)
{
 struct hnae3_client *VAR_4 = VAR_2->roce_client;
 int VAR_5 = 0;
 u16 VAR_6;

 if (!FUNC_2(VAR_1, &VAR_2->state) || !VAR_4)
  return 0;

 if (!VAR_4->ops->reset_notify)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2->num_vmdq_vport + 1; VAR_6++) {
  struct hnae3_handle *VAR_7 = &VAR_2->vport[VAR_6].roce;

  VAR_5 = VAR_4->ops->reset_notify(VAR_7, VAR_3);
  if (VAR_5) {
   FUNC_0(&VAR_2->pdev->dev,
    "notify roce client failed %d(%d)",
    VAR_3, VAR_5);
   return VAR_5;
  }
 }

 return VAR_5;
}
