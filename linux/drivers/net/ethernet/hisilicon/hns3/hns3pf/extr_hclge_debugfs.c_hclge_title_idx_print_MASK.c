
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char*,int,char*) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_0, bool VAR_1, int VAR_2,
      char *VAR_3, char *VAR_4,
      char *VAR_5)
{
 if (VAR_1)
  FUNC_0(&VAR_0->pdev->dev, "%s(%d): %s\n", VAR_3, VAR_2,
    VAR_4);
 else
  FUNC_0(&VAR_0->pdev->dev, "%s(%d): %s\n", VAR_3, VAR_2,
    VAR_5);
}
