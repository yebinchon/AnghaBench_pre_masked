
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hclge_qs_to_pri_link_cmd {int link_vld; int priority; int qs_id; } ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_2,
          u16 VAR_3, u8 VAR_4)
{
 struct hclge_qs_to_pri_link_cmd *VAR_5;
 struct hclge_desc VAR_6;

 FUNC_2(&VAR_6, VAR_0, 0);

 VAR_5 = (struct hclge_qs_to_pri_link_cmd *)VAR_6.data;

 VAR_5->qs_id = FUNC_0(VAR_3);
 VAR_5->priority = VAR_4;
 VAR_5->link_vld = VAR_1;

 return FUNC_1(&VAR_2->hw, &VAR_6, 1);
}
