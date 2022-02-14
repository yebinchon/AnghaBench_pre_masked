
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hclge_vport {int nic; struct hclge_dev* back; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hclge_dev*,int ) ;
 int FUNC_3 (struct hclge_dev*,int ,int) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct hclge_vport *VAR_1, u16 VAR_2)
{
 struct hclge_dev *VAR_3 = VAR_1->back;
 int VAR_4 = 0;
 int VAR_5;
 u16 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(&VAR_1->nic, VAR_2);

 VAR_7 = FUNC_3(VAR_3, VAR_6, 1);
 if (VAR_7) {
  FUNC_0(&VAR_3->pdev->dev,
    "Send reset tqp cmd fail, ret = %d\n", VAR_7);
  return;
 }

 while (VAR_4++ < VAR_0) {
  VAR_5 = FUNC_2(VAR_3, VAR_6);
  if (VAR_5)
   break;


  FUNC_4(1000, 1200);
 }

 if (VAR_4 >= VAR_0) {
  FUNC_0(&VAR_3->pdev->dev, "Reset TQP fail\n");
  return;
 }

 VAR_7 = FUNC_3(VAR_3, VAR_6, 0);
 if (VAR_7)
  FUNC_0(&VAR_3->pdev->dev,
    "Deassert the soft reset fail, ret = %d\n", VAR_7);
}
