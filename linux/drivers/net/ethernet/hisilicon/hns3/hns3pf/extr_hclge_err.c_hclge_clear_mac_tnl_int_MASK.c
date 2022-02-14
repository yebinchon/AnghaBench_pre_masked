
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int hw; } ;
struct hclge_desc {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_2)
{
 struct hclge_desc VAR_3;

 FUNC_2(&VAR_3, VAR_1, 0);
 VAR_3.data[0] = FUNC_0(VAR_0);

 return FUNC_1(&VAR_2->hw, &VAR_3, 1);
}
