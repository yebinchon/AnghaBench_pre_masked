
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclgevf_dev {int hw_tc_map; TYPE_1__* pdev; } ;
typedef int resp_msg ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int *,int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct hclgevf_dev *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, 0, ((void*)0), 0,
          1, &VAR_2, sizeof(VAR_2));
 if (VAR_3) {
  FUNC_0(&VAR_1->pdev->dev,
   "VF request to get TC info from PF failed %d",
   VAR_3);
  return VAR_3;
 }

 VAR_1->hw_tc_map = VAR_2;

 return 0;
}
