
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclgevf_dev {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hclgevf_dev *VAR_2, bool VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(&VAR_2->hw, VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;

 FUNC_1(&VAR_2->hw, VAR_0,
     VAR_4);
}
