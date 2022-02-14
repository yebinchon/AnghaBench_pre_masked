
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mtk_mdp_dev {TYPE_1__* pdev; int vpu_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_1 ;
 struct mtk_mdp_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;

int FUNC_3(struct platform_device *VAR_2)
{
 struct mtk_mdp_dev *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->vpu_dev, VAR_0,
          VAR_1, "mdp_vpu", ((void*)0));
 if (VAR_4)
  FUNC_0(&VAR_3->pdev->dev,
   "vpu_ipi_registration fail status=%d\n", VAR_4);

 return VAR_4;
}
