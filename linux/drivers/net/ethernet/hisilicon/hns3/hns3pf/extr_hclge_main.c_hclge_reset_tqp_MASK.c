
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct hnae3_handle*,int ) ;
 int FUNC_2 (struct hclge_dev*,int ) ;
 struct hclge_vport* FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct hclge_dev*,int ,int) ;
 int FUNC_5 (struct hclge_dev*,int ,int ,int) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct hnae3_handle *VAR_1, u16 VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_3(VAR_1);
 struct hclge_dev *VAR_4 = VAR_3->back;
 int VAR_5 = 0;
 int VAR_6;
 u16 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_1, VAR_2);

 VAR_8 = FUNC_5(VAR_4, VAR_2, 0, 0);
 if (VAR_8) {
  FUNC_0(&VAR_4->pdev->dev, "Disable tqp fail, ret = %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_7, 1);
 if (VAR_8) {
  FUNC_0(&VAR_4->pdev->dev,
   "Send reset tqp cmd fail, ret = %d\n", VAR_8);
  return VAR_8;
 }

 while (VAR_5++ < VAR_0) {
  VAR_6 = FUNC_2(VAR_4, VAR_7);
  if (VAR_6)
   break;


  FUNC_6(1000, 1200);
 }

 if (VAR_5 >= VAR_0) {
  FUNC_0(&VAR_4->pdev->dev, "Reset TQP fail\n");
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_7, 0);
 if (VAR_8)
  FUNC_0(&VAR_4->pdev->dev,
   "Deassert the soft reset fail, ret = %d\n", VAR_8);

 return VAR_8;
}
