
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;





 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_0, u8 VAR_1)
{
 switch (VAR_1) {
 case 130:
  FUNC_0(&VAR_0->pdev->dev, "Reference clock lost!\n");
  break;
 case 128:
  FUNC_0(&VAR_0->pdev->dev, "SFP tx is disabled!\n");
  break;
 case 129:
  FUNC_0(&VAR_0->pdev->dev, "SFP is absent!\n");
  break;
 default:
  break;
 }
}
