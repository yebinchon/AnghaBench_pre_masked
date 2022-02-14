
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hclge_pg_shapping_cmd {int pg_shapping_para; int pg_id; } ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
typedef enum hclge_shap_bucket { ____Placeholder_hclge_shap_bucket } hclge_shap_bucket ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_2,
        enum hclge_shap_bucket VAR_3, u8 VAR_4,
        u32 VAR_5)
{
 struct hclge_pg_shapping_cmd *VAR_6;
 enum hclge_opcode_type VAR_7;
 struct hclge_desc VAR_8;

 VAR_7 = VAR_3 ? VAR_1 :
   VAR_0;
 FUNC_2(&VAR_8, VAR_7, 0);

 VAR_6 = (struct hclge_pg_shapping_cmd *)VAR_8.data;

 VAR_6->pg_id = VAR_4;

 VAR_6->pg_shapping_para = FUNC_0(VAR_5);

 return FUNC_1(&VAR_2->hw, &VAR_8, 1);
}
