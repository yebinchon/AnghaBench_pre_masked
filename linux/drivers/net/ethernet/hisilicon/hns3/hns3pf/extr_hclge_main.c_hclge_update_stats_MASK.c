
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {int dummy; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int state; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 struct hclge_vport* FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hclge_dev*) ;
 int FUNC_4 (struct hnae3_handle*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct hnae3_handle *VAR_1,
          struct net_device_stats *VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_2(VAR_1);
 struct hclge_dev *VAR_4 = VAR_3->back;
 int VAR_5;

 if (FUNC_5(VAR_0, &VAR_4->state))
  return;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  FUNC_1(&VAR_4->pdev->dev,
   "Update MAC stats fail, status = %d.\n",
   VAR_5);

 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5)
  FUNC_1(&VAR_4->pdev->dev,
   "Update TQPS stats fail, status = %d.\n",
   VAR_5);

 FUNC_0(VAR_0, &VAR_4->state);
}
