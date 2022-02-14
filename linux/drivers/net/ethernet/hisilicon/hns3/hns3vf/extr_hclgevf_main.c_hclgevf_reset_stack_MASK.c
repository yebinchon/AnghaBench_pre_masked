
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclgevf_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hclgevf_dev*,int ) ;
 int FUNC_2 (struct hclgevf_dev*,int) ;
 int FUNC_3 (struct hclgevf_dev*) ;

__attribute__((used)) static int FUNC_4(struct hclgevf_dev *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_3->pdev->dev,
   "hclge device re-init failed, VF is disabled!\n");
  return VAR_4;
 }


 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;


 FUNC_2(VAR_3, 0);

 return 0;
}
