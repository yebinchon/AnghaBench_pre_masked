
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_4__ {int support_autoneg; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_3__* pdev; TYPE_2__ hw; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclge_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_1, bool VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_1(VAR_1);
 struct hclge_dev *VAR_4 = VAR_3->back;

 if (!VAR_4->hw.mac.support_autoneg) {
  if (VAR_2) {
   FUNC_0(&VAR_4->pdev->dev,
    "autoneg is not supported by current port\n");
   return -VAR_0;
  } else {
   return 0;
  }
 }

 return FUNC_2(VAR_4, VAR_2);
}
