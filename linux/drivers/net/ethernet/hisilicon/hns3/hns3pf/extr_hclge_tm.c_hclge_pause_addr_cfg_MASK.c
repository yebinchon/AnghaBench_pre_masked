
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_cfg_pause_param_cmd {int pause_trans_time; int pause_trans_gap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct hclge_desc*,int) ;
 int FUNC_1 (struct hclge_desc*,int ,int) ;
 int FUNC_2 (struct hclge_dev*,int const*,int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct hclge_dev *VAR_1, const u8 *VAR_2)
{
 struct hclge_cfg_pause_param_cmd *VAR_3;
 struct hclge_desc VAR_4;
 u16 VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_3 = (struct hclge_cfg_pause_param_cmd *)VAR_4.data;

 FUNC_1(&VAR_4, VAR_0, 1);

 VAR_7 = FUNC_0(&VAR_1->hw, &VAR_4, 1);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_3->pause_trans_gap;
 VAR_5 = FUNC_3(VAR_3->pause_trans_time);

 return FUNC_2(VAR_1, VAR_2, VAR_6, VAR_5);
}
