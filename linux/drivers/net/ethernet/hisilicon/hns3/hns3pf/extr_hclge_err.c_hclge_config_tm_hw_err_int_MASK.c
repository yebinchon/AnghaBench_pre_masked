
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
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct hclge_dev*,struct hclge_desc*,int ,int ) ;
 int FUNC_3 (struct hclge_desc*,int) ;
 int FUNC_4 (int *,struct hclge_desc*,int) ;
 int FUNC_5 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_4, bool VAR_5)
{
 struct device *VAR_6 = &VAR_4->pdev->dev;
 struct hclge_desc VAR_7;
 int VAR_8;


 FUNC_5(&VAR_7, VAR_3, 0);
 if (VAR_5)
  VAR_7.data[0] = FUNC_0(VAR_2);

 VAR_8 = FUNC_4(&VAR_4->hw, &VAR_7, 1);
 if (VAR_8) {
  FUNC_1(VAR_6, "fail(%d) to configure TM SCH errors\n", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_2(VAR_4, &VAR_7, VAR_1, 0);
 if (VAR_8) {
  FUNC_1(VAR_6, "fail(%d) to read TM QCN CFG status\n", VAR_8);
  return VAR_8;
 }

 FUNC_3(&VAR_7, 0);
 if (VAR_5)
  VAR_7.data[1] = FUNC_0(VAR_0);

 VAR_8 = FUNC_4(&VAR_4->hw, &VAR_7, 1);
 if (VAR_8)
  FUNC_1(VAR_6,
   "fail(%d) to configure TM QCN mem errors\n", VAR_8);

 return VAR_8;
}
