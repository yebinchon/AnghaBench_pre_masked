
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vf_rst_cmd {int dest_vfid; int vf_rst; } ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct hclge_desc*,int) ;
 int FUNC_1 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_1, int VAR_2, bool VAR_3)
{
 struct hclge_vf_rst_cmd *VAR_4;
 struct hclge_desc VAR_5;

 VAR_4 = (struct hclge_vf_rst_cmd *)VAR_5.data;
 FUNC_1(&VAR_5, VAR_0, 0);
 VAR_4->dest_vfid = VAR_2;

 if (VAR_3)
  VAR_4->vf_rst = 0x1;

 return FUNC_0(&VAR_1->hw, &VAR_5, 1);
}
