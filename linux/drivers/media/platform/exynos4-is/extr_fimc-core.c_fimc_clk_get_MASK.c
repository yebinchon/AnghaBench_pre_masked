
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_dev {TYPE_1__* pdev; void** clock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (struct fimc_dev*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_8(struct fimc_dev *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4->clock[VAR_5] = FUNC_0(-VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->clock[VAR_5] = FUNC_3(&VAR_4->pdev->dev, VAR_3[VAR_5]);
  if (FUNC_1(VAR_4->clock[VAR_5])) {
   VAR_6 = FUNC_2(VAR_4->clock[VAR_5]);
   goto err;
  }
  VAR_6 = FUNC_4(VAR_4->clock[VAR_5]);
  if (VAR_6 < 0) {
   FUNC_5(VAR_4->clock[VAR_5]);
   VAR_4->clock[VAR_5] = FUNC_0(-VAR_0);
   goto err;
  }
 }
 return 0;
err:
 FUNC_7(VAR_4);
 FUNC_6(&VAR_4->pdev->dev, "failed to get clock: %s\n",
  VAR_3[VAR_5]);
 return -VAR_1;
}
