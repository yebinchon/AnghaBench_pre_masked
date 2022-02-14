
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {scalar_t__ client; } ;
struct hclge_dev {TYPE_2__* pdev; TYPE_1__* vport; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct hnae3_handle nic; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclge_dev*) ;
 int FUNC_2 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_0)
{
 struct hnae3_handle *VAR_1;
 int VAR_2;

 VAR_1 = &VAR_0->vport[0].nic;
 if (VAR_1->client) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2) {
   FUNC_0(&VAR_0->pdev->dev,
    "Update TQPS stats fail, status = %d.\n",
    VAR_2);
  }
 }

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_0->pdev->dev,
   "Update MAC stats fail, status = %d.\n", VAR_2);
}
