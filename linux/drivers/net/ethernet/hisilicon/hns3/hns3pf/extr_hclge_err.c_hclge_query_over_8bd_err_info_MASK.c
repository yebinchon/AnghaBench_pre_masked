
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hclge_query_ppu_pf_other_int_dfx_cmd {int over_8bd_no_fe_qid; int over_8bd_no_fe_vf_id; } ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct hclge_desc*,int) ;
 int FUNC_1 (struct hclge_desc*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1, u16 *VAR_2,
      u16 *VAR_3)
{
 struct hclge_query_ppu_pf_other_int_dfx_cmd *VAR_4;
 struct hclge_desc VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5, VAR_0, 1);
 VAR_6 = FUNC_0(&VAR_1->hw, &VAR_5, 1);
 if (VAR_6)
  return VAR_6;

 VAR_4 = (struct hclge_query_ppu_pf_other_int_dfx_cmd *)VAR_5.data;
 *VAR_2 = FUNC_2(VAR_4->over_8bd_no_fe_vf_id);
 *VAR_3 = FUNC_2(VAR_4->over_8bd_no_fe_qid);

 return 0;
}
