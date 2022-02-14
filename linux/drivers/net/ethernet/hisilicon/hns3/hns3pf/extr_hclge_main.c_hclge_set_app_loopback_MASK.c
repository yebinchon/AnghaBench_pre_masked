
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int * data; } ;
struct hclge_config_mac_mode_cmd {int txrx_pad_fcs_loop_en; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hclge_desc*,int) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_desc*,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_4, bool VAR_5)
{
 struct hclge_config_mac_mode_cmd *VAR_6;
 struct hclge_desc VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = (struct hclge_config_mac_mode_cmd *)&VAR_7.data[0];

 FUNC_4(&VAR_7, VAR_3, 1);
 VAR_9 = FUNC_3(&VAR_4->hw, &VAR_7, 1);
 if (VAR_9) {
  FUNC_1(&VAR_4->pdev->dev,
   "mac loopback get fail, ret =%d.\n", VAR_9);
  return VAR_9;
 }


 VAR_8 = FUNC_6(VAR_6->txrx_pad_fcs_loop_en);
 FUNC_5(VAR_8, VAR_0, VAR_5 ? 1 : 0);
 FUNC_5(VAR_8, VAR_2, VAR_5 ? 1 : 0);
 FUNC_5(VAR_8, VAR_1, VAR_5 ? 1 : 0);

 VAR_6->txrx_pad_fcs_loop_en = FUNC_0(VAR_8);




 FUNC_2(&VAR_7, 0);
 VAR_9 = FUNC_3(&VAR_4->hw, &VAR_7, 1);
 if (VAR_9)
  FUNC_1(&VAR_4->pdev->dev,
   "mac loopback set fail, ret =%d.\n", VAR_9);
 return VAR_9;
}
