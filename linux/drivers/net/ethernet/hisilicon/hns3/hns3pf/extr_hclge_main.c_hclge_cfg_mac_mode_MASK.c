
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_config_mac_mode_cmd {int txrx_pad_fcs_loop_en; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct hclge_dev *VAR_11, bool VAR_12)
{
 struct hclge_desc VAR_13;
 struct hclge_config_mac_mode_cmd *VAR_14 =
  (struct hclge_config_mac_mode_cmd *)VAR_13.data;
 u32 VAR_15 = 0;
 int VAR_16;

 FUNC_3(&VAR_13, VAR_10, 0);

 if (VAR_12) {
  FUNC_4(VAR_15, VAR_7, 1U);
  FUNC_4(VAR_15, VAR_3, 1U);
  FUNC_4(VAR_15, VAR_2, 1U);
  FUNC_4(VAR_15, VAR_1, 1U);
  FUNC_4(VAR_15, VAR_0, 1U);
  FUNC_4(VAR_15, VAR_4, 1U);
  FUNC_4(VAR_15, VAR_5, 1U);
  FUNC_4(VAR_15, VAR_8, 1U);
  FUNC_4(VAR_15, VAR_6, 1U);
  FUNC_4(VAR_15, VAR_9, 1U);
 }

 VAR_14->txrx_pad_fcs_loop_en = FUNC_0(VAR_15);

 VAR_16 = FUNC_2(&VAR_11->hw, &VAR_13, 1);
 if (VAR_16)
  FUNC_1(&VAR_11->pdev->dev,
   "mac enable fail, ret =%d.\n", VAR_16);
}
