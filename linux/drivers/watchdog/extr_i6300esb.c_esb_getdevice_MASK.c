
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct esb_dev {TYPE_1__* pdev; int * base; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct esb_dev*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static unsigned char FUNC_7(struct esb_dev *VAR_1)
{
 if (FUNC_3(VAR_1->pdev)) {
  FUNC_0(&VAR_1->pdev->dev, "failed to enable device\n");
  goto err_devput;
 }

 if (FUNC_6(VAR_1->pdev, 0, VAR_0)) {
  FUNC_0(&VAR_1->pdev->dev, "failed to request region\n");
  goto err_disable;
 }

 VAR_1->base = FUNC_4(VAR_1->pdev, 0);
 if (VAR_1->base == ((void*)0)) {

  FUNC_0(&VAR_1->pdev->dev, "failed to get BASEADDR\n");
  goto err_release;
 }


 FUNC_1(&VAR_1->pdev->dev, VAR_1);
 return 1;

err_release:
 FUNC_5(VAR_1->pdev, 0);
err_disable:
 FUNC_2(VAR_1->pdev);
err_devput:
 return 0;
}
