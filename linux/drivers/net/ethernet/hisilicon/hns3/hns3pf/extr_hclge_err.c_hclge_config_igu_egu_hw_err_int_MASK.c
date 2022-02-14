
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (struct hclge_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_6, bool VAR_7)
{
 struct device *VAR_8 = &VAR_6->pdev->dev;
 struct hclge_desc VAR_9;
 int VAR_10;


 FUNC_3(&VAR_9, VAR_0, 0);
 if (VAR_7)
  VAR_9.data[0] = FUNC_0(VAR_2);

 VAR_9.data[1] = FUNC_0(VAR_3);

 VAR_10 = FUNC_2(&VAR_6->hw, &VAR_9, 1);
 if (VAR_10) {
  FUNC_1(VAR_8,
   "fail(%d) to configure IGU common interrupts\n", VAR_10);
  return VAR_10;
 }

 FUNC_3(&VAR_9, VAR_1, 0);
 if (VAR_7)
  VAR_9.data[0] = FUNC_0(VAR_4);

 VAR_9.data[1] = FUNC_0(VAR_5);

 VAR_10 = FUNC_2(&VAR_6->hw, &VAR_9, 1);
 if (VAR_10) {
  FUNC_1(VAR_8,
   "fail(%d) to configure IGU-EGU TNL interrupts\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_6, VAR_7);

 return VAR_10;
}
