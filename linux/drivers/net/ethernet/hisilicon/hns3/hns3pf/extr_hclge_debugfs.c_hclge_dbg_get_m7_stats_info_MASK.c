
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_get_m7_bd_cmd {int bd_num; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int * data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (struct hclge_dev*,struct hclge_desc*,int ,int,int ) ;
 int FUNC_5 (struct hclge_desc*) ;
 struct hclge_desc* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct hclge_dev *VAR_3)
{
 struct hclge_desc *VAR_4, *VAR_5;
 struct hclge_get_m7_bd_cmd *VAR_6;
 struct hclge_desc VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 FUNC_3(&VAR_7, VAR_1, 1);

 VAR_6 = (struct hclge_get_m7_bd_cmd *)VAR_7.data;
 VAR_10 = FUNC_2(&VAR_3->hw, &VAR_7, 1);
 if (VAR_10) {
  FUNC_0(&VAR_3->pdev->dev,
   "get firmware statistics bd number failed, ret = %d\n",
   VAR_10);
  return;
 }

 VAR_8 = FUNC_7(VAR_6->bd_num);

 VAR_9 = sizeof(struct hclge_desc) * VAR_8;
 VAR_4 = FUNC_6(VAR_9, VAR_0);
 if (!VAR_4) {
  FUNC_0(&VAR_3->pdev->dev,
   "allocate desc for get_m7_stats failed\n");
  return;
 }

 VAR_5 = VAR_4;
 VAR_10 = FUNC_4(VAR_3, VAR_5, 0, VAR_8,
      VAR_2);
 if (VAR_10) {
  FUNC_5(VAR_4);
  FUNC_0(&VAR_3->pdev->dev,
   "get firmware statistics failed, ret = %d\n", VAR_10);
  return;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  FUNC_1(&VAR_3->pdev->dev, "0x%08x  0x%08x  0x%08x\n",
    FUNC_7(VAR_5->data[0]),
    FUNC_7(VAR_5->data[1]),
    FUNC_7(VAR_5->data[2]));
  FUNC_1(&VAR_3->pdev->dev, "0x%08x  0x%08x  0x%08x\n",
    FUNC_7(VAR_5->data[3]),
    FUNC_7(VAR_5->data[4]),
    FUNC_7(VAR_5->data[5]));

  VAR_5++;
 }

 FUNC_5(VAR_4);
}
