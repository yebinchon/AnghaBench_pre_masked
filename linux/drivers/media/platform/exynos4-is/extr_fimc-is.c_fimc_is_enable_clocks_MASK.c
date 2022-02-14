
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_is {int * clocks; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int * VAR_1 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct fimc_is *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(VAR_2->clocks[VAR_3]))
   continue;
  VAR_4 = FUNC_2(VAR_2->clocks[VAR_3]);
  if (VAR_4 < 0) {
   FUNC_3(&VAR_2->pdev->dev, "clock %s enable failed\n",
    VAR_1[VAR_3]);
   for (--VAR_3; VAR_3 >= 0; VAR_3--)
    FUNC_1(VAR_2->clocks[VAR_3]);
   return VAR_4;
  }
  FUNC_4("enabled clock: %s\n", VAR_1[VAR_3]);
 }
 return 0;
}
