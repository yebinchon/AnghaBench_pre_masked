
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hclge_qs_weight_cmd {int dwrr; int qs_id; } ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1, u16 VAR_2,
      u8 VAR_3)
{
 struct hclge_qs_weight_cmd *VAR_4;
 struct hclge_desc VAR_5;

 FUNC_2(&VAR_5, VAR_0, 0);

 VAR_4 = (struct hclge_qs_weight_cmd *)VAR_5.data;

 VAR_4->qs_id = FUNC_0(VAR_2);
 VAR_4->dwrr = VAR_3;

 return FUNC_1(&VAR_1->hw, &VAR_5, 1);
}
