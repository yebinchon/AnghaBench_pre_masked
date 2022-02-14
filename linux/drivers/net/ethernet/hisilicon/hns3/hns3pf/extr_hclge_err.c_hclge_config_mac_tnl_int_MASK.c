
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {int hw; } ;
struct hclge_desc {void** data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

int FUNC_3(struct hclge_dev *VAR_3, bool VAR_4)
{
 struct hclge_desc VAR_5;

 FUNC_2(&VAR_5, VAR_2, 0);
 if (VAR_4)
  VAR_5.data[0] = FUNC_0(VAR_0);
 else
  VAR_5.data[0] = 0;

 VAR_5.data[1] = FUNC_0(VAR_1);

 return FUNC_1(&VAR_3->hw, &VAR_5, 1);
}
