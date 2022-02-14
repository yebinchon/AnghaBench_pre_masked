
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_mdp_dev {int * comp; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_mdp_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->pdev->dev;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->comp); VAR_2++)
  FUNC_1(VAR_1, VAR_0->comp[VAR_2]);
}
