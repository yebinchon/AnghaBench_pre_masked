
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_config_fec_cmd {int fec_mode; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_9, u32 VAR_10)
{
 struct hclge_config_fec_cmd *VAR_11;
 struct hclge_desc VAR_12;
 int VAR_13;

 FUNC_3(&VAR_12, VAR_5, 0);

 VAR_11 = (struct hclge_config_fec_cmd *)VAR_12.data;
 if (VAR_10 & FUNC_0(VAR_6))
  FUNC_4(VAR_11->fec_mode, VAR_0, 1);
 if (VAR_10 & FUNC_0(VAR_8))
  FUNC_5(VAR_11->fec_mode, VAR_1,
    VAR_2, VAR_4);
 if (VAR_10 & FUNC_0(VAR_7))
  FUNC_5(VAR_11->fec_mode, VAR_1,
    VAR_2, VAR_3);

 VAR_13 = FUNC_2(&VAR_9->hw, &VAR_12, 1);
 if (VAR_13)
  FUNC_1(&VAR_9->pdev->dev, "set fec mode failed %d.\n", VAR_13);

 return VAR_13;
}
