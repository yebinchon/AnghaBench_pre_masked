
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_cfg_param_cmd {int offset; } ;
struct hclge_cfg {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (struct hclge_cfg*,struct hclge_desc*) ;
 int FUNC_5 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_8, struct hclge_cfg *VAR_9)
{
 struct hclge_desc VAR_10[VAR_7];
 struct hclge_cfg_param_cmd *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  u32 VAR_14 = 0;

  VAR_11 = (struct hclge_cfg_param_cmd *)VAR_10[VAR_12].data;
  FUNC_3(&VAR_10[VAR_12], VAR_6,
        1);
  FUNC_5(VAR_14, VAR_0,
    VAR_1, VAR_12 * VAR_2);

  FUNC_5(VAR_14, VAR_3, VAR_4,
    VAR_2 / VAR_5);
  VAR_11->offset = FUNC_0(VAR_14);
 }

 VAR_13 = FUNC_2(&VAR_8->hw, VAR_10, VAR_7);
 if (VAR_13) {
  FUNC_1(&VAR_8->pdev->dev, "get config failed %d.\n", VAR_13);
  return VAR_13;
 }

 FUNC_4(VAR_9, VAR_10);

 return 0;
}
