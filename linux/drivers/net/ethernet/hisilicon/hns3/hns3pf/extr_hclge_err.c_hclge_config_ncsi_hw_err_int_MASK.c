
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {int * data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int revision; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_2, bool VAR_3)
{
 struct device *VAR_4 = &VAR_2->pdev->dev;
 struct hclge_desc VAR_5;
 int VAR_6;

 if (VAR_2->pdev->revision < 0x21)
  return 0;


 FUNC_3(&VAR_5, VAR_1, 0);
 if (VAR_3)
  VAR_5.data[0] = FUNC_0(VAR_0);

 VAR_6 = FUNC_2(&VAR_2->hw, &VAR_5, 1);
 if (VAR_6)
  FUNC_1(VAR_4,
   "fail(%d) to configure  NCSI error interrupts\n", VAR_6);

 return VAR_6;
}
