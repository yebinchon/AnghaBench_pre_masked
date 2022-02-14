
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int * data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_2, u32 *VAR_3,
         u32 *VAR_4)
{
 struct hclge_desc VAR_5;
 u32 VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5, VAR_1, 1);
 VAR_7 = FUNC_1(&VAR_2->hw, &VAR_5, 1);
 if (VAR_7) {
  FUNC_0(&VAR_2->pdev->dev,
   "Query register number cmd failed, ret = %d.\n", VAR_7);
  return VAR_7;
 }

 *VAR_3 = FUNC_3(VAR_5.data[0]);
 *VAR_4 = FUNC_3(VAR_5.data[1]);

 VAR_6 = *VAR_3 + *VAR_4;
 if (!VAR_6)
  return -VAR_0;

 return 0;
}
