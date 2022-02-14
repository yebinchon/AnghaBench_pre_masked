
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct hclge_desc*,int) ;
 int FUNC_1 (struct hclge_desc*,int ,int) ;
 int FUNC_2 (struct hclge_dev*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_2)
{
 struct hclge_desc VAR_3;
 u8 *VAR_4 = (u8 *)VAR_3.data;
 u8 VAR_5;
 int VAR_6;

 FUNC_1(&VAR_3, VAR_0, 0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 return FUNC_0(&VAR_2->hw, &VAR_3, 1);
}
