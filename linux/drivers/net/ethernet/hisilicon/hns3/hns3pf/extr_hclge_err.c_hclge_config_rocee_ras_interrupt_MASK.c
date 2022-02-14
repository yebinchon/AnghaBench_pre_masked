
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {void** data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int revision; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hclge_dev*) ;

int FUNC_6(struct hclge_dev *VAR_5, bool VAR_6)
{
 struct device *VAR_7 = &VAR_5->pdev->dev;
 struct hclge_desc VAR_8;
 int VAR_9;

 if (VAR_5->pdev->revision < 0x21 || !FUNC_5(VAR_5))
  return 0;

 FUNC_3(&VAR_8, VAR_0, 0);
 if (VAR_6) {

  VAR_8.data[0] = FUNC_0(VAR_3);
  VAR_8.data[1] = FUNC_0(VAR_1);

  FUNC_4(VAR_5);
 }
 VAR_8.data[2] = FUNC_0(VAR_4);
 VAR_8.data[3] = FUNC_0(VAR_2);

 VAR_9 = FUNC_2(&VAR_5->hw, &VAR_8, 1);
 if (VAR_9)
  FUNC_1(VAR_7, "failed(%d) to config ROCEE RAS interrupt\n", VAR_9);

 return VAR_9;
}
