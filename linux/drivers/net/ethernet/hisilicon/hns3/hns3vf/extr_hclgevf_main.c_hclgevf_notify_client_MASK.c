
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hnae3_client {TYPE_2__* ops; } ;
struct hclgevf_dev {TYPE_1__* pdev; int state; struct hnae3_handle nic; struct hnae3_client* nic_client; } ;
typedef enum hnae3_reset_notify_type { ____Placeholder_hnae3_reset_notify_type } hnae3_reset_notify_type ;
struct TYPE_4__ {int (* reset_notify ) (struct hnae3_handle*,int) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct hnae3_handle*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hclgevf_dev *VAR_2,
     enum hnae3_reset_notify_type VAR_3)
{
 struct hnae3_client *VAR_4 = VAR_2->nic_client;
 struct hnae3_handle *VAR_5 = &VAR_2->nic;
 int VAR_6;

 if (!FUNC_2(VAR_1, &VAR_2->state) ||
     !VAR_4)
  return 0;

 if (!VAR_4->ops->reset_notify)
  return -VAR_0;

 VAR_6 = VAR_4->ops->reset_notify(VAR_5, VAR_3);
 if (VAR_6)
  FUNC_0(&VAR_2->pdev->dev, "notify nic client failed %d(%d)\n",
   VAR_3, VAR_6);

 return VAR_6;
}
