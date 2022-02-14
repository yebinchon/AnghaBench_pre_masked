
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_bp_to_qs_map_cmd {int qs_bit_map; void* qs_group_id; void* tc_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1, u8 VAR_2, u8 VAR_3,
         u32 VAR_4)
{
 struct hclge_bp_to_qs_map_cmd *VAR_5;
 struct hclge_desc VAR_6;

 FUNC_2(&VAR_6, VAR_0,
       0);

 VAR_5 = (struct hclge_bp_to_qs_map_cmd *)VAR_6.data;

 VAR_5->tc_id = VAR_2;
 VAR_5->qs_group_id = VAR_3;
 VAR_5->qs_bit_map = FUNC_0(VAR_4);

 return FUNC_1(&VAR_1->hw, &VAR_6, 1);
}
