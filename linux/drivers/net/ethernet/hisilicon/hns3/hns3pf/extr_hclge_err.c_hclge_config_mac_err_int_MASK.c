
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {void** data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_3, bool VAR_4)
{
 struct device *VAR_5 = &VAR_3->pdev->dev;
 struct hclge_desc VAR_6;
 int VAR_7;


 FUNC_3(&VAR_6, VAR_2, 0);
 if (VAR_4)
  VAR_6.data[0] = FUNC_0(VAR_0);

 VAR_6.data[1] = FUNC_0(VAR_1);

 VAR_7 = FUNC_2(&VAR_3->hw, &VAR_6, 1);
 if (VAR_7)
  FUNC_1(VAR_5,
   "fail(%d) to configure MAC COMMON error intr\n", VAR_7);

 return VAR_7;
}
