
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {int flag; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_0,
     struct hclge_desc *VAR_1, u32 VAR_2, u16 VAR_3)
{
 struct device *VAR_4 = &VAR_0->pdev->dev;
 int VAR_5 = 1;
 int VAR_6;

 FUNC_3(&VAR_1[0], VAR_2, 1);
 if (VAR_3) {
  VAR_1[0].flag |= FUNC_0(VAR_3);
  FUNC_3(&VAR_1[1], VAR_2, 1);
  VAR_5 = 2;
 }

 VAR_6 = FUNC_2(&VAR_0->hw, &VAR_1[0], VAR_5);
 if (VAR_6)
  FUNC_1(VAR_4, "query error cmd failed (%d)\n", VAR_6);

 return VAR_6;
}
