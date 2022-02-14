
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_cfg_pause_param_cmd {int pause_trans_time; int pause_trans_gap; int mac_addr_extra; int mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_1, const u8 *VAR_2,
     u8 VAR_3, u16 VAR_4)
{
 struct hclge_cfg_pause_param_cmd *VAR_5;
 struct hclge_desc VAR_6;

 VAR_5 = (struct hclge_cfg_pause_param_cmd *)VAR_6.data;

 FUNC_3(&VAR_6, VAR_0, 0);

 FUNC_1(VAR_5->mac_addr, VAR_2);
 FUNC_1(VAR_5->mac_addr_extra, VAR_2);
 VAR_5->pause_trans_gap = VAR_3;
 VAR_5->pause_trans_time = FUNC_0(VAR_4);

 return FUNC_2(&VAR_1->hw, &VAR_6, 1);
}
