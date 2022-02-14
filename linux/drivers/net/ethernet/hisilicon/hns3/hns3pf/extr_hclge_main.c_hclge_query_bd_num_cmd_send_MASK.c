
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int hw; } ;
struct hclge_desc {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

int FUNC_3(struct hclge_dev *VAR_2, struct hclge_desc *VAR_3)
{

 FUNC_2(&VAR_3[0], VAR_1, 1);
 VAR_3[0].flag |= FUNC_0(VAR_0);
 FUNC_2(&VAR_3[1], VAR_1, 1);
 VAR_3[1].flag |= FUNC_0(VAR_0);
 FUNC_2(&VAR_3[2], VAR_1, 1);
 VAR_3[2].flag |= FUNC_0(VAR_0);
 FUNC_2(&VAR_3[3], VAR_1, 1);

 return FUNC_1(&VAR_2->hw, VAR_3, 4);
}
