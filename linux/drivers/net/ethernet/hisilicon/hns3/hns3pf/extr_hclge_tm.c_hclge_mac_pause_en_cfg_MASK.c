
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int hw; } ;
struct hclge_desc {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

int FUNC_3(struct hclge_dev *VAR_3, bool VAR_4, bool VAR_5)
{
 struct hclge_desc VAR_6;

 FUNC_2(&VAR_6, VAR_0, 0);

 VAR_6.data[0] = FUNC_0((VAR_4 ? VAR_2 : 0) |
  (VAR_5 ? VAR_1 : 0));

 return FUNC_1(&VAR_3->hw, &VAR_6, 1);
}
