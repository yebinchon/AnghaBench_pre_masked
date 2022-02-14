
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hclge_dev*) ;
 int FUNC_3 (struct hclge_dev*) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (struct hclge_dev*) ;

int FUNC_7(struct hclge_dev *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;


 if (!FUNC_6(VAR_1))
  return 0;





 VAR_3 = FUNC_4(VAR_1);
 if (VAR_2 && VAR_3 == -VAR_0)
  FUNC_1(&VAR_1->pdev->dev, "GE MAC does not support pfc\n");
 else if (VAR_3) {
  FUNC_0(&VAR_1->pdev->dev, "config pfc failed! ret = %d\n",
   VAR_3);
  return VAR_3;
 }

 return FUNC_5(VAR_1);
}
