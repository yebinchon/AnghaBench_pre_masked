
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_dev {int hw; } ;
struct hclge_desc {int * data; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int *,struct hclge_desc*,int) ;
 int FUNC_1 (struct hclge_desc*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1, u32 *VAR_2)
{
 struct hclge_desc VAR_3;
 __le32 *VAR_4;
 u32 VAR_5;
 int VAR_6;

 FUNC_1(&VAR_3, VAR_0, 1);
 VAR_6 = FUNC_0(&VAR_1->hw, &VAR_3, 1);
 if (VAR_6)
  return VAR_6;

 VAR_4 = (__le32 *)(&VAR_3.data[0]);
 VAR_5 = FUNC_2(*VAR_4);

 *VAR_2 = 1 + ((VAR_5 - 3) >> 2) +
      (u32)(((VAR_5 - 3) & 0x3) ? 1 : 0);

 return 0;
}
