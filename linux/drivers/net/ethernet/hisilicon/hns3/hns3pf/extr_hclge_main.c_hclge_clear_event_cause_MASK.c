
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_dev {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_2, u32 VAR_3,
        u32 VAR_4)
{
 switch (VAR_3) {
 case 128:
  FUNC_0(&VAR_2->hw, VAR_0, VAR_4);
  break;
 case 129:
  FUNC_0(&VAR_2->hw, VAR_1, VAR_4);
  break;
 default:
  break;
 }
}
