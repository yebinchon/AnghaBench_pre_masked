
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_config_max_frm_size_cmd {int min_frm_size; int max_frm_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_2, int VAR_3)
{
 struct hclge_config_max_frm_size_cmd *VAR_4;
 struct hclge_desc VAR_5;

 FUNC_2(&VAR_5, VAR_1, 0);

 VAR_4 = (struct hclge_config_max_frm_size_cmd *)VAR_5.data;
 VAR_4->max_frm_size = FUNC_0(VAR_3);
 VAR_4->min_frm_size = VAR_0;

 return FUNC_1(&VAR_2->hw, &VAR_5, 1);
}
