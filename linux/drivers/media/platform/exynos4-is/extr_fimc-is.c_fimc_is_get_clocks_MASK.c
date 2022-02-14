
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_is {TYPE_1__* pdev; int * clocks; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int * VAR_2 ;
 int FUNC_5 (struct fimc_is*) ;

__attribute__((used)) static int FUNC_6(struct fimc_is *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->clocks[VAR_4] = FUNC_0(-VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->clocks[VAR_4] = FUNC_3(&VAR_3->pdev->dev, VAR_2[VAR_4]);
  if (FUNC_1(VAR_3->clocks[VAR_4])) {
   VAR_5 = FUNC_2(VAR_3->clocks[VAR_4]);
   goto err;
  }
 }

 return 0;
err:
 FUNC_5(VAR_3);
 FUNC_4(&VAR_3->pdev->dev, "failed to get clock: %s\n",
  VAR_2[VAR_4]);
 return VAR_5;
}
