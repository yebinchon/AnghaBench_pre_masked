
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclge_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_1(VAR_2);
 struct hclge_dev *VAR_4 = VAR_3->back;
 int VAR_5;

 FUNC_0(&VAR_4->pdev->dev, "restart autoneg\n");

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;
 return FUNC_2(VAR_4, VAR_1);
}
